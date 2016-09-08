#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "header.h"


/*判断输入值是否合法 */  

int Check(char str[SIZE],int min,int max)
{
   
  int k = 0;      //判断输入值是不符合规范还是超出范围
  int num =-1;    
  int i;          //负责记录输入字符个数
  
  for(i=0;(size_t)i<strlen(str);i++)
  {
	  if((str[i]>='0')&&(str[i]<='9'))continue;  //当字符是数字时，继续循环检查
	  else
	  {
		 k=-1;
		 break;    //一旦有一个字符不是数字，就结束循坏
	  }
  }
  if(k==-1)
  {
	  printf("\n");
	  printf("\n\t输入不符合规范！请重新输入！\n");
	  printf("\n");
  }
  else
  {
	  num = atoi(str);   //把字符串转化为整型

	  if((num<min)||(num>max))      //若超出范围，输出错误信息
	  {
		num = -1;
		printf("\n");
        printf("\n\t输入超出范围！请重新输入！\n");
		printf("\n");
		
	  }		 
  }
  return num;
}
