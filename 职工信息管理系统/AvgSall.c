#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "header.h"

void AvgSall(PClerk p)
{
	float sum = 0;
	float Avg;
	int i = 0;  //ͳ��ְ������
	PClerk q;
	q = p->next;

    while(q)
	{
		sum = sum + q->salary ;
		q = q->next ;
        i++;
	}
	Avg = sum/i;
    
    printf("\n\n");
	printf("\t��ƽ������Ϊ��%0.2f\n\n",Avg);
}