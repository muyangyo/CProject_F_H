#define _CRT_SECURE_NO_WARNINGS 1
#include "queue.h"

//��ʼ��
void Queue_init(Qop* p)
{
	assert(p);
	p->ophead = NULL;
	p->optail = NULL;
}

//��ӣ�Ҳֻ��β�ӣ�ͷ���ǳ���
void Queue_add(Qop* p, QueueDateType x)
{
	if (p->ophead == NULL)
	{
		lk* temp = (lk*)malloc(sizeof(lk));
		assert(temp);
		p->ophead = p->optail = temp;
		p->ophead->date = x;
		p->optail->next = NULL;
	}
	else
	{
		lk* newnode = (lk*)malloc(sizeof(lk));
		assert(newnode);
		p->optail->next = newnode;
		p->optail = newnode;
		p->optail->date = x;
		p->optail->next = NULL;
	}
}

//����
void Queue_destroy(Qop* p)
{
	assert(p);
	lk* pos = p->ophead;
	while (pos != NULL)
	{
		lk* next = pos->next;
		free(pos);
		pos = next;
	}
	p->ophead = NULL;

}

//ͷɾ
void Queue_delete(Qop* p)
{
	assert(p);
	assert(p->ophead != NULL);
	if (p->ophead == p->optail)
	{
		free(p->ophead);
		p->ophead = p->optail = NULL;
	}
	else
	{
		lk* next = p->ophead->next;
		free(p->ophead);
		p->ophead = next;
	}
}

//ͷԪ��
QueueDateType Queue_first(Qop* p)
{
	assert(p);
	return p->ophead->date;
}

//βԪ�أ�ֻ�޶�ȡ������ɾ��
QueueDateType Queue_back(Qop* p)
{
	assert(p);
	return p->optail->date;
}

//��С
int Queue_size(Qop* p)
{
	assert(p);
	lk* pos = p->ophead;
	int size = 0;
	while (pos != NULL)
	{
		size++;
		pos = pos->next;
	}
	return size;
}

//�ж��Ƿ�Ϊ��
bool Queue_is_empty(Qop* p)
{
	if (p->ophead == NULL)
	{
		return true;
	}
	else
		return false;
}