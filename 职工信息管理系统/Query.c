#include <stdio.h>
#include <stdlib.h>
#include "header.h"

void Query(PClerk p)
{
	int flag = 1;  //�����Ƿ��˳���ѯ
	char str[SIZE];
	int n = 0;  //���Ʋ�ѯѡ��

	for(;;)
	{
    for(;;)
    {
	  printf("\t��������������������������������������������������\n");
	  printf("\n");
	  printf("\t1����ְ���Ų�ѯ");
	  printf("\t\t2����������ѯ\n");
	  printf("\n");
	  printf("\t3�������Ų�ѯ");
	  printf("\t\t4�����绰�����ѯ\n");
	  printf("\n");
	  printf("\t5�����Ա��ѯ");
	  printf("\t\t6���˳���ѯ\n");
	  printf("\n");
	  printf("\t��������������������������������������������������\n");
	  printf("\n\n");
	  printf("\t������ѡ�");

	 //�ж�����ֵ�Ƿ�Ϸ�
	  scanf("%s",str);     
      n = Check(str,1,6);
	  if(n!=-1) break;
	}

	switch(n)
	{
	   case 1:
		   QueryNo(p);
		   break;
	   case 2:
		   QueryName(p);
		   break;
	   case 3:
		   QueryDept(p);
		   break;
	   case 4:
		   QueryNumb(p);
		   break;
	   case 5:
		   QuerySex(p);
		   break;
	   case 6:
		   flag = 0;
	}

	if(flag==0)
	{
		printf("\n\n\t�ѳɹ��˳���ѯ��");
		break;
	}

	}
}
