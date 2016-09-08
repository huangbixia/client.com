#include<stdio.h>
#include<string.h>
#include"header.h"

int CountCdept(PClerk p,char dept[SIZE])
{

	int i = 0; //统计职工人数变量
	PClerk q;
	q = p->next;

    while(q)
	{
		if(strcmp(dept,q->dept)==0 )
		{
			i++;
		}

		q = q->next ;
	}

    return i;
}



