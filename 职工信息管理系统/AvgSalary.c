#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "header.h"

void AvgSalary(PClerk p)
{
	char str[SIZE];
	int n = 0;      //����ѡ��ı���
	int flag = 1;   //�����Ƿ��˳���ѯ

	for(;;)
	{
	for(;;)
	{
	    printf("\t����������������������������������������������\n");
	    printf("\n");
	    printf("\t1����ѯְ����ƽ������");
        printf("\n\n");
	    printf("\t2�������Ų�ѯ");
	    printf("\n\n");
		printf("\t3���˳���ѯ\n\n");
	    printf("\t����������������������������������������������\n");
	    printf("\n\n");
	    printf("\t������ѡ�");


	 //�ж�����ֵ�Ƿ�Ϸ�
	  scanf("%s",str);     
      n = Check(str,1,3);
	  if(n!=-1) break;
	
	}
	
	   
	switch(n)
	{
	   case 1:
		   AvgSall(p);
		   break;
	   case 2:
		   AvgSdept(p);
		   break;
	   case 3:
		   flag = 0;
	}

	if(flag==0)
	{
		printf("\n\n\t�ѳɹ��˳���ѯ��");
		break;
	}

	}

			
}