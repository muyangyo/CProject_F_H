#define _CRT_SECURE_NO_WARNINGS 1
#include "function.h"

//初始化函数
dlk* doublelk_init()
{
	dlk* head = (dlk*)malloc(sizeof(dlk));
	assert(head != NULL);
	head->next = head;
	head->prev = head;
	return head;
}

//找位置函数
dlk* findsubscript(dlk* phead, int x)
{
	assert(phead != NULL);
	dlk* cur = phead->next;
	while (cur != phead)
	{
		if (cur->data == x)
		{
			return cur;
		}
		cur = cur->next;
	}
	return  NULL;
}

//空间申请函数
dlk* spacecreate(int x)
{
	dlk* newnode = (dlk*)malloc(sizeof(dlk));
	assert(newnode != NULL);
	newnode->data = x;
	return newnode;
}

//打印函数
void print(dlk* phead)
{
	assert(phead != NULL);
	dlk* cur = phead->next;
	while (cur != phead)
	{
		printf("%d ", cur->data);
		cur = cur->next;
	}
	printf("\n");
}

//pos位置删除函数
void posdelete(dlk* pos)
{
	assert(pos != NULL);
	dlk* posprev = pos->prev;
	dlk* posnext = pos->next;

	posprev->next = posnext;
	posnext->prev = posprev;

	free(pos);
	pos = NULL;

}

//在pos位置之前添加函数
void posadd(dlk* pos, int x)
{
	assert(pos != NULL);
	dlk* newnode = spacecreate(x);
	dlk* posprev = pos->prev;
	//和前一个链接
	newnode->prev = posprev;
	posprev->next = newnode;
	//和后一个链接
	newnode->next = pos;
	pos->prev = newnode;
}

//尾删
void taildelete(dlk* phead)
{
	assert(phead != NULL);
	assert(phead->next != phead);
	dlk* tail = phead->prev;
	posdelete(tail);
}

//尾加
void tailadd(dlk* phead, int x)
{
	assert(phead != NULL);
	dlk* tail = phead->prev;
	posadd(tail->next, x);
}

//结束
void destroylist(dlk* phead)
{
	dlk* cur = phead->next;
	while (cur != phead)
	{
		dlk* next = cur->next;
		free(cur);
		cur = next;
	}
	free(phead);
}
