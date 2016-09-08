#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "header.h"

void CountAge(PClerk t); //ͳ����������

void CountSex(PClerk t);  //ͳ���Ա�����

void CountDept(PClerk t);  //ͳ��ѧԺ��ʦ����

void DataGraph(PClerk p)
{
    char str[SIZE];
	int n = 0;    //���Ʋ�ѯѡ��
	int tag = 0;   //�����Ƿ��˳���ѯ
    PClerk q = p->next;
	PClerk t;

  for(;;)
  {
	for(;;)
	{
	  printf("\n\t��������������������������������������������������������\n\n");
	  printf("\t1����Ů����");
	  printf("\t\t2����ѧԺ��ʦ����\n\n");
	  printf("\t3���ֶ���������");
	  printf("\t\t4������");
	  printf("\n\n\t��������������������������������������������������������\n"); 
	  printf("\t��ѡ��");

	  //�ж�����ֵ�Ƿ�Ϸ�
	    scanf("%s",str);     
        n = Check(str,1,4);
	    if(n!=-1)break;
	}

	t = q; //ʹָ��ָ���һ����Ч���
	switch(n)
	{
	  case 1:
		 CountSex(t);
         break;
	  case 2:
		 CountDept(p);
		 break;
	  case 3:
         CountAge(t);
		 break;
	  case 4:
		  tag = 1;
		  break;
  }
	if(tag==1)
	{
		printf("\n\n\t�ѳɹ��˳���ѯ��");
		break;
	}
  }
}

//ͳ���Ա���������������ͼ
void CountSex(PClerk t)
{
	char sex[3] = "��";
	int female = 0;
	int male = 0;
	int i = 0;
	int j;
	int total;

   while(t)   //ͳ������
	{
	   if(strcmp(t->sex,sex)==0)male++;
       else female++;
       t = t->next;
	 }
   total = female + male;
    printf("\n\t\t  |\n");
   

	//��������ͼ
	for(i=1;i<=3;i++)
	{
		if(i==2)
		  printf("\t�н�ʦ����|");
		else
		  printf("\t\t  |");
		for(j=1;j<=male;j++)
		  printf("*");
		if(i==2)
		  printf(" ( %d )\n",male);
		else
		  printf("\n");
	}
    printf("\t\t  |\n");
   
	   for(i=1;i<=3;i++)
	   {
		   if(i==2)
			   printf("\tŮ��ʦ����|");
		   else
			   printf("\t\t  |");
		   for(j=1;j<=female;j++)
			   printf("*");
		   if(i==2)
			   printf(" ( %d )\n",female);
		   else
			   printf("\n");
	   }
	   printf("\n\t��������\t%d\n",total);
}


//ͳ�Ƹ��������������������ͼ

void CountAge(PClerk t)
{
	int a = 0;
	int b = 0;
	int c = 0;
	int d = 0;
	int e = 0;
	int i;
	int j;
	int total;

	while(t)
	{
		if((t->age >= 20)&&(t->age < 30))a++;		
		if((t->age >= 30)&&(t->age < 40))b++;
		if((t->age >= 40)&&(t->age < 50))c++;
		if((t->age >= 50)&&(t->age < 60))d++;
		if((t->age >= 60)&&(t->age < 70))e++;
		t = t->next;
	}
    total = a + b + c + d + e;

	printf("\n");
   for(i=1;i<=3;i++)
		 {
		     if(i==2)
			    printf("\t   20~30��|");
		     else
			    printf("\t\t  |");
		     for(j=1;j<=a;j++)
			    printf("*");
		     if(i==2)
			    printf(" ( %d )\n",a);
		    else
			    printf("\n");
		 }
      printf("\n");

   for(i=1;i<=3;i++)
		 {
		     if(i==2)
			    printf("\t   30~40��|");
		     else
			    printf("\t\t  |");
		     for(j=1;j<=b;j++)
			    printf("*");
		     if(i==2)
			    printf(" ( %d )\n",b);
		    else
			    printf("\n");
		 }

	  	printf("\n");
   for(i=1;i<=3;i++)
		 {
		     if(i==2)
			    printf("\t   40~50��|");
		     else
			    printf("\t\t  |");
		     for(j=1;j<=c;j++)
			    printf("*");
		     if(i==2)
			    printf(" ( %d )\n",c);
		    else
			    printf("\n");
		 }

	  	printf("\n");
   for(i=1;i<=3;i++)
		 {
		     if(i==2)
			    printf("\t   50~60��|");
		     else
			    printf("\t\t  |");
		     for(j=1;j<=d;j++)
			    printf("*");
		     if(i==2)
			    printf(" ( %d )\n",d);
		    else
			    printf("\n");
		 }

		printf("\n");
   for(i=1;i<=3;i++)
		 {
		     if(i==2)
			    printf("\t   60~70��|");
		     else
			    printf("\t\t  |");
		     for(j=1;j<=e;j++)
			    printf("*");
		     if(i==2)
			    printf(" ( %d )\n",e);
		    else
			    printf("\n");
		 }
    printf("\n\t��������\t%d\n",total);
}


//ͳ�Ƹ�ѧԺ��ʦ��������������ͼ

void CountDept(PClerk p)
{	  
    PClerk k; 
	PClerk t;
	PClerk tmp;  
	PClerk q;      //���ڱ���
	PClerk r;      //�����ͷ�Ҫɾ���Ľ��
	PClerk ptmp;   //���ڼ�¼�������ְ����ѧԺ���������ͷ���
	int num[SIZE]; //���ڴ�Ÿ�ѧԺ��ʦ����
    int i,j;
	int a;
	int total = 0;	
	int total2 = 0;
    t = p->next;

	k = Init();
	ptmp = k;

	while(t)        //����������ְ����ѧԺ�������뵽tmp������
	{
		k->next  = (PClerk)malloc(sizeof(Clerk));
		k = k->next;
		strcpy(k->dept,t->dept);
		t = t->next;	
		k->next = NULL;
	}


	tmp = ptmp->next;

	while(tmp)    //�Ѵ������ְ������ѧԺ���Ƶ�������ظ�ѧԺ��ȥ��
	{
		q = tmp;
		while(q->next)
		{
			if(strcmp(tmp->dept,q->next->dept)==0)  //һ�������ظ���ɾ��
			{
				r = q->next;
				q->next = r->next;
				free(r);
			}
			else
			{
				q = q->next;
			}
		}
		tmp = tmp->next;
	}

	r = ptmp;
   for(r=r->next,i=0;r!=NULL;r=r->next,i++) //����Countdept()����ͳ�Ƹ�ѧԺ����
	{
       num[i] = CountCdept(p,r->dept);
	   total2 = total2 + num[i];
	}

      ptmp = ptmp->next;

      for(a=0;ptmp!=NULL;a++,ptmp = ptmp->next)  //���ͼ��
	  {
   	     printf("\n");
         for(i=1;i<=1;i++)
		 {
			printf("\t%-10s|",ptmp->dept);

		    for(j=1;j<=num[a];j++)
			printf("*");

			printf(" ( %d )\n",num[a]);
		 }
	  }
	   printf("\n\t��������\t%d\n",total2);

}