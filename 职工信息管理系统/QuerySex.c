#include <stdio.h>
#include <string.h>
#include "header.h"

void QuerySex(PClerk p)//按职工号查询职工信息
{
	PClerk q;
	char sex[3]; 
    int i = 0;  //统计职工人数，判断职工是否存在
	int j = 0;  //控制表头只输出一次
    q = p->next;
  
    printf("\n");
    printf("\t请输入性别：");
	scanf("%s",sex);
    printf("\n");

    while(q)
	{
		if(strcmp(q->sex,sex)==0)   //查找性别字符串中是否含有输入的字符串
		{
			i = i + 1;
		    if(j==0)      //当存在查找的数据则输出表头
			{
				printf("\n");
                printf("\t─────────────────────────────────────────────────\n");
	            printf("\t职工号\t姓名\t性别\t年龄\t部门\t职称\t专业\t\t  电话\t\t 工资");
        	    printf("\n");
	            printf("\t─────────────────────────────────────────────────\n");
			}
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

			j = 1;    //控制表头只输出一次
		}
		  q = q->next;
	}

	    if(i==0)
		{
		printf("\n\t查找的职工不存在！\n\n\n");
		}
		else
		{
			printf("\n");
			printf("\t─────────────────────────────────────────────────\n\n\n");
		}

}
