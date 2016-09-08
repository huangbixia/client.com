#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "header.h"

void AvgDept(PClerk p)
{
	float sum = 0;
	float Avg;
	int i = 0;
	int k;
	int x=0;
	int y=0;
	PClerk q;
	char dept[SIZE];
	q = p->next;

    printf("\n");
	printf("\t请输入部门：");
	scanf("%s",dept);
    
	if(!q)
	{
		printf("\t系统暂没有数据！\n");
	}

	for(k=1;k<2;k++)
	{
		while(q)
		{
			if(strcmp(q->dept,dept)==0)
			{
				sum = sum+q->salary ;
			    i++;
			}
			else
				x++;
			y++;
		    q = q->next;
		}
	Avg = sum/i;
    
	if(x==y)
	{ 
		printf("\n\t所查找的部门信息不存在！\n");
		break;
	}

    printf("\n");
    printf("\t--------------------------------------------------------------------------------------------\n");
	printf("\t部门\t\t平均工资");
    printf("\n");
	printf("\t--------------------------------------------------------------------------------------------\n");
    printf("\t%s\t",dept );
    printf("\t%0.2f\n",Avg);
	}
}
