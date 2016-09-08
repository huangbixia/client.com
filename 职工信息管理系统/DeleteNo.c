#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "header.h"
 
void DeleteNo(PClerk p)
{
	PClerk q,t,k;
	char str[SIZE];
	char no[7];
	int n = 0;   //控制查询选项
	int flag = 0;  //判断职工信息是否存在
    q = p->next;
	k = p;
	
	
	printf("\n");
	printf("\t请输入职工号：");
	scanf("%s",no);

	while(q)
	{   
		if(strcmp(q->no,no)==0)
		{   
            t = q;    //记录所找到的结点
			printf("\n");
            printf("\t─────────────────────────────────────────────────\n");
	        printf("\t职工号\t姓名\t性别\t年龄\t部门\t职称\t专业\t\t  电话\t\t 工资");
        	printf("\n");
	        printf("\t─────────────────────────────────────────────────\n");
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
		    printf("\t─────────────────────────────────────────────────\n\n");

            flag = 1;

			for(;;)
			{
			printf("\t是否确定删除该职工信息？\n\n");
			printf("\t1.确定");
            printf("\t2.取消\n\n");
			printf("\t─────────────────────────────────────────────────\n\n");
			printf("\t请输入选项：");

			scanf("%s",str);     
            n = Check(str,1,2);
	        if(n!=-1) break;
			}

            switch(n)
			{
                 case 1:
				 q = q->next;
		    	 k->next = q;
	             free(t);
			     printf("\n\n");
			     printf("\t已成功删除该职工信息！\n\n");
		         break;
	          
	             case 2:
				 printf("\n\n");
                 printf("\t取消删除该职工信息！\n\n");
		         break;
			}

			break;
		}
		q=q->next;
		k=k->next;
		
	}

	if(flag==0)
	{
		printf("\n\n");
		printf("\t要删除的职工信息不存在！\n");
	   
	}
}