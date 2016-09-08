#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "header.h"

void CountAll(PClerk p)
{
    float sum = 0;
	PClerk q;
	q = p->next ;
	
	while(q!=NULL)
	{
		sum = sum+q->salary ;
		q = q->next ;
	}
    printf("\n\n");
	printf("\t全校职工总工资为：%0.2f\n",sum);
	
}


		

		