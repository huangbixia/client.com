#include <stdio.h>
#include <stdlib.h>
#include "header.h"

void Sort(PClerk p)
{
	char str[SIZE];
	int n = 0;  //���Ʋ�ѯѡ��
	int flag = 1;  //�����Ƿ��˳�����

	for(;;)
	{
    for(;;)
    {
	  printf("\t������������������������������������������������\n");
	  printf("\n");
	  printf("\t1������������\n\n");
	  printf("\t2������������\n\n");
	  printf("\t3���˳�����\n\n");
	  printf("\t������������������������������������������������\n");
	  printf("\n\n");
	  printf("\t������ѡ�");

	 //�ж�����ֵ�Ƿ�Ϸ�
	  scanf("%s",str);     
      n = Check(str,1,3);
	  if(n!=-1)break;
	}

	switch(n)
	{
	   case 1:
		   SortSalary(p);
		   break;
	   case 2:
		   SortAge(p);
		   break;
	   case 3:
		   flag = 0;
	}

	if(flag==0)
	{
		printf("\n\n\t�ѳɹ��˳�����");
		break;
	}

	}
}

