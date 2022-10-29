#define _CRT_SECURE_NO_WARNINGS 1
#include "Link.h"

//�ռ����뺯��
lk* lk_createspace(int x)
{
	lk* newnode = (lk*)malloc(sizeof(lk));
	if (newnode == NULL)
	{
		printf("���ִ���\n");
		exit(-1);
	}

	newnode->data = x;
	newnode->next = NULL;

	return newnode;
}

//�����ӡ����
void lk_print(lk* phead)
{
	if (phead == NULL)
		printf("��Ϊ��");
	else
	{
		lk* pos = phead;
		while (pos != NULL)
		{
			printf("%d ", pos->data);
			pos = pos->next;
		}
		printf("\n");
	}
}

//����׷�Ӻ���
void lk_back_add(lk** pphead, int x)
{
	//Ϊ�յ��������
	if (*pphead == NULL)
	{
		*pphead = lk_createspace(x);
	}

	//�������
	else
	{
		//Ѱ��β���
		lk* tail = *pphead;
		while (tail->next != NULL)
		{
			tail = tail->next;
		}
		//׷��
		tail->next = lk_createspace(x);

	}
}

//����βɾ����
void lk_back_delete(lk** pphead)
{
	//�յ����
	if (*pphead == NULL)
	{
		printf("���ִ���\n");
		exit(-1);
	}
	//ɾ�����һ���������
	if ((*pphead)->next == NULL)
	{
		free(*pphead);
		*pphead = NULL;
	}
	//���������ϵ����
	else
	{
		lk* pre = NULL;
		pre = *pphead;
		//Ѱ��β���
		lk* tail = *pphead;
		while (tail->next != NULL)
		{
			pre = tail;
			tail = tail->next;
		}
		free(tail);
		tail = NULL;

		pre->next = NULL;

	}
}

//Ѱ�������м���
lk* middleNode(lk* phead)
{
	if (phead == NULL)
		return NULL;
	lk* fast = phead;
	lk* slow = phead;
	while (fast != NULL && fast->next != NULL)
	{
		fast = fast->next->next;
		slow = slow->next;
	}
	return slow;
}

//�����е�����k���ڵ�
lk* getKthFromEnd(lk* phead, int k)
{
	/*if (phead == NULL)
		return NULL;
	���п��ޣ�ֱ�ӱ���Ҳ��*/
	lk* slow = phead;
	lk* fast = phead;
	int i = 0;
	for (i = 0; i < k; i++)
	{
		if (fast == NULL)
			return NULL;
		fast = fast->next;
	}
	while (fast != NULL)
	{
		slow = slow->next;
		fast = fast->next;
	}
	return slow;
}

//����ָ�
//������ӣ�https://leetcode.cn/problems/partition-list/
lk* partition(lk* phead, int x)
{
	if (phead == NULL)
		return NULL;
	lk* cur = phead;
	lk* newpos1 = (lk*)malloc(sizeof(lk));
	newpos1->next = NULL;
	lk* np1 = newpos1;
	lk* newpos2 = (lk*)malloc(sizeof(lk));
	newpos2->next = NULL;
	lk* np2 = newpos2;
	lk* ret = NULL;
	while (cur != NULL)
	{
		if (cur->data < x)
		{
			np1->next = cur;
			np1 = np1->next;
			cur = cur->next;
		}
		else
		{
			np2->next = cur;
			np2 = np2->next;
			cur = cur->next;
		}
	}
	//���ÿգ��Ͽ���������ӣ��Է����
	np1->next = NULL;
	np2->next = NULL;

	np1->next = newpos2->next;
	ret = newpos1->next;

	free(newpos1);
	free(newpos2);
	newpos1 = NULL;
	newpos2 = NULL;
	return ret;
}

//�����ཻ�����������������ͷ�ڵ� headA �� headB �������ҳ������������������ཻ����ʼ�ڵ㡣�����������û�н��㣬���� null 
lk* getIntersectionNode(lk* headA, lk* headB)
{
	lk* tailA = headA;
	int countA = 1;
	lk* tailB = headB;
	int countB = 1;
	lk* subscriptA = headA;
	lk* subscriptB = headB;
	if (headA == NULL || headB == NULL)
		return NULL;
	while (tailA->next != NULL)
	{
		tailA = tailA->next;
		countA++;
	}
	while (tailB->next != NULL)
	{
		tailB = tailB->next;
		countB++;
	}
	//�뽻β��һ����ͬ�������ǲ����ܳ��ַ�ɢ�ģ�ֻ�ܾۺ�
	if (tailA != tailB)
		return NULL;
	//�������ߣ�Ȼ����һ����
	if (countA > countB)
	{
		int i = 0;
		for (i = 0; i < (countA - countB); i++)
			subscriptA = subscriptA->next;
	}
	else
	{
		int i = 0;
		for (i = 0; i < (countB - countA); i++)
			subscriptB = subscriptB->next;
	}
	while (subscriptA != subscriptB)
	{
		subscriptA = subscriptA->next;
		subscriptB = subscriptB->next;
	}
	//����subcriptA��subcriptBһ��
	return subscriptA;

}

//Ѱ�������л�����ڽڵ㡪������һ
lk* detectCycle(lk* phead)
{
	lk* slow = phead;
	lk* fast = phead;
	lk* meet = NULL;

	while (fast != NULL && fast->next != NULL)
	{
		fast = fast->next->next;
		slow = slow->next;
		if (fast == slow)
		{
			//�Ѿ�������fast��slow����������
			meet = fast;
			while (meet != phead)
			{
				meet = meet->next;
				phead = phead->next;
			}
			return phead;
		}
	}
	return NULL;
}
//Ѱ�������л�����ڽڵ㡪��������
lk* detectCycle(lk* phead)
{
	lk* fast = phead;
	lk* slow = phead;
	lk* meet = NULL;
	lk* rem = NULL;
	lk* ret = NULL;
	while (fast && fast->next)
	{
		fast = fast->next->next;
		slow = slow->next;
		if (fast == slow)
		{
			meet = fast;
			rem = meet->next;
			lk* newlist = rem;
			meet->next = NULL;
			ret = getIntersectionNode(phead, newlist);
			meet->next = rem;
			return ret;
		}
	}
	return NULL;
}

//��������ĸ���
lk* copyRandomList(lk* phead)
{
	lk* cur = phead;
	lk* next = phead;
	if (phead == NULL)
		return NULL;
	//�����ռ䣬����copy��ֵ��next
	while (cur != NULL)
	{
		lk* copytail = (lk*)malloc(sizeof(lk));
		next = cur->next;
		copytail->data = cur->data;
		copytail->next = next;
		cur->next = copytail;
		cur = next;
	}
	//random��ֵ������ǰ��ſ�����ȫ����㣬���Բ�����ǰ��͸�random��ֵ����������Ӵ���ռ�
	cur = phead;
	next = phead;
	while (cur != NULL)
	{
		lk* copypos = cur->next;
		next = copypos->next;
		if (cur->random == NULL)
			copypos->random = NULL;
		else
			copypos->random = cur->random->next;
		cur = next;
	}
	//�Ͽ����ָ�
	cur = phead;
	next = phead;
	lk* copyhead = phead->next;
	while (cur != NULL)
	{

		lk* copypos = cur->next;
		next = copypos->next;
		cur->next = next;

		if (next == NULL)
			copypos = NULL;
		else
		{
			copypos->next = next->next;
			copypos = next->next;
		}
		cur = next;
	}
	return copyhead;
}
