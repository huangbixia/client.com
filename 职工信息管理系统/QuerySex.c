#include <stdio.h>
#include <string.h>
#include "header.h"

void QuerySex(PClerk p)//��ְ���Ų�ѯְ����Ϣ
{
	PClerk q;
	char sex[3]; 
    int i = 0;  //ͳ��ְ���������ж�ְ���Ƿ����
	int j = 0;  //���Ʊ�ͷֻ���һ��
    q = p->next;
  
    printf("\n");
    printf("\t�������Ա�");
	scanf("%s",sex);
    printf("\n");

    while(q)
	{
		if(strcmp(q->sex,sex)==0)   //�����Ա��ַ������Ƿ���������ַ���
		{
			i = i + 1;
		    if(j==0)      //�����ڲ��ҵ������������ͷ
			{
				printf("\n");
                printf("\t��������������������������������������������������������������������������������������������������\n");
	            printf("\tְ����\t����\t�Ա�\t����\t����\tְ��\tרҵ\t\t  �绰\t\t ����");
        	    printf("\n");
	            printf("\t��������������������������������������������������������������������������������������������������\n");
			}
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

			j = 1;    //���Ʊ�ͷֻ���һ��
		}
		  q = q->next;
	}

	    if(i==0)
		{
		printf("\n\t���ҵ�ְ�������ڣ�\n\n\n");
		}
		else
		{
			printf("\n");
			printf("\t��������������������������������������������������������������������������������������������������\n\n\n");
		}

}
