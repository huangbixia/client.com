#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "header.h"

void show(PClerk p);//������ʾ�޸ĺ����Ϣ

void Update_No(PClerk q);//ѡ��ְ�����޸�

void Update_Name(PClerk q);//ѡ�������޸�

void chose_update(PClerk q);//�޸���Ϣ


void UpdateData(PClerk p)
{
	char str[SIZE];
	int n = 0;  //���Ʋ�ѯѡ��
	int flag;  //�����Ƿ��˳��޸�
    PClerk q = p->next;

for(;;)
{
	for(;;)
	{
     	printf("\t������������������������������������������������\n");
	    printf("\n");
	    printf("\t1����ְ���Ų�ѯ���޸�\n\n");
    	printf("\t2����������ѯ���޸�\n\n");
		printf("\t3���˳��޸�\n\n");
		printf("\t������������������������������������������������\n");
		printf("\n\n");
		printf("\t��ѡ��");

       //�ж�����ֵ�Ƿ�Ϸ�
	    scanf("%s",str);     
        n = Check(str,1,3);
	    if(n!=-1)break;
	}

	if(n==1)
	{
		Update_No(q);
	}	

	if(n==2)
	{
		Update_Name(q);
	}

	if(n==3) flag = 0;
		
	
	if(flag==0)
	{
		printf("\n\n\t�ѳɹ��˳��޸ģ�");
	    break;}
}
}


void Update_No(PClerk q)
{
	PClerk t;
    char no[7];

	for(;;)
	{
	   printf("\n\t������ְ���ţ�");      
	   scanf("%s",no);
       t = q;
	        while(t)      //�г��޸�֮ǰ����Ϣ
			{
		       if(strcmp(t->no,no)==0)
			   {
			      printf("\n");
                  printf("\t����������������������������������������������������������������������������������������\n");
	              printf("\tְ����\t����\t�Ա�\t����\t����\tְ��\tרҵ\t\t  �绰\t\t ����");
        	      printf("\n");
	              printf("\t����������������������������������������������������������������������������������������\n");
	              printf("\n");
		          printf("\t%s\t",t->no);
	     	      printf("%s\t",t->name);
		          printf("%s\t",t->sex);
		          printf("%d\t",t->age);
	    	      printf("%s\t",t->dept);
	           	  printf("%s\t",t->job);
	    	      printf("%-9s\t",t->profession);
	    	      printf("%s\t",t->number);
	    	      printf("%0.2f\n",t->salary);
		          printf("\n");
		          printf("\t����������������������������������������������������������������������������������������\n");
			      break;
			   }
			   else
			   {
				   t = t->next;
			   }
			}
	   if(!t)
	   {
	       printf("\n\t�����ҵ�ְ����Ϣ�����ڣ�\n");
	   }
	   else break;  //��ְ����Ϣ����ʱ�˳�ѭ��
	}
	  chose_update(t);   //���ú�����������Ϣ�޸�

	  printf("\n");	
}


void Update_Name(PClerk q)
{
	PClerk t;
	PClerk tmp;
	char name[SIZE];
	int i = 0;   //ͳ��ְ���������ж�ְ���Ƿ����
	int j = 0;   //���Ʊ�ͷֻ���һ��

	for(;;)
	{
	  printf("\n\t������������");      
	  scanf("%s",name);
      t = q;

	//�г��޸�֮ǰ����Ϣ
	  while(t)
	  {
		 if(strstr(t->name,name)!=NULL)   //���������ַ������Ƿ���������ַ���
		 {
			i = i + 1;
		    if(j==0)      //�����ڲ��ҵ������������ͷ
			{
				printf("\n");
                printf("\t����������������������������������������������������������������������������������������\n");
	            printf("\tְ����\t����\t�Ա�\t����\t����\tְ��\tרҵ\t\t  �绰\t\t ����");
        	    printf("\n");
	            printf("\t����������������������������������������������������������������������������������������\n");
			}
	        printf("\n");
		    printf("\t%s\t",t->no);
	        printf("%s\t",t->name);
		    printf("%s\t",t->sex);
		    printf("%d\t",t->age);
	    	printf("%s\t",t->dept);
	    	printf("%s\t",t->job);
	    	printf("%-9s\t",t->profession);
	    	printf("%s\t",t->number);
	    	printf("%0.2f\n",t->salary);
            if(i==1)
			{ tmp = t;
			}
			j = 1;    //���Ʊ�ͷֻ���һ��
		 }
		  t = t->next;
	}

	   if(i==0)
	   {
	       printf("\n\t�����ҵ�ְ����Ϣ�����ڣ�\n");
	   }
	   if(i!=0)break;  //��ְ����Ϣ����ʱ���˳�ѭ��
	}

	   if(i==1)  //���ֻ��һ����Ϣ����ֱ���޸�
	   {
		 printf("\n");
		 printf("\t����������������������������������������������������������������������������������������\n");
	     chose_update(tmp);   //���ú�����������Ϣ�޸�
	   }
	   if(i>1)  //�������ͬ����Ϣ
	   {
		 printf("\n");
		 printf("\t����������������������������������������������������������������������������������������\n");
	     //���ú�����������Ϣ�޸�
         Update_No(q);
	   }
	  printf("\n");	

}

