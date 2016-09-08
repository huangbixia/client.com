#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "header.h"

void AvgSdept(PClerk p)
{
	float sum = 0;
	float Avg;
	int i = 0;  //统计职工人数变量
	PClerk q;
	char dept[SIZE];
	q = p->next;

    printf("\n");
	printf("\t请输入部门：");
	scanf("%s",dept);
    

	while(q)
	{
		if(strcmp(q->dept,dept)==0)
		{
			sum = sum+q->salary ;
			i++;
		}

	    if(strcmp(q->dept,dept)!=0 && q->next == NULL)
		{
			printf("\n");
            printf("\n");
			printf("\t所查找的部门信息不存在!\n\n");
		}
		    q = q->next;
	}

	Avg = sum/i;
 	
    if(sum!=0)
	{
    printf("\n");
    printf("\t────────────────────\n");
	printf("\t\t部门\t\t平均工资");
    printf("\n");
	printf("\t────────────────────\n\n");
    printf("\t\t%s\t",dept );
    printf("\t%0.2f\n\n",Avg);
    printf("\t────────────────────\n\n\n");
	}

}
