#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "header.h"

int menu()
{
	char str[SIZE];
	int n;   //���Ʋ�ѯѡ��

    for(;;)
    {
		printf("\n");
		printf("\n\n");
		printf("\t\t                   ��������������������\n");
		printf("\t�������������������������� ��ְ����Ϣ����ϵͳ������������������������������\n");
        printf("\t\t                   ��������������������\n");
		printf("\n");
		printf("\t1����ʾְ����Ϣ");
		printf("\t\t2������ְ����Ϣ");
		printf("\t\t3��ɾ��ְ����Ϣ\n");
		printf("\n");
		printf("\t4��ͳ��ѧԺְ������");
		printf("\t5��ͳ��ѧԺְ������");
		printf("\t6��ͳ��ְ��ƽ������\n");
		printf("\n");
		printf("\t7����ѯְ����Ϣ");
		printf("\t\t8��ְ����Ϣ����");
		printf("\t\t9�������ݴ����ļ�\n");
		printf("\n");
		printf("\t10���޸�����");
		printf("\t\t11���鿴��������ͼ");
		printf("\t12�����ù�����Ա\n");
		printf("\n");
		printf("\t13����������\n");
	    printf("\t����������������������������������������������������������������������������\n");
		printf("\t���������(1-13):");	
		scanf("%s",str);  
		printf("\n");
	
		
	//�ж�����ֵ�Ƿ�Ϸ�
   
        n = Check(str,1,13);
		if(n!=-1)break;
	}
	printf("\n");
    return n;
	}
	
