#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "header.h"

void Delete_Data(PClerk p)
{ 
	int n = 0;   //控制查询选项
	int flag = 1;  //控制是否退出删除
	char str[SIZE];

    for(;;)
	{
	for(;;)
	{

       printf("\t─────────────────────────\n");
	   printf("\n");
       printf("\t1.按职工号删除");
       printf("\t\t2.按职工姓名删除\n\n");
	   printf("\t3.按电话号码删除");
       printf("\t4.退出删除\n\n");
	   printf("\t─────────────────────────\n");
	   printf("\n\n");
	   printf("\t请输入选项：");
	

    scanf("%s",str);     
    n = Check(str,1,4);
	if(n!=-1) break;

	}

	switch(n)
	{
        case 1:
	       DeleteNo(p);
	       break;
	    case 2:
		   DeleteName(p);
		   break;
    	case 3:
		   DeleteNumber(p);
		   break;
		case 4:
		   flag = 0;
	}

	if(flag==0)
	{
		printf("\n\n\t已成功退出删除！");
		break;
	}

	}
}


