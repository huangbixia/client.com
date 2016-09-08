#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "header.h"

void AvgAll(PClerk p)
{
	float sum = 0;
	float Avg;
	int i = 0;
	PClerk q;
	q = p->next;

    while(q)
	{
		sum=sum+q->salary ;
		q=q->next ;
        i++;
	}
	Avg=sum/i;

	printf("\n\t总平均工资为：%0.2f",Avg);
}