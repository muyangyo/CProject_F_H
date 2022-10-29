#pragma once
#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#include <stdbool.h>

typedef int QueueDateType;

//链表
typedef struct linklist
{
	QueueDateType date;
	struct linklist* next;
}lk;

//队列管理指针
typedef struct admin
{
	lk* ophead;
	lk* optail;
}Qop;

void Queue_init(Qop* p);
void Queue_destroy(Qop* p);
void Queue_add(Qop* p, QueueDateType x);
void Queue_delete(Qop* p);
QueueDateType Queue_first(Qop* p);
QueueDateType Queue_back(Qop* p);
int Queue_size(Qop* p);
bool Queue_is_empty(Qop* p);

