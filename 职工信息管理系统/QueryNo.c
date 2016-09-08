#include <stdio.h>
#include <string.h>
#include "header.h"

void QueryNo(PClerk p)//按职工号查询职工信息
{
	PClerk q;
	char no[7];
	q = p->next;

	printf("\n");
	printf("\t请输入职工号：");
	scanf("%s",no);
	while(q)
	{
		if(strcmp(q->no,no)==0)
		{
			printf("\n");
            printf("\t─────────────────────────────────────────────────\n");
	        printf("\t职工号\t姓名\t性别\t年龄\t部门\t职称\t专业\t\t  电话\t\t 工资");
        	printf("\n");
	        printf("\t─────────────────────────────────────────────────\n");
	        printf("\n");
		    printf("\t%s\t",q->no);
	     	printf("%s\t",q->name);
		    printf("%s\t",q->sex);
		    printf("%d\t",q->age);
	    	printf("%s\t",q->dept);
	    	printf("%s\t",q->job);
	    	printf("%-9s\t",q->profession);
	    	printf("%s\t",q->number);
	    	printf("%0.2f\n",q->salary);
		    printf("\n");
		    printf("\t─────────────────────────────────────────────────\n\n\n");
			break;
		}
		q = q->next;
	}
	if(!q)
	{
		printf("\n\n\t所查找的职工信息不存在！\n\n\n");
	}
}