#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <windows.h>
#include "header.h"

int end()
{
	int n;   //控制查询选项
	int flag;    //记录是否结束的标识符
	char str[SIZE];
    time_t timer = time(NULL); //获取系统时间，单位为秒;

	for(;;)
	{
	   printf("\n\t是否退出？(退出请按1，返回请按2)\t");
	   scanf("%s",str);
	   printf("\n\n");
	   n = Check(str,1,2);
	   if(n!=-1)break;
	}

	switch(n)
	{
	   case 1:
           system("cls");  //清屏屏幕显示的操作数据及输出内容，模拟完全退出的界面
		   printf("\n\n\n\n\n\n");
		   printf("\t\t\t\t正在退出职工信息管理系统");
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
		   Sleep(200);
		   printf(".");
		   system("cls");
           printf("\n\n\n");
           printf("\t\t┌───────────────────────────────────┐\n");
           printf("\t\t│ ┌┈┈┈┈┈┈┈┈┈┈┈┈┈┈┈┈┈┈┈┈┈┈┈┈┈┈┈┈┈┈┈┈┐ │\n");
           printf("\t\t│ ┊                                                                ┊ │\n");
           printf("\t\t│ ┊                                                                ┊ │\n");
           printf("\t\t│ ┊                   您已经退出职工信息管理系统                   ┊ │\n");
           printf("\t\t│ ┊                                                                ┊ │\n");
           printf("\t\t│ ┊                                                                ┊ │\n");
           printf("\t\t│ └┈┈┈┈┈┈┈┈┈┈┈┈┈┈┈┈┈┈┈┈┈┈┈┈┈┈┈┈┈┈┈┈┘ │\n");
           printf("\t\t└───────────────────────────────────┘\n");
           printf("\n");
           printf("\t\t\t\t\t%s\n\n",ctime(&timer));//日历时间
           printf("\n\n\n\n\n");
		   flag = 0;
           break;
	   case 2:
		   flag = 1;
		   break;
	}
	return flag;
}