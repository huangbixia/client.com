#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "header.h"

void Add_Data(PClerk p)
{
	
	PClerk q;
	PClerk w;
	PClerk t = p;
	int flag = 0;  //判断新增的职工号是否重复以及是否结束添加
	w = p->next ;
   
while(flag==0)
{

	while(t->next)   //找链表最后一个结点
	{
		t = t->next;
	}

    q = (PClerk)malloc(sizeof(Clerk));
	q->next = NULL;
	if(q==NULL)
	{
		printf("\t分配内存失败！\n");
	}

    else{
	   printf("\t─────────开始添加职工数据─────────\n\n");
	   printf("\t请输入职工号(6位)：");
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
		   printf("\n\n\t职工号重复，请重新输入!\n");
		   break;
	   }

	   printf("\n");
       printf("\t请输入姓名：");
	   scanf("%s",q->name);
	   printf("\n");
	   printf("\t请输入性别：");
	   scanf("%s",q->sex);
	   printf("\n");
	   printf("\t请输入年龄：");
	   scanf("%d",&q->age);
	   printf("\n");
	   printf("\t请输入学院：");
	   scanf("%s",q->dept);
	   printf("\n");
	   printf("\t请输入专业：");
	   scanf("%s",q->profession);
	   printf("\n");
	   printf("\t请输入职称：");
	   scanf("%s",q->job);
	   printf("\n");
	   printf("\t请输入工资：");
	   scanf("%f",&(q->salary));
	   printf("\n");
	   printf("\t请输入电话号码：");
	   scanf("%s",q->number);

        printf("\n");

    
	t->next = q;                    //把新建的结点链接在原有链表上
	q->next = NULL;
	flag=1;
	}

}
   
}