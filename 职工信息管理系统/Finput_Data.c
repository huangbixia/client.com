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
	printf("\t1、覆盖原有数据\n");
	printf("\n");
	printf("\t2、追加到原数据\n");
	printf("\n");
    printf("\t请选择存储的方式：");
    scanf("%d",&n);
	switch(n)
	{
      case 1 :
	     if((fp=fopen("clerk.txt","wt"))==NULL)  //打开文件
		 {
		    printf("The file can't open!\n");
		    exit(-1);
		    getchar();
		 }break;
      case 2 :
          if((fp=fopen("clerk.txt","at"))==NULL)  //打开文件
		 {
		    printf("The file can't open!\n");
		    exit(-1);
		    getchar();
		 }break;
	}
       while(q)  //把数据存入文件
	   {
		fwrite(q,sizeof(Clerk),1,fp);
		q = q->next;
	   }
	
	fclose(fp);

}