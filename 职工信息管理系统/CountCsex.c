#include<stdio.h>
#include<stdlib.h>
#include"header.h"
#include<string.h>

void  CountCsex(PClerk p)
{
	int a = 0;
	int b = 0;//a����������bŮ������
	char male[3] = "��";
	char female[3] = "Ů";
    PClerk q;
	q = p->next;

	while(q)
	{
		if(strcmp(q->sex,male)==0)//strcmp()�������Ƚ����ߵ�ֵ����ֵͬ����0
		{
			a++;
		}
		else
		{
			b++;
		}

		q = q->next ;
		
	}

	printf("\t������������������������������\n\n");
	printf("\t��������\t%d\n",a);
	printf("\n");
	printf("\tŮ������\t%d\n",b);
	printf("\n");
	printf("\t������������������������������\n\n\n");
}

