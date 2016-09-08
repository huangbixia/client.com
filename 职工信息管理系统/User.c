#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "header.h"


void FoutputData2(Puser t);//��������û���Ϣ���ļ�����
void QueryU();             //�鿴����Ա��Ϣ
void UpdateU();            //�޸Ĺ���Ա����
void AddU();               //���ӹ���Ա
void DeleteU();            //ɾ������Ա

void User(void)
{
	int n;  //���Ʋ�ѯѡ��
	int flag = 1;  //�Ƿ��˻����˵�
	char str[SIZE];
	char superuser[SIZE];

    	printf("\t\t������6λ���������û��ܳף�������123456��");
    	scanf("%s",superuser);

	    if(strcmp("123456",superuser)!=0)
		{
			printf("\n");
		    printf("\t�ܳ״���\n");
		}
	    else
		{
		  for(;;)
		  {
	        for(;;)
			{
             printf("\n\t������������������������������������������������������������������������������������������\n");
	         printf("\n\t1���鿴���ù�����Ա��Ϣ");
	         printf("\t\t2���޸Ĺ�����Ա����\n\n");
	         printf("\t3�����ӹ�����Ա��Ϣ");
			 printf("\t\t4��ɾ������Ա\n\n");
			 printf("\t5���˻����˵�\n");
             printf("\n\t������������������������������������������������������������������������������������������\n");
			 printf("\t��ѡ��");
			 scanf("%s",str);
			 n = Check(str,1,5);
			 if(n!=0)break;
			}
		
		  switch(n)
		  {
		     case 1:
				 QueryU();
				 break;
			 case 2:
				 UpdateU();
				 break;
			 case 3:
				 AddU();
				 break;
			 case 4:
				 DeleteU();
				 break;
			 case 5:
				 flag = 0;
				 break;
		  }	
		  
	      if(flag==0)
		  {
		printf("\n\n\t�ѳɹ��˻����˵���");
		break;
		  }

		} 
		 
		}
	
}

//�鿴����Ա��Ϣ
void QueryU()
{
	Puser p;
	
	p = (Puser)malloc(sizeof(user));
    FoutputData2(p);                          //�Ѵ����ļ��Ĺ���Ա��Ϣ������t������
    
	printf("\n\t����������������������������������������������\n");
	printf("\t      ����Ա          ����          \n ");
	printf("\t����������������������������������������������\n");
	p = p->next;
	while(p)
	{
		printf("\n\t%-10s\t    %s\n",p->user,p->pwd);
		p = p->next;
	}
  printf("\n\t����������������������������������������������\n");
}

void AddU()
{
	char name[SIZE];
	char pwd[SIZE];
	Puser tmp;
	FILE *fp;

	printf("\n\t���������Ա������");
	scanf("%s",name);
	printf("\n\t���������룺");
	scanf("%s",pwd);
    
	tmp = (Puser)malloc(sizeof(user));  //�ý�����ڸ���������Ϣ׷�ӵ��ļ���
	tmp->next = NULL;
	strcpy(tmp->user,name);
	strcpy(tmp->pwd,pwd);

	if((fp=fopen("password.txt","at"))==NULL)
	{
		printf("\n\tThe file can't open!\n");
		exit(-1);
	}

	fwrite(tmp,sizeof(user),1,fp);   //����Ϣ׷�ӵ��ļ���
	
	fclose(fp);
}


//ɾ������Ա��Ϣ
void DeleteU()
{
	FILE *fp;
	char name[SIZE];
	Puser p,q;
	Puser pre,r;
	int flag = 0;

	printf("\n\t������������");
	scanf("%s",name);

	p = (Puser)malloc(sizeof(user));

    FoutputData2(p);    //�Ѵ����ļ��Ĺ���Ա��Ϣ������p������

	pre = p;
	q = p->next;

	while(q)
	{
		if(strcmp(q->user,name)==0)    //����Ҫɾ���Ĺ���Ա��ִ��ɾ�����˳�ѭ��
		{
			r = q;
			pre->next = q->next;
			q = q->next;
			free(r);
			flag = 1;
			break;
		}
		else
		{
			pre = q;
			q = q->next;
		}
	}

	if(flag==0)
    {
		printf("\n\tɾ���Ĺ���Ա�����ڣ�\n\n");
	}
	else
	{
		/*
		*ɾ���˹���Ա��Ϣ��
		���޸ĺ���������Ϣ����ԭ�ļ�����Ϣ
		*
		*/
		printf("\n\tɾ���ɹ���\n\n");

		if((fp=fopen("password.txt","wt"))==NULL)
		{
			printf("\n\tThe file can]t open!\n");
		}
		p = p->next;
		while(p)
		{
			fwrite(p,sizeof(user),1,fp);
			p = p->next;
		}

		fclose(fp);
	}


}


//�޸Ĺ���Ա����
void UpdateU()
{
	FILE *fp;
	char name[SIZE];
	char pwd1[SIZE],pwd2[SIZE];
	Puser p,q;
	int flag = 0;

	printf("\n\t������������");
	scanf("%s",name);
	printf("\n");
	for(;;)
	{
      printf("\n\t�����������룺");
   	  scanf("%s",pwd1);
   	  printf("\n");
	  printf("\n\t���ٴ����������룺");
	  scanf("%s",pwd2);
	  if(strcmp(pwd1,pwd2)==0)
	  {
		  break;
	  }
	  else
	  {
		  printf("\n\t�����������벻һ�£����������룡\n");
	  }
    }

	p = (Puser)malloc(sizeof(user));
    FoutputData2(p);    //�Ѵ����ļ��Ĺ���Ա��Ϣ������p������
    
	q = p->next;
	while(q)             //Ѱ��Ҫ�޸ĵĹ���Ա
	{
		if(strcmp(q->user,name)==0)
		{
			strcpy(q->pwd,pwd1);
			flag = 1;
			break;
		}
		q = q->next; 
	}

	if(flag==0)
	{
		printf("\n\t�޸ĵĹ���Ա�����ڣ�\n");
	}
	else
	{
		printf("\n\t�޸ĳɹ���\n\n");
	}

	/*
	*���޸ĺ����Ϣ���ǵ�ԭ�ļ�
	*
	*/
    if((fp=fopen("password.txt","wt"))==NULL)
	{
	  printf("The file can't open!\n");
	  getchar();
	  exit(-1);
	}

	p = p->next;
	while(p)
	{
		fwrite(p,sizeof(user),1,fp);    //����ԭ�ļ�
		p = p->next;
	}

	fclose(fp);
}


//���ļ��й���Ա���������Ϣ������������
void FoutputData2(Puser t)
{
  FILE * fp;
  Puser q;
  Puser k = NULL; //���ڼ�¼�����ɵĽ���ǰ��
  
  if((fp=fopen("password.txt","rt"))==NULL)
  {
	  printf("The file can't open!\n");
	  getchar();
	  exit(-1);
  }

  q = (Puser)malloc(sizeof(user));
  if(!q)
  {
	  printf("�����ڴ�ʧ�ܣ�\n");
	  exit(-1);
  }

  t->next = q;   //���ļ��������ӵ�p������

  while(fread(q,sizeof(user),1,fp)!=0)
  {
    k = q;
	q->next = (Puser)malloc(sizeof(user));
	q = q->next;
  }

  k->next = NULL;   //�Ѷ����ɵ�һ�����ȥ��

  fclose(fp);
}


