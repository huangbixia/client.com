#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "header.h"

int menu()
{
	char str[SIZE];
	int n;   //控制查询选项

    for(;;)
    {
		printf("\n");
		printf("\n\n");
		printf("\t\t                   ┌────────┐\n");
		printf("\t───────────── │职工信息管理系统│──────────────\n");
        printf("\t\t                   └────────┘\n");
		printf("\n");
		printf("\t1、显示职工信息");
		printf("\t\t2、增加职工信息");
		printf("\t\t3、删除职工信息\n");
		printf("\n");
		printf("\t4、统计学院职工人数");
		printf("\t5、统计学院职工工资");
		printf("\t6、统计职工平均工资\n");
		printf("\n");
		printf("\t7、查询职工信息");
		printf("\t\t8、职工信息排序");
		printf("\t\t9、把数据存入文件\n");
		printf("\n");
		printf("\t10、修改数据");
		printf("\t\t11、查看数据条形图");
		printf("\t12、设置管理人员\n");
		printf("\n");
		printf("\t13、结束程序\n");
	    printf("\t──────────────────────────────────────\n");
		printf("\t请输入序号(1-13):");	
		scanf("%s",str);  
		printf("\n");
	
		
	//判断输入值是否合法
   
        n = Check(str,1,13);
		if(n!=-1)break;
	}
	printf("\n");
    return n;
	}
	
