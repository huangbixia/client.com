#include <stdio.h>
#include "header.h"

void Show_Data(PClerk p)
{
	PClerk q;
	q = p->next;
    
	printf("\n");
	printf("\t��������������������������������������������������������������������������������������������\n");
	printf("\tְ����\t����\t�Ա�\t����\t����\tְ��\tרҵ\t\t  �绰\t\t ����");
	printf("\n");
	printf("\t��������������������������������������������������������������������������������������������\n");
	printf("\n");
	while(q)
	{
        printf("\t%s\t",q->no);
		printf("%s\t",q->name);
		printf("%s\t",q->sex);
		printf("%d\t",q->age);
		printf("%s\t",q->dept);
		printf("%s\t",q->job);
		printf("%-9s\t",q->profession);
		printf("%s\t",q->number);
		printf("%0.2f\n",q->salary);
		q = q->next;
		printf("\n");
	}
	printf("\t��������������������������������������������������������������������������������������������\n\n\n");

}