#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "header.h"

void CountSall(PClerk p)
{
    float sum = 0; //ͳ��ְ�����ʱ���
	PClerk q;
	q = p->next ;
	
	while(q)
	{
		sum = sum + q->salary ;
		q = q->next ;
	}
    printf("\n\n");
	printf("\tȫУְ���ܹ���Ϊ��%0.2f\n\n",sum);
	
}


		

		