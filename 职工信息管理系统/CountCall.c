#include<stdio.h>
#include<stdlib.h>
#include"header.h"

void CountCall(PClerk p)
{
	int n = 0; //统计职工人数变量
	PClerk q;
	q = p->next;

	while(q)
	{
		n++;
		q = q->next;
	}

	
    printf("\n\n");
	printf("\t职工总人数为：%d\n\n",n);
	
}