#include <stdio.h>
#include <time.h>
#include <windows.h>
#include <string.h>
#include <stdlib.h>
#include "header.h"


void FoutputData(Puser p);  //�Ѵ���û�����������ļ��浽������

int check_pwd(char user[20],char pwd[20])
{
	int flag = 0;
    Puser p = (Puser)malloc(sizeof(user));
	if(p==NULL)
	{
		printf("\t\t\t�����ڴ�ʧ�ܣ�\n");
		exit(-1);
	}
	p->next = NULL;

   FoutputData(p); //�Ѵ���û�����������ļ��浽������
   
   p = p->next;
   
	while(p)  //��������û���������Ϣ������
	{

        if((strcmp(p->pwd,pwd)==0)&&(strcmp(p->user,user)==0)) //һ���û�����������ͬ�������ѭ��
		{
		 break;
		}
		p = p->next;
	}
	if(p==NULL)return 0;
	else return 1;
}


int Welcom(void)
{
  char user[20];
  char pwd[20];
  time_t timer = time(NULL); //��ȡϵͳʱ�䣬��λΪ��;
  
  printf("\n\n\n");
  printf("\t\t��������������������������������������������������������������������������\n");
  printf("\t\t�� �������������������������������������������������������������������� ��\n");
  printf("\t\t�� ��                                                                �� ��\n");
  printf("\t\t�� ��                                                                �� ��\n");
  printf("\t\t�� ��                     ��ӭʹ��ְ����Ϣ����ϵͳ                   �� ��\n");
  printf("\t\t�� ��                                                                �� ��\n");
  printf("\t\t�� ��                                                                �� ��\n");
  printf("\t\t�� �������������������������������������������������������������������� ��\n");
  printf("\t\t��������������������������������������������������������������������������\n");
  printf("\n");
  printf("\t\t\t\t\t%s\n\n",ctime(&timer));//����ʱ��
  for(;;)
  {
    printf("\t\t\t\t\t�û���(������û�������123456)");
    scanf("%s",user);
    printf("\n\t\t\t\t\t���룺");
    scanf("%s",pwd);

    if(check_pwd(user,pwd))  //��֤����
	{
	  printf("\n\t\t\t\t\t����ɹ�����ӭ���룡\n");break;
	}
    else
	{
	  printf("\n\t\t\t\t\t�û���������������������룡\n\n");
	}
  }
  //ģ��ϵͳ��¼ʱ�Ľ���

  system("cls");             //�������ѵ�¼�������
  printf("\n\n\n\n\n\n\t\t\t���Եȣ�ϵͳ���ڵ�¼");
  Sleep(200);              //�ӳٴ���ִ��ʱ�䣬ģ���¼
  printf(".");
  Sleep(200); 
  printf(".");
  Sleep(200); 
  printf(".");
  Sleep(200); 
  printf(".");
  Sleep(200); 
  printf(".");
  Sleep(200); 
  printf(".");
  system("cls");            //�������ѵ�¼��ʾ��Ϣ���
  return 1;
}




void FoutputData(Puser p)
{
  FILE * fp;
  Puser q;
  Puser t = NULL; //���ڼ�¼�����ɵĽ���ǰ��
  
  if((fp=fopen("password.txt","rt"))==NULL)
  {
	  printf("The file can't open!\n");
	  getchar();
	  exit(-1);
  }

  q = (Puser)malloc(sizeof(user));
  if(!q)
  {
	  printf("�����ڴ�ʧ�ܣ�\n");
	  exit(-1);
  }

  p->next = q;   //���ļ��������ӵ�p������

  while(fread(q,sizeof(user),1,fp)!=0)
  {
    t = q;
	q->next = (Puser)malloc(sizeof(user));
	q = q->next;
  }

  t->next = NULL;   //�Ѷ����ɵ�һ�����ȥ��

  fclose(fp);
}


