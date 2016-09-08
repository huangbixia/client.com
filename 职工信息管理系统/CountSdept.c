#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "header.h"

void CountSdept(PClerk p)
{
	char dept[SIZE];
	float sum = 0;   //统计职工工资变量
	PClerk q;
	q = p->next ;
	
	printf("\n");
	printf("\t请输入部门:");
	scanf("%s",dept);

	while(q)
	{
		if(strcmp(q->dept,dept)!=0 && q->next == NULL)
		{
			printf("\n");
            printf("\n");
			printf("\t所查找的部门信息不存在!\n\n");
		}

		if(strcmp(q->dept,dept)==0)
		{
			sum = sum+q->salary  ;
		}
		q = q->next ;
	}


    if(sum!=0)
	{
	    printf("\t───────────────────\n");
	    printf("\t\t部门\t\t总工资\n");
        printf("\t───────────────────\n");
        printf("\n");
	    printf("\t\t%s\t\t%0.2f\n",dept,sum);
	    printf("\n");
        printf("\t───────────────────\n\n\n");
	}

}



