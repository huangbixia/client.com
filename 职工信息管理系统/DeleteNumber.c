#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "header.h"


void DeleteNumber(PClerk p)
{
	PClerk q,t;
	char number[11];
	int i = 0;  //ͳ��ְ���������ж�ְ���Ƿ����
	int j = 0;  //���Ʊ�ͷֻ���һ��
    q = p->next;

	
	
	printf("\n");
	printf("\t������绰���룺");
	scanf("%s",number);
	while(q)
	{  
		if(strstr(q->number,number)!=NULL)
		{   i = i + 1;
		    t = q;
		    if(j==0)      //�����ڲ��ҵ������������ͷ
			{
				printf("\n");
                printf("\t����������������������������������������������������������������������������������������\n");
	            printf("\tְ����\t����\t�Ա�\t����\t����\tְ��\tרҵ\t\t  �绰\t\t ����");
        	    printf("\n");
	            printf("\t����������������������������������������������������������������������������������������\n");
			}
		    printf("\n");
		    printf("\t%s\t",t->no);
	     	printf("%s\t",t->name);
		    printf("%s\t",t->sex);
		    printf("%d\t",t->age);
	    	printf("%s\t",t->dept);
	    	printf("%s\t",t->job);
	    	printf("%-9s\t",t->profession);
	    	printf("%s\t",t->number);
	    	printf("%0.2f\n",t->salary);
		    printf("\n");
		    

			j = 1;				
		}
		q = q->next;
		
	}
	if (i>=1)
	{ 
		printf("\t����������������������������������������������������������������������������������������\n");
		DeleteNo(p);
	}

	if(i==0)
	{   
		printf("\n\n");
		printf("\tҪɾ����ְ����Ϣ�����ڣ�\n\n");
	   
	}

} 
	
