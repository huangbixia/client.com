#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "header.h"

void AvgDept(PClerk p)
{
	float sum = 0;
	float Avg;
	int i = 0;
	int k;
	int x=0;
	int y=0;
	PClerk q;
	char dept[SIZE];
	q = p->next;

    printf("\n");
	printf("\t�����벿�ţ�");
	scanf("%s",dept);
    
	if(!q)
	{
		printf("\tϵͳ��û�����ݣ�\n");
	}

	for(k=1;k<2;k++)
	{
		while(q)
		{
			if(strcmp(q->dept,dept)==0)
			{
				sum = sum+q->salary ;
			    i++;
			}
			else
				x++;
			y++;
		    q = q->next;
		}
	Avg = sum/i;
    
	if(x==y)
	{ 
		printf("\n\t�����ҵĲ�����Ϣ�����ڣ�\n");
		break;
	}

    printf("\n");
    printf("\t--------------------------------------------------------------------------------------------\n");
	printf("\t����\t\tƽ������");
    printf("\n");
	printf("\t--------------------------------------------------------------------------------------------\n");
    printf("\t%s\t",dept );
    printf("\t%0.2f\n",Avg);
	}
}
