#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "header.h"

void CountDept(PClerk p)
{
	char dept[SIZE];
	float sum = 0;
	PClerk q;
	q = p->next ;
	
	printf("\n");
	printf("\t�����벿������:");
	scanf("%s",dept);

	while(q)
	{
		if(strcmp(q->dept,dept)!=0 && q->next == NULL)
		{
			printf("\n");
            printf("\n");
			printf("\t�����ҵĲ��Ų�����!\n");
		}

		if(strcmp(q->dept,dept)==0)
		{
			sum = sum+q->salary  ;
		}
		q = q->next ;
	}


    if(sum!=0)
	{
	    printf("\t--------------------------------------------------------------------------------------------\n");
	    printf("\t\t����\t\t�ܹ���\n");
        printf("\t--------------------------------------------------------------------------------------------\n");
        printf("\n");
	    printf("\t\t%s\t\t%0.2f\n",dept,sum);
	    printf("\n");
        printf("\t--------------------------------------------------------------------------------------------\n");
	}

}



