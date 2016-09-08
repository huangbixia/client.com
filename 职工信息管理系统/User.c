#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "header.h"


void FoutputData2(Puser t);//把密码和用户信息从文件导出
void QueryU();             //查看管理员信息
void UpdateU();            //修改管理员密码
void AddU();               //增加管理员
void DeleteU();            //删除管理员

void User(void)
{
	int n;  //控制查询选项
	int flag = 1;  //是否退回主菜单
	char str[SIZE];
	char superuser[SIZE];

    	printf("\t\t请输入6位超级管理用户密匙：（密码123456）");
    	scanf("%s",superuser);

	    if(strcmp("123456",superuser)!=0)
		{
			printf("\n");
		    printf("\t密匙错误！\n");
		}
	    else
		{
		  for(;;)
		  {
	        for(;;)
			{
             printf("\n\t─────────────────────────────────────────────\n");
	         printf("\n\t1、查看所用管理人员信息");
	         printf("\t\t2、修改管理人员密码\n\n");
	         printf("\t3、增加管理人员信息");
			 printf("\t\t4、删除管理员\n\n");
			 printf("\t5、退回主菜单\n");
             printf("\n\t─────────────────────────────────────────────\n");
			 printf("\t请选择：");
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
		printf("\n\n\t已成功退回主菜单！");
		break;
		  }

		} 
		 
		}
	
}

//查看管理员信息
void QueryU()
{
	Puser p;
	
	p = (Puser)malloc(sizeof(user));
    FoutputData2(p);                          //把存在文件的管理员信息导出到t链表中
    
	printf("\n\t───────────────────────\n");
	printf("\t      管理员          密码          \n ");
	printf("\t───────────────────────\n");
	p = p->next;
	while(p)
	{
		printf("\n\t%-10s\t    %s\n",p->user,p->pwd);
		p = p->next;
	}
  printf("\n\t───────────────────────\n");
}

void AddU()
{
	char name[SIZE];
	char pwd[SIZE];
	Puser tmp;
	FILE *fp;

	printf("\n\t请输入管理员姓名：");
	scanf("%s",name);
	printf("\n\t请输入密码：");
	scanf("%s",pwd);
    
	tmp = (Puser)malloc(sizeof(user));  //该结点用于辅助新增信息追加到文件中
	tmp->next = NULL;
	strcpy(tmp->user,name);
	strcpy(tmp->pwd,pwd);

	if((fp=fopen("password.txt","at"))==NULL)
	{
		printf("\n\tThe file can't open!\n");
		exit(-1);
	}

	fwrite(tmp,sizeof(user),1,fp);   //把信息追加到文件中
	
	fclose(fp);
}


//删除管理员信息
void DeleteU()
{
	FILE *fp;
	char name[SIZE];
	Puser p,q;
	Puser pre,r;
	int flag = 0;

	printf("\n\t请输入姓名：");
	scanf("%s",name);

	p = (Puser)malloc(sizeof(user));

    FoutputData2(p);    //把存在文件的管理员信息导出到p链表中

	pre = p;
	q = p->next;

	while(q)
	{
		if(strcmp(q->user,name)==0)    //发现要删除的管理员，执行删除并退出循环
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
		printf("\n\t删除的管理员不存在！\n\n");
	}
	else
	{
		/*
		*删除了管理员信息，
		把修改后的链表的信息覆盖原文件的信息
		*
		*/
		printf("\n\t删除成功！\n\n");

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


//修改管理员密码
void UpdateU()
{
	FILE *fp;
	char name[SIZE];
	char pwd1[SIZE],pwd2[SIZE];
	Puser p,q;
	int flag = 0;

	printf("\n\t请输入姓名：");
	scanf("%s",name);
	printf("\n");
	for(;;)
	{
      printf("\n\t请输入新密码：");
   	  scanf("%s",pwd1);
   	  printf("\n");
	  printf("\n\t请再次输入新密码：");
	  scanf("%s",pwd2);
	  if(strcmp(pwd1,pwd2)==0)
	  {
		  break;
	  }
	  else
	  {
		  printf("\n\t两次输入密码不一致，请重新输入！\n");
	  }
    }

	p = (Puser)malloc(sizeof(user));
    FoutputData2(p);    //把存在文件的管理员信息导出到p链表中
    
	q = p->next;
	while(q)             //寻找要修改的管理员
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
		printf("\n\t修改的管理员不存在！\n");
	}
	else
	{
		printf("\n\t修改成功！\n\n");
	}

	/*
	*把修改后的信息覆盖到原文件
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
		fwrite(p,sizeof(user),1,fp);    //覆盖原文件
		p = p->next;
	}

	fclose(fp);
}


//把文件中管理员的密码和信息导出到链表中
void FoutputData2(Puser t)
{
  FILE * fp;
  Puser q;
  Puser k = NULL; //用于记录新生成的结点的前驱
  
  if((fp=fopen("password.txt","rt"))==NULL)
  {
	  printf("The file can't open!\n");
	  getchar();
	  exit(-1);
  }

  q = (Puser)malloc(sizeof(user));
  if(!q)
  {
	  printf("分配内存失败！\n");
	  exit(-1);
  }

  t->next = q;   //把文件数据连接到p链表上

  while(fread(q,sizeof(user),1,fp)!=0)
  {
    k = q;
	q->next = (Puser)malloc(sizeof(user));
	q = q->next;
  }

  k->next = NULL;   //把多生成的一个结点去掉

  fclose(fp);
}


