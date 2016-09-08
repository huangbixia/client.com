#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "header.h"

void CountSall(PClerk p)
{
    float sum = 0; //统计职工工资变量
	PClerk q;
	q = p->next ;
	
	while(q)
	{
		sum = sum + q->salary ;
		q = q->next ;
	}
    printf("\n\n");
	printf("\t全校职工总工资为：%0.2f\n\n",sum);
	
}


		

		