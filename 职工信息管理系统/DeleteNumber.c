#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "header.h"


void DeleteNumber(PClerk p)
{
	PClerk q,t;
	char number[11];
	int i = 0;  //统计职工人数，判断职工是否存在
	int j = 0;  //控制表头只输出一次
    q = p->next;

	
	
	printf("\n");
	printf("\t请输入电话号码：");
	scanf("%s",number);
	while(q)
	{  
		if(strstr(q->number,number)!=NULL)
		{   i = i + 1;
		    t = q;
		    if(j==0)      //当存在查找的数据则输出表头
			{
				printf("\n");
                printf("\t────────────────────────────────────────────\n");
	            printf("\t职工号\t姓名\t性别\t年龄\t部门\t职称\t专业\t\t  电话\t\t 工资");
        	    printf("\n");
	            printf("\t────────────────────────────────────────────\n");
			}
		    printf("\n");
		    printf("\t%s\t",t->no);
	     	printf("%s\t",t->name);
		    printf("%s\t",t->sex);
		    printf("%d\t",t->age);
	    	printf("%s\t",t->dept);
	    	printf("%s\t",t->job);
	    	printf("%-9s\t",t->profession);
	    	printf("%s\t",t->number);
	    	printf("%0.2f\n",t->salary);
		    printf("\n");
		    

			j = 1;				
		}
		q = q->next;
		
	}
	if (i>=1)
	{ 
		printf("\t────────────────────────────────────────────\n");
		DeleteNo(p);
	}

	if(i==0)
	{   
		printf("\n\n");
		printf("\t要删除的职工信息不存在！\n\n");
	   
	}

} 
	
