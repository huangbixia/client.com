#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <windows.h>
#include "header.h"

int end()
{
	int n;   //���Ʋ�ѯѡ��
	int flag;    //��¼�Ƿ�����ı�ʶ��
	char str[SIZE];
    time_t timer = time(NULL); //��ȡϵͳʱ�䣬��λΪ��;

	for(;;)
	{
	   printf("\n\t�Ƿ��˳���(�˳��밴1�������밴2)\t");
	   scanf("%s",str);
	   printf("\n\n");
	   n = Check(str,1,2);
	   if(n!=-1)break;
	}

	switch(n)
	{
	   case 1:
           system("cls");  //������Ļ��ʾ�Ĳ������ݼ�������ݣ�ģ����ȫ�˳��Ľ���
		   printf("\n\n\n\n\n\n");
		   printf("\t\t\t\t�����˳�ְ����Ϣ����ϵͳ");
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
		   Sleep(200);
		   printf(".");
		   system("cls");
           printf("\n\n\n");
           printf("\t\t��������������������������������������������������������������������������\n");
           printf("\t\t�� �������������������������������������������������������������������� ��\n");
           printf("\t\t�� ��                                                                �� ��\n");
           printf("\t\t�� ��                                                                �� ��\n");
           printf("\t\t�� ��                   ���Ѿ��˳�ְ����Ϣ����ϵͳ                   �� ��\n");
           printf("\t\t�� ��                                                                �� ��\n");
           printf("\t\t�� ��                                                                �� ��\n");
           printf("\t\t�� �������������������������������������������������������������������� ��\n");
           printf("\t\t��������������������������������������������������������������������������\n");
           printf("\n");
           printf("\t\t\t\t\t%s\n\n",ctime(&timer));//����ʱ��
           printf("\n\n\n\n\n");
		   flag = 0;
           break;
	   case 2:
		   flag = 1;
		   break;
	}
	return flag;
}