void show(PClerk q)
{
	              printf("\n");
                  printf("\t����������������������������������������������������������������������������������������\n");
	              printf("\tְ����\t����\t�Ա�\t����\t����\tְ��\tרҵ\t\t  �绰\t\t ����");
        	      printf("\n");
	              printf("\t����������������������������������������������������������������������������������������\n");
	              printf("\n");
		          printf("\t%s\t",q->no);
	     	      printf("%s\t",q->name);
		          printf("%s\t",q->sex);
		          printf("%d\t",q->age);
	    	      printf("%s\t",q->dept);
	           	  printf("%s\t",q->job);
	    	      printf("%-9s\t",q->profession);
	    	      printf("%s\t",q->number);
	    	      printf("%0.2f\n",q->salary);
		          printf("\n");
		          printf("\t����������������������������������������������������������������������������������������\n");
}

void chose_update(PClerk q)
{
	int n;   //���Ʋ�ѯѡ��
	int k = 1;  //���ƽ����޸�
	char str[SIZE];
	char name[SIZE];
	char sex[3];
	int age;
	char dept[SIZE];
	char profession[SIZE];
	char job[SIZE];
	float salary;
	char number[11];

	for(;;)	
	{
	   for(;;)
	   {
		 printf("\n");
	     printf("\t1������\t2���Ա�\n\n");      //ѡ��Ҫ�޸ĵ���Ϣ
	     printf("\t3������\t4������\n\n");
	     printf("\t5��ְ��\t6��רҵ\n\n");
	     printf("\t7���绰\t8������\n\n");
		 printf("\t9�������޸�\n\n");
		 printf("\t������������������������������������������������\n");
	     printf("\n\n");
	     printf("\t��ѡ���޸��");

	   //�ж�����ֵ�Ƿ�Ϸ�
	     scanf("%s",str);     
         n = Check(str,1,9);
	     if(n!=-1)break;
	   }

	  switch(n)     
	  {
	    case 1:
			printf("\n\t������������");
			scanf("%s",name);
			strcpy(q->name,name);
			show(q);
			break;
		case 2:
			printf("\n\t�������Ա�");
			scanf("%s",sex);
			strcpy(q->sex,sex);
			show(q);
			break;
		case 3:
			printf("\n\t���������䣺");
			scanf("%d",&age);
			q->age = age;
			show(q);
			break;
		case 4:
			printf("\n\t�����벿�ţ�");
			scanf("%s",dept);
			strcpy(q->dept,dept);
			show(q);
			break;
		case 5:
			printf("\n\t������ְ�ƣ�");
			scanf("%s",job);
			strcpy(q->job,job);
			show(q);
			break;
		case 6:
			printf("\n\t������רҵ��");
			scanf("%s",profession);
			strcpy(q->profession,profession);
			show(q);
			break;
		case 7:
			printf("\n\t������绰��");
			scanf("%s",number);
			strcpy(q->number,number);
			show(q);
			break;
		case 8:
			printf("\n\t�����빤�ʣ�");
			scanf("%f",&salary);
			q->salary = salary;
			show(q);
			break;
		case 9:
			k = 0;
	  }
	  if(k==0)
	{
		break;
	} //�����޸�

	}
}