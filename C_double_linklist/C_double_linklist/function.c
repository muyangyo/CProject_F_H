#define _CRT_SECURE_NO_WARNINGS 1
#include "function.h"

//��ʼ������
dlk* doublelk_init()
{
	dlk* head = (dlk*)malloc(sizeof(dlk));
	assert(head != NULL);
	head->next = head;
	head->prev = head;
	return head;
}

//��λ�ú���
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

//�ռ����뺯��
dlk* spacecreate(int x)
{
	dlk* newnode = (dlk*)malloc(sizeof(dlk));
	assert(newnode != NULL);
	newnode->data = x;
	return newnode;
}

//��ӡ����
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

//posλ��ɾ������
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

//��posλ��֮ǰ��Ӻ���
void posadd(dlk* pos, int x)
{
	assert(pos != NULL);
	dlk* newnode = spacecreate(x);
	dlk* posprev = pos->prev;
	//��ǰһ������
	newnode->prev = posprev;
	posprev->next = newnode;
	//�ͺ�һ������
	newnode->next = pos;
	pos->prev = newnode;
}

//βɾ
void taildelete(dlk* phead)
{
	assert(phead != NULL);
	assert(phead->next != phead);
	dlk* tail = phead->prev;
	posdelete(tail);
}

//β��
void tailadd(dlk* phead, int x)
{
	assert(phead != NULL);
	dlk* tail = phead->prev;
	posadd(tail->next, x);
}

//����
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
