#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "header.h"


void Foutput_Data(PClerk p)
{
  FILE * fp;
  PClerk q;
  PClerk t = NULL; //���ڼ�¼�����ɵĽ���ǰ��
  
  if((fp=fopen("clerk.txt","rt"))==NULL)
  {
	  printf("The file can't open!\n");
	  getchar();
	  exit(-1);
  }

  q = (PClerk)malloc(sizeof(Clerk));
  if(!q)
  {
	  printf("�����ڴ�ʧ�ܣ�\n");
	  exit(-1);
  }

  p->next = q;   //���ļ��������ӵ�p������

  while(fread(q,sizeof(Clerk),1,fp)!=0)
  {
    t = q;
	q->next = (PClerk)malloc(sizeof(Clerk));
	q = q->next;
  }

  t->next = NULL;   //�Ѷ����ɵ�һ�����ȥ��

  fclose(fp);
}