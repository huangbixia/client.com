#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "header.h"

void CountAge(PClerk t); //统计年龄人数

void CountSex(PClerk t);  //统计性别人数

void CountDept(PClerk t);  //统计学院教师人数

void DataGraph(PClerk p)
{
    char str[SIZE];
	int n = 0;    //控制查询选项
	int tag = 0;   //控制是否退出查询
    PClerk q = p->next;
	PClerk t;

  for(;;)
  {
	for(;;)
	{
	  printf("\n\t────────────────────────────\n\n");
	  printf("\t1、男女人数");
	  printf("\t\t2、各学院教师人数\n\n");
	  printf("\t3、分段年龄人数");
	  printf("\t\t4、结束");
	  printf("\n\n\t────────────────────────────\n"); 
	  printf("\t请选择：");

	  //判断输入值是否合法
	    scanf("%s",str);     
        n = Check(str,1,4);
	    if(n!=-1)break;
	}

	t = q; //使指针指向第一个有效结点
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
		printf("\n\n\t已成功退出查询！");
		break;
	}
  }
}

//统计性别人数并绘制条形图
void CountSex(PClerk t)
{
	char sex[3] = "男";
	int female = 0;
	int male = 0;
	int i = 0;
	int j;
	int total;

   while(t)   //统计人数
	{
	   if(strcmp(t->sex,sex)==0)male++;
       else female++;
       t = t->next;
	 }
   total = female + male;
    printf("\n\t\t  |\n");
   

	//绘制条形图
	for(i=1;i<=3;i++)
	{
		if(i==2)
		  printf("\t男教师人数|");
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
			   printf("\t女教师人数|");
		   else
			   printf("\t\t  |");
		   for(j=1;j<=female;j++)
			   printf("*");
		   if(i==2)
			   printf(" ( %d )\n",female);
		   else
			   printf("\n");
	   }
	   printf("\n\t总人数：\t%d\n",total);
}


//统计各年龄段人数并绘制条形图

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
			    printf("\t   20~30岁|");
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
			    printf("\t   30~40岁|");
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
			    printf("\t   40~50岁|");
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
			    printf("\t   50~60岁|");
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
			    printf("\t   60~70岁|");
		     else
			    printf("\t\t  |");
		     for(j=1;j<=e;j++)
			    printf("*");
		     if(i==2)
			    printf(" ( %d )\n",e);
		    else
			    printf("\n");
		 }
    printf("\n\t总人数：\t%d\n",total);
}


//统计各学院教师人数并绘制条形图

void CountDept(PClerk p)
{	  
    PClerk k; 
	PClerk t;
	PClerk tmp;  
	PClerk q;      //用于遍历
	PClerk r;      //用于释放要删除的结点
	PClerk ptmp;   //用于记录存放所有职工的学院名称链表的头结点
	int num[SIZE]; //用于存放各学院教师人数
    int i,j;
	int a;
	int total = 0;	
	int total2 = 0;
    t = p->next;

	k = Init();
	ptmp = k;

	while(t)        //把链表所有职工的学院名称输入到tmp链表中
	{
		k->next  = (PClerk)malloc(sizeof(Clerk));
		k = k->next;
		strcpy(k->dept,t->dept);
		t = t->next;	
		k->next = NULL;
	}


	tmp = ptmp->next;

	while(tmp)    //把存放所有职工所在学院名称的链表的重复学院名去掉
	{
		q = tmp;
		while(q->next)
		{
			if(strcmp(tmp->dept,q->next->dept)==0)  //一旦发现重复就删除
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
   for(r=r->next,i=0;r!=NULL;r=r->next,i++) //调用Countdept()函数统计各学院人数
	{
       num[i] = CountCdept(p,r->dept);
	   total2 = total2 + num[i];
	}

      ptmp = ptmp->next;

      for(a=0;ptmp!=NULL;a++,ptmp = ptmp->next)  //输出图像
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
	   printf("\n\t总人数：\t%d\n",total2);

}