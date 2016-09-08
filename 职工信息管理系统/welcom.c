#include <stdio.h>
#include <time.h>
#include <windows.h>
#include <string.h>
#include <stdlib.h>
#include "header.h"


void FoutputData(Puser p);  //把存放用户名和密码的文件存到链表中

int check_pwd(char user[20],char pwd[20])
{
	int flag = 0;
    Puser p = (Puser)malloc(sizeof(user));
	if(p==NULL)
	{
		printf("\t\t\t分配内存失败！\n");
		exit(-1);
	}
	p->next = NULL;

   FoutputData(p); //把存放用户名和密码的文件存到链表中
   
   p = p->next;
   
	while(p)  //遍历存放用户和密码信息的链表
	{

        if((strcmp(p->pwd,pwd)==0)&&(strcmp(p->user,user)==0)) //一旦用户名和密码相同，则结束循环
		{
		 break;
		}
		p = p->next;
	}
	if(p==NULL)return 0;
	else return 1;
}


int Welcom(void)
{
  char user[20];
  char pwd[20];
  time_t timer = time(NULL); //获取系统时间，单位为秒;
  
  printf("\n\n\n");
  printf("\t\t┌───────────────────────────────────┐\n");
  printf("\t\t│ ┌┈┈┈┈┈┈┈┈┈┈┈┈┈┈┈┈┈┈┈┈┈┈┈┈┈┈┈┈┈┈┈┈┐ │\n");
  printf("\t\t│ ┊                                                                ┊ │\n");
  printf("\t\t│ ┊                                                                ┊ │\n");
  printf("\t\t│ ┊                     欢迎使用职工信息管理系统                   ┊ │\n");
  printf("\t\t│ ┊                                                                ┊ │\n");
  printf("\t\t│ ┊                                                                ┊ │\n");
  printf("\t\t│ └┈┈┈┈┈┈┈┈┈┈┈┈┈┈┈┈┈┈┈┈┈┈┈┈┈┈┈┈┈┈┈┈┘ │\n");
  printf("\t\t└───────────────────────────────────┘\n");
  printf("\n");
  printf("\t\t\t\t\t%s\n\n",ctime(&timer));//日历时间
  for(;;)
  {
    printf("\t\t\t\t\t用户：(密码和用户名都是123456)");
    scanf("%s",user);
    printf("\n\t\t\t\t\t密码：");
    scanf("%s",pwd);

    if(check_pwd(user,pwd))  //验证密码
	{
	  printf("\n\t\t\t\t\t输入成功，欢迎进入！\n");break;
	}
    else
	{
	  printf("\n\t\t\t\t\t用户名或密码错误，请重新输入！\n\n");
	}
  }
  //模拟系统登录时的界面

  system("cls");             //清屏，把登录界面清除
  printf("\n\n\n\n\n\n\t\t\t请稍等，系统正在登录");
  Sleep(200);              //延迟代码执行时间，模拟登录
  printf(".");
  Sleep(200); 
  printf(".");
  Sleep(200); 
  printf(".");
  Sleep(200); 
  printf(".");
  Sleep(200); 
  printf(".");
  Sleep(200); 
  printf(".");
  system("cls");            //清屏，把登录提示信息清除
  return 1;
}




void FoutputData(Puser p)
{
  FILE * fp;
  Puser q;
  Puser t = NULL; //用于记录新生成的结点的前驱
  
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

  p->next = q;   //把文件数据连接到p链表上

  while(fread(q,sizeof(user),1,fp)!=0)
  {
    t = q;
	q->next = (Puser)malloc(sizeof(user));
	q = q->next;
  }

  t->next = NULL;   //把多生成的一个结点去掉

  fclose(fp);
}


