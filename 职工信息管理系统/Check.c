#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "header.h"


/*�ж�����ֵ�Ƿ�Ϸ� */  

int Check(char str[SIZE],int min,int max)
{
   
  int k = 0;      //�ж�����ֵ�ǲ����Ϲ淶���ǳ�����Χ
  int num =-1;    
  int i;          //�����¼�����ַ�����
  
  for(i=0;(size_t)i<strlen(str);i++)
  {
	  if((str[i]>='0')&&(str[i]<='9'))continue;  //���ַ�������ʱ������ѭ�����
	  else
	  {
		 k=-1;
		 break;    //һ����һ���ַ��������֣��ͽ���ѭ��
	  }
  }
  if(k==-1)
  {
	  printf("\n");
	  printf("\n\t���벻���Ϲ淶�����������룡\n");
	  printf("\n");
  }
  else
  {
	  num = atoi(str);   //���ַ���ת��Ϊ����

	  if((num<min)||(num>max))      //��������Χ�����������Ϣ
	  {
		num = -1;
		printf("\n");
        printf("\n\t���볬����Χ�����������룡\n");
		printf("\n");
		
	  }		 
  }
  return num;
}
