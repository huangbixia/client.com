#include <stdio.h>
#include <stdlib.h>
#include "header.h"

void Query(PClerk p)
{
	int flag = 1;  //控制是否退出查询
	char str[SIZE];
	int n = 0;  //控制查询选项

	for(;;)
	{
    for(;;)
    {
	  printf("\t─────────────────────────\n");
	  printf("\n");
	  printf("\t1、按职工号查询");
	  printf("\t\t2、按姓名查询\n");
	  printf("\n");
	  printf("\t3、按部门查询");
	  printf("\t\t4、按电话号码查询\n");
	  printf("\n");
	  printf("\t5、按性别查询");
	  printf("\t\t6、退出查询\n");
	  printf("\n");
	  printf("\t─────────────────────────\n");
	  printf("\n\n");
	  printf("\t请输入选项：");

	 //判断输入值是否合法
	  scanf("%s",str);     
      n = Check(str,1,6);
	  if(n!=-1) break;
	}

	switch(n)
	{
	   case 1:
		   QueryNo(p);
		   break;
	   case 2:
		   QueryName(p);
		   break;
	   case 3:
		   QueryDept(p);
		   break;
	   case 4:
		   QueryNumb(p);
		   break;
	   case 5:
		   QuerySex(p);
		   break;
	   case 6:
		   flag = 0;
	}

	if(flag==0)
	{
		printf("\n\n\t已成功退出查询！");
		break;
	}

	}
}
