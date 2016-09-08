#include<stdio.h>
#include<stdlib.h>
#include"header.h"
#include<string.h>

void  CountCsex(PClerk p)
{
	int a = 0;
	int b = 0;//a男生人数，b女生人数
	char male[3] = "男";
	char female[3] = "女";
    PClerk q;
	q = p->next;

	while(q)
	{
		if(strcmp(q->sex,male)==0)//strcmp()函数，比较两者的值，相同值返回0
		{
			a++;
		}
		else
		{
			b++;
		}

		q = q->next ;
		
	}

	printf("\t───────────────\n\n");
	printf("\t男生人数\t%d\n",a);
	printf("\n");
	printf("\t女生人数\t%d\n",b);
	printf("\n");
	printf("\t───────────────\n\n\n");
}

