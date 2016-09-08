#include<stdio.h>
#include<stdlib.h>
#include"header.h"

void CountClerk(PClerk p)
{
	char str[SIZE];
	char dept[SIZE];
	int n = 0;  //控制查询选项
	int num;
	int flag = 1; //控制是否退出查询

    for(;;)
	{

    for(;;)
    {
	  printf("\t──────────────────────────\n");
	  printf("\n");
	  printf("\t1、查询职工总人数");
	  printf("\t\t2、查询各部门人数");
	  printf("\n\n");
	  printf("\t3、查询男女职工人数");
	  printf("\t\t4、退出查询\n\n");
	  printf("\t──────────────────────────\n");
	  printf("\n\n");
	  printf("\t请输入选项：");

	 //判断输入值是否合法
	  scanf("%s",str);     
      n = Check(str,1,4);
	  if(n!=-1) break;
	}

	switch(n)
	{
	case 1:
		CountCall(p);
		break;
    case 2:
		printf("\t请输入部门：");
		scanf("%s",dept);
		num = CountCdept(p,dept);
		if(num!=0)
		{
	    printf("\t───────────────────\n");
	    printf("\t\t部门\t\t人数\n");
        printf("\t───────────────────\n");
        printf("\n");
	    printf("\t\t%s\t\t%d\n",dept,num);
	    printf("\n");
        printf("\t───────────────────\n\n\n");
		}
		else
		{
			printf("\n\n\t所查找的部门信息不存在！\n\n");
		}
		break;
	case 3:
		CountCsex(p);
		break;
	case 4:
		flag = 0;
	}

	if(flag==0)
	{
		printf("\n\n\t已成功退出查询！");
		break;
	}

	}

	
}