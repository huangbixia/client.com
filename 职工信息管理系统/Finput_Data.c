#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "header.h"


void Finput_Data(PClerk p)
{
	PClerk q = p->next;
	FILE *fp;
	int n;
    
	printf("\n");
	printf("\t1������ԭ������\n");
	printf("\n");
	printf("\t2��׷�ӵ�ԭ����\n");
	printf("\n");
    printf("\t��ѡ��洢�ķ�ʽ��");
    scanf("%d",&n);
	switch(n)
	{
      case 1 :
	     if((fp=fopen("clerk.txt","wt"))==NULL)  //���ļ�
		 {
		    printf("The file can't open!\n");
		    exit(-1);
		    getchar();
		 }break;
      case 2 :
          if((fp=fopen("clerk.txt","at"))==NULL)  //���ļ�
		 {
		    printf("The file can't open!\n");
		    exit(-1);
		    getchar();
		 }break;
	}
       while(q)  //�����ݴ����ļ�
	   {
		fwrite(q,sizeof(Clerk),1,fp);
		q = q->next;
	   }
	
	fclose(fp);

}