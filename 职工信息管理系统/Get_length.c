#include <stdio.h>
#include "header.h"

int get_length(PClerk p)
{
	PClerk q = p->next;
    int i = 0;  //ͳ�������ȱ���

	while(q)
	{
		i++;
		q = q->next;
	}
	return i;
}