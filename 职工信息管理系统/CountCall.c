#include<stdio.h>
#include<stdlib.h>
#include"header.h"

void CountCall(PClerk p)
{
	int n = 0; //ͳ��ְ����������
	PClerk q;
	q = p->next;

	while(q)
	{
		n++;
		q = q->next;
	}

	
    printf("\n\n");
	printf("\tְ��������Ϊ��%d\n\n",n);
	
}