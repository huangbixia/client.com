#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "header.h"

void SortAge(PClerk p)  
{  
    PClerk old;  
    PClerk now;  
    PClerk Pnext;  
	char str[SIZE];
	int n;  //控制查询选项
    int i, j;  //获取链表长度以及比较的次数
	int flag = 1;  //控制是否退出选择

	for(;;)
	{
	  for(;;)
	  {
	    printf("\n\t1、升序\n\n");
	    printf("\t2、倒序\n\n");
	    printf("\t3、退出选择\n\n");
	    printf("\t请输入选择:");
	    scanf("%s",str);
	    n = Check(str,1,3);
	    if(n!=-1)break;
	  }

	  //采用冒泡排序

	switch(n)
	{
      case 1:
	    i = get_length(p);   //获取排序链表的长度
      
        while(i!=1)      //一重循环，使每个元素结点都进行比较，当i为0时，比较结束
		{  
            old = p;  
            now = p->next;  
            Pnext = now->next;  
            j = i;  
   
       while(j!=1)      //二重循环，控制每个元素结点比较的次数
       {  
          
            if(now->age > Pnext->age)  //一旦符合比较条件，结点就进行交换
            {  
                now->next = Pnext->next;  
                old->next = Pnext;  
                Pnext->next = now;  
                  
                old = Pnext;  
                Pnext = now->next;  
            }   
            else                        //不符合比较条件就移动指针
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
      
        while(i != 1)  
		{  
            old = p;  
            now = p->next;  
            Pnext = now->next;  
            j = i;  
    
       while(j != 1)  
       {  

            if(now->age < Pnext->age)  
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
		  break;
	}
	if(flag==0)
	{
		break;
	}

	}

}  
  