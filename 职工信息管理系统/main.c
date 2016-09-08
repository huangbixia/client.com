#include <stdio.h>
#include <stdlib.h>
#include "header.h"

void main()
{
	PClerk p;
	p = Init();

	Foutput_Data(p);    //初始化链表
    Welcom();          //进入欢迎界面

	for(;;)
	{
	 switch(menu())
	 {
	  case 1:
		  Show_Data(p);
		  break;
	  case 2:
		  Add_Data(p);
		  break;
	  case 3:
          Delete_Data(p);
		  break;
	  case 4:
		  CountClerk(p);
		  break;
	  case 5:
          CountSalary(p);
		  break;
	  case 6:
          AvgSalary(p);
		  break;
	  case 7:
		  Query(p);
		  break;
	  case 8:
		  Sort(p);
		  break;
	  case 9:
		  Finput_Data(p);
		  break;
	  case 10:
		  UpdateData(p);
		  break;
	  case 11:
		  DataGraph(p);
		  break;
	  case 12:
		  User();
		  break;
	  case 13:
		  if((end())!=0);
		  else exit(-1);
		  break;
	 }
	}
}