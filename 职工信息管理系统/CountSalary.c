#include <stdio.h>
#include <stdlib.h>
#include "header.h"

void CountSalary(PClerk p)
{
	char str[SIZE];
	int n = 0;  //控制查询选项
	int flag = 1; //控制是否退出查询

	for(;;)
	{
	for(;;)
	{
		printf("\t─────────────────────────\n");
		printf("\n");
		printf("\t1.查询职工总工资\n");
		printf("\n");
		printf("\t2.按部门查询\n");
		printf("\n");
        printf("\t3.退出查询\n\n");
        printf("\t─────────────────────────\n");
		printf("\n");
        printf("\t请输入选项：");
		

		//判断输入值是否合法
	  scanf("%s",str);     
      n = Check(str,1,3);
	  if(n!=-1) break;
	}

	switch(n)
	{
	    case 1:
			CountSall(p);
			break;
			
		case 2:
			CountSdept(p);
			break;
		case 3:
			flag = 0;			
	}

	if(flag==0)
	{
		printf("\n\n\t已成功退出查询！");
		break;
	}

	}
}



	
