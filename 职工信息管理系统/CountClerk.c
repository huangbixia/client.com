#include<stdio.h>
#include<stdlib.h>
#include"header.h"

void CountClerk(PClerk p)
{
	char str[SIZE];
	char dept[SIZE];
	int n = 0;  //���Ʋ�ѯѡ��
	int num;
	int flag = 1; //�����Ƿ��˳���ѯ

    for(;;)
	{

    for(;;)
    {
	  printf("\t����������������������������������������������������\n");
	  printf("\n");
	  printf("\t1����ѯְ��������");
	  printf("\t\t2����ѯ����������");
	  printf("\n\n");
	  printf("\t3����ѯ��Ůְ������");
	  printf("\t\t4���˳���ѯ\n\n");
	  printf("\t����������������������������������������������������\n");
	  printf("\n\n");
	  printf("\t������ѡ�");

	 //�ж�����ֵ�Ƿ�Ϸ�
	  scanf("%s",str);     
      n = Check(str,1,4);
	  if(n!=-1) break;
	}

	switch(n)
	{
	case 1:
		CountCall(p);
		break;
    case 2:
		printf("\t�����벿�ţ�");
		scanf("%s",dept);
		num = CountCdept(p,dept);
		if(num!=0)
		{
	    printf("\t��������������������������������������\n");
	    printf("\t\t����\t\t����\n");
        printf("\t��������������������������������������\n");
        printf("\n");
	    printf("\t\t%s\t\t%d\n",dept,num);
	    printf("\n");
        printf("\t��������������������������������������\n\n\n");
		}
		else
		{
			printf("\n\n\t�����ҵĲ�����Ϣ�����ڣ�\n\n");
		}
		break;
	case 3:
		CountCsex(p);
		break;
	case 4:
		flag = 0;
	}

	if(flag==0)
	{
		printf("\n\n\t�ѳɹ��˳���ѯ��");
		break;
	}

	}

	
}