#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "header.h"
 
void DeleteNo(PClerk p)
{
	PClerk q,t,k;
	char str[SIZE];
	char no[7];
	int n = 0;   //���Ʋ�ѯѡ��
	int flag = 0;  //�ж�ְ����Ϣ�Ƿ����
    q = p->next;
	k = p;
	
	
	printf("\n");
	printf("\t������ְ���ţ�");
	scanf("%s",no);

	while(q)
	{   
		if(strcmp(q->no,no)==0)
		{   
            t = q;    //��¼���ҵ��Ľ��
			printf("\n");
            printf("\t��������������������������������������������������������������������������������������������������\n");
	        printf("\tְ����\t����\t�Ա�\t����\t����\tְ��\tרҵ\t\t  �绰\t\t ����");
        	printf("\n");
	        printf("\t��������������������������������������������������������������������������������������������������\n");
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
		    printf("\t��������������������������������������������������������������������������������������������������\n\n");

            flag = 1;

			for(;;)
			{
			printf("\t�Ƿ�ȷ��ɾ����ְ����Ϣ��\n\n");
			printf("\t1.ȷ��");
            printf("\t2.ȡ��\n\n");
			printf("\t��������������������������������������������������������������������������������������������������\n\n");
			printf("\t������ѡ�");

			scanf("%s",str);     
            n = Check(str,1,2);
	        if(n!=-1) break;
			}

            switch(n)
			{
                 case 1:
				 q = q->next;
		    	 k->next = q;
	             free(t);
			     printf("\n\n");
			     printf("\t�ѳɹ�ɾ����ְ����Ϣ��\n\n");
		         break;
	          
	             case 2:
				 printf("\n\n");
                 printf("\tȡ��ɾ����ְ����Ϣ��\n\n");
		         break;
			}

			break;
		}
		q=q->next;
		k=k->next;
		
	}

	if(flag==0)
	{
		printf("\n\n");
		printf("\tҪɾ����ְ����Ϣ�����ڣ�\n");
	   
	}
}