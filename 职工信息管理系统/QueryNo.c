#include <stdio.h>
#include <string.h>
#include "header.h"

void QueryNo(PClerk p)//��ְ���Ų�ѯְ����Ϣ
{
	PClerk q;
	char no[7];
	q = p->next;

	printf("\n");
	printf("\t������ְ���ţ�");
	scanf("%s",no);
	while(q)
	{
		if(strcmp(q->no,no)==0)
		{
			printf("\n");
            printf("\t��������������������������������������������������������������������������������������������������\n");
	        printf("\tְ����\t����\t�Ա�\t����\t����\tְ��\tרҵ\t\t  �绰\t\t ����");
        	printf("\n");
	        printf("\t��������������������������������������������������������������������������������������������������\n");
	        printf("\n");
		    printf("\t%s\t",q->no);
	     	printf("%s\t",q->name);
		    printf("%s\t",q->sex);
		    printf("%d\t",q->age);
	    	printf("%s\t",q->dept);
	    	printf("%s\t",q->job);
	    	printf("%-9s\t",q->profession);
	    	printf("%s\t",q->number);
	    	printf("%0.2f\n",q->salary);
		    printf("\n");
		    printf("\t��������������������������������������������������������������������������������������������������\n\n\n");
			break;
		}
		q = q->next;
	}
	if(!q)
	{
		printf("\n\n\t�����ҵ�ְ����Ϣ�����ڣ�\n\n\n");
	}
}