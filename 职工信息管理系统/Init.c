#include <stdio.h>
#include <stdlib.h>
#include "header.h"

PClerk Init()
{
	PClerk p;
	p = (PClerk)malloc(sizeof(Clerk));  //����һ��ͷ���
	p->next = NULL;
	return p;
}