#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "header.h"

void Add_Data(PClerk p)
{
	
	PClerk q;
	PClerk w;
	PClerk t = p;
	int flag = 0;  //�ж�������ְ�����Ƿ��ظ��Լ��Ƿ�������
	w = p->next ;
   
while(flag==0)
{

	while(t->next)   //���������һ�����
	{
		t = t->next;
	}

    q = (PClerk)malloc(sizeof(Clerk));
	q->next = NULL;
	if(q==NULL)
	{
		printf("\t�����ڴ�ʧ�ܣ�\n");
	}

    else{
	   printf("\t��������������������ʼ���ְ�����ݩ�����������������\n\n");
	   printf("\t������ְ����(6λ)��");
	   scanf("%s",q->no);

	   while(w!=NULL)
	   {
		   if(strcmp(w->no,q->no)==0)
		   {
			   flag = 1;
		       break;
		   }
		   w = w->next ;
	   }

       if (flag==1) 
	   {
		   printf("\n\n\tְ�����ظ�������������!\n");
		   break;
	   }

	   printf("\n");
       printf("\t������������");
	   scanf("%s",q->name);
	   printf("\n");
	   printf("\t�������Ա�");
	   scanf("%s",q->sex);
	   printf("\n");
	   printf("\t���������䣺");
	   scanf("%d",&q->age);
	   printf("\n");
	   printf("\t������ѧԺ��");
	   scanf("%s",q->dept);
	   printf("\n");
	   printf("\t������רҵ��");
	   scanf("%s",q->profession);
	   printf("\n");
	   printf("\t������ְ�ƣ�");
	   scanf("%s",q->job);
	   printf("\n");
	   printf("\t�����빤�ʣ�");
	   scanf("%f",&(q->salary));
	   printf("\n");
	   printf("\t������绰���룺");
	   scanf("%s",q->number);

        printf("\n");

    
	t->next = q;                    //���½��Ľ��������ԭ��������
	q->next = NULL;
	flag=1;
	}

}
   
}