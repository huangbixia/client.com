#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "header.h"

void Delete_Data(PClerk p)
{ 
	int n = 0;   //���Ʋ�ѯѡ��
	int flag = 1;  //�����Ƿ��˳�ɾ��
	char str[SIZE];

    for(;;)
	{
	for(;;)
	{

       printf("\t��������������������������������������������������\n");
	   printf("\n");
       printf("\t1.��ְ����ɾ��");
       printf("\t\t2.��ְ������ɾ��\n\n");
	   printf("\t3.���绰����ɾ��");
       printf("\t4.�˳�ɾ��\n\n");
	   printf("\t��������������������������������������������������\n");
	   printf("\n\n");
	   printf("\t������ѡ�");
	

    scanf("%s",str);     
    n = Check(str,1,4);
	if(n!=-1) break;

	}

	switch(n)
	{
        case 1:
	       DeleteNo(p);
	       break;
	    case 2:
		   DeleteName(p);
		   break;
    	case 3:
		   DeleteNumber(p);
		   break;
		case 4:
		   flag = 0;
	}

	if(flag==0)
	{
		printf("\n\n\t�ѳɹ��˳�ɾ����");
		break;
	}

	}
}


