#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "header.h"

void show(PClerk p);//用于显示修改后的信息

void Update_No(PClerk q);//选择职工号修改

void Update_Name(PClerk q);//选择姓名修改

void chose_update(PClerk q);//修改信息


void UpdateData(PClerk p)
{
	char str[SIZE];
	int n = 0;  //控制查询选项
	int flag;  //控制是否退出修改
    PClerk q = p->next;

for(;;)
{
	for(;;)
	{
     	printf("\t────────────────────────\n");
	    printf("\n");
	    printf("\t1、按职工号查询并修改\n\n");
    	printf("\t2、按姓名查询并修改\n\n");
		printf("\t3、退出修改\n\n");
		printf("\t────────────────────────\n");
		printf("\n\n");
		printf("\t请选择：");

       //判断输入值是否合法
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
		printf("\n\n\t已成功退出修改！");
	    break;}
}
}


void Update_No(PClerk q)
{
	PClerk t;
    char no[7];

	for(;;)
	{
	   printf("\n\t请输入职工号：");      
	   scanf("%s",no);
       t = q;
	        while(t)      //列出修改之前的信息
			{
		       if(strcmp(t->no,no)==0)
			   {
			      printf("\n");
                  printf("\t────────────────────────────────────────────\n");
	              printf("\t职工号\t姓名\t性别\t年龄\t部门\t职称\t专业\t\t  电话\t\t 工资");
        	      printf("\n");
	              printf("\t────────────────────────────────────────────\n");
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
		          printf("\t────────────────────────────────────────────\n");
			      break;
			   }
			   else
			   {
				   t = t->next;
			   }
			}
	   if(!t)
	   {
	       printf("\n\t所查找的职工信息不存在！\n");
	   }
	   else break;  //当职工信息存在时退出循环
	}
	  chose_update(t);   //调用函数，进行信息修改

	  printf("\n");	
}


void Update_Name(PClerk q)
{
	PClerk t;
	PClerk tmp;
	char name[SIZE];
	int i = 0;   //统计职工人数，判断职工是否存在
	int j = 0;   //控制表头只输出一次

	for(;;)
	{
	  printf("\n\t请输入姓名：");      
	  scanf("%s",name);
      t = q;

	//列出修改之前的信息
	  while(t)
	  {
		 if(strstr(t->name,name)!=NULL)   //查找姓名字符串中是否含有输入的字符串
		 {
			i = i + 1;
		    if(j==0)      //当存在查找的数据则输出表头
			{
				printf("\n");
                printf("\t────────────────────────────────────────────\n");
	            printf("\t职工号\t姓名\t性别\t年龄\t部门\t职称\t专业\t\t  电话\t\t 工资");
        	    printf("\n");
	            printf("\t────────────────────────────────────────────\n");
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
			j = 1;    //控制表头只输出一次
		 }
		  t = t->next;
	}

	   if(i==0)
	   {
	       printf("\n\t所查找的职工信息不存在！\n");
	   }
	   if(i!=0)break;  //当职工信息存在时，退出循环
	}

	   if(i==1)  //如果只有一条信息，就直接修改
	   {
		 printf("\n");
		 printf("\t────────────────────────────────────────────\n");
	     chose_update(tmp);   //调用函数，进行信息修改
	   }
	   if(i>1)  //如果存在同名信息
	   {
		 printf("\n");
		 printf("\t────────────────────────────────────────────\n");
	     //调用函数，进行信息修改
         Update_No(q);
	   }
	  printf("\n");	

}

void show(PClerk q)
{
	              printf("\n");
                  printf("\t────────────────────────────────────────────\n");
	              printf("\t职工号\t姓名\t性别\t年龄\t部门\t职称\t专业\t\t  电话\t\t 工资");
        	      printf("\n");
	              printf("\t────────────────────────────────────────────\n");
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
		          printf("\t────────────────────────────────────────────\n");
}

void chose_update(PClerk q)
{
	int n;   //控制查询选项
	int k = 1;  //控制结束修改
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
	     printf("\t1、姓名\t2、性别\n\n");      //选择要修改的信息
	     printf("\t3、年龄\t4、部门\n\n");
	     printf("\t5、职称\t6、专业\n\n");
	     printf("\t7、电话\t8、工资\n\n");
		 printf("\t9、结束修改\n\n");
		 printf("\t────────────────────────\n");
	     printf("\n\n");
	     printf("\t请选择修改项：");

	   //判断输入值是否合法
	     scanf("%s",str);     
         n = Check(str,1,9);
	     if(n!=-1)break;
	   }

	  switch(n)     
	  {
	    case 1:
			printf("\n\t请输入姓名：");
			scanf("%s",name);
			strcpy(q->name,name);
			show(q);
			break;
		case 2:
			printf("\n\t请输入性别：");
			scanf("%s",sex);
			strcpy(q->sex,sex);
			show(q);
			break;
		case 3:
			printf("\n\t请输入年龄：");
			scanf("%d",&age);
			q->age = age;
			show(q);
			break;
		case 4:
			printf("\n\t请输入部门：");
			scanf("%s",dept);
			strcpy(q->dept,dept);
			show(q);
			break;
		case 5:
			printf("\n\t请输入职称：");
			scanf("%s",job);
			strcpy(q->job,job);
			show(q);
			break;
		case 6:
			printf("\n\t请输入专业：");
			scanf("%s",profession);
			strcpy(q->profession,profession);
			show(q);
			break;
		case 7:
			printf("\n\t请输入电话：");
			scanf("%s",number);
			strcpy(q->number,number);
			show(q);
			break;
		case 8:
			printf("\n\t请输入工资：");
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
	} //结束修改

	}
}