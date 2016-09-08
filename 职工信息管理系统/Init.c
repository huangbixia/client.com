#include <stdio.h>
#include <stdlib.h>
#include "header.h"

PClerk Init()
{
	PClerk p;
	p = (PClerk)malloc(sizeof(Clerk));  //建立一个头结点
	p->next = NULL;
	return p;
}