#include <stdio.h>
#include <stdlib.h>
#include "header.h"

void CountSalary(PClerk p)
{
	char str[SIZE];
	int n = 0;  //���Ʋ�ѯѡ��
	int flag = 1; //�����Ƿ��˳���ѯ

	for(;;)
	{
	for(;;)
	{
		printf("\t��������������������������������������������������\n");
		printf("\n");
		printf("\t1.��ѯְ���ܹ���\n");
		printf("\n");
		printf("\t2.�����Ų�ѯ\n");
		printf("\n");
        printf("\t3.�˳���ѯ\n\n");
        printf("\t��������������������������������������������������\n");
		printf("\n");
        printf("\t������ѡ�");
		

		//�ж�����ֵ�Ƿ�Ϸ�
	  scanf("%s",str);     
      n = Check(str,1,3);
	  if(n!=-1) break;
	}

	switch(n)
	{
	    case 1:
			CountSall(p);
			break;
			
		case 2:
			CountSdept(p);
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



	
