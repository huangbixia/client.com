#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "header.h"

void SortSalary(PClerk p)  
{  
    PClerk old;  
    PClerk now;  
    PClerk Pnext;  
	char str[SIZE];
	int n;  //���Ʋ�ѯѡ��
    int i, j;  //��ȡ����ĳ����Լ��ȽϵĴ���
	int flag = 1;  //�����Ƿ��˳�ѡ��

	for(;;)
	{

	for(;;)
	{
	  printf("\n\t1������\n\n");
	  printf("\t2������\n\n");
	  printf("\t3���˳�ѡ��\n\n");
	  printf("\t������ѡ��:");
	  scanf("%s",str);
	  n = Check(str,1,3);
	  if(n!=-1)break;
	}

	switch(n)
	{
      case 1:
	    i = get_length(p);     //��ȡ��������ĳ���
      
        while(i!=1)          //һ��ѭ����ʹÿ��Ԫ�ؽ�㶼���бȽϣ���iΪ0ʱ���ȽϽ���
		{  
            old = p;  
            now = p->next;  
            Pnext = now->next;  
            j = i;  
         
       while(j!=1)          //����ѭ��������ÿ��Ԫ�ؽ��ȽϵĴ���
       {   
            if(now->salary > Pnext->salary)  
            {  
                now->next = Pnext->next;  
                old->next = Pnext;  
                Pnext->next = now;  
                  
                old = Pnext;  
                Pnext = now->next;  
            }  
            else                 //�����ϱȽ��������ƶ�ָ��
            {  
                old = now;  
                now = Pnext;  
                Pnext = Pnext->next;  
            }  
			j--; 
        }  
	   i--;
    }     
	Show_Data(p);
	break;

	  case 2:
		  i = get_length(p);   
      
        while(i!=1)  
		{  
            old = p;  
            now = p->next;  
            Pnext = now->next;  
            j = i;  
        
       while(j!=1)  
       {  
            if(now->salary < Pnext->salary)  
            {  
                now->next = Pnext->next;  
                old->next = Pnext;  
                Pnext->next = now;  
                  
                old = Pnext;  
                Pnext = now->next;  
            }  
            else  
            {  
                old = now;  
                now = Pnext;  
                Pnext = Pnext->next;  
            }  
			j--;  
        }  
	   i--; 
    }     
	Show_Data(p);
	break;

	  case 3:
		  flag = 0;

	}

	if(flag==0)
	{
		break;
	}

	}

}  
  