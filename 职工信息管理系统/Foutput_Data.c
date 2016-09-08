#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "header.h"


void Foutput_Data(PClerk p)
{
  FILE * fp;
  PClerk q;
  PClerk t = NULL; //用于记录新生成的结点的前驱
  
  if((fp=fopen("clerk.txt","rt"))==NULL)
  {
	  printf("The file can't open!\n");
	  getchar();
	  exit(-1);
  }

  q = (PClerk)malloc(sizeof(Clerk));
  if(!q)
  {
	  printf("分配内存失败！\n");
	  exit(-1);
  }

  p->next = q;   //把文件数据连接到p链表上

  while(fread(q,sizeof(Clerk),1,fp)!=0)
  {
    t = q;
	q->next = (PClerk)malloc(sizeof(Clerk));
	q = q->next;
  }

  t->next = NULL;   //把多生成的一个结点去掉

  fclose(fp);
}