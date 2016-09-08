#include <stdio.h>
#include "header.h"

int get_length(PClerk p)
{
	PClerk q = p->next;
    int i = 0;  //统计链表长度变量

	while(q)
	{
		i++;
		q = q->next;
	}
	return i;
}