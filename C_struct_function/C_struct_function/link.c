#define _CRT_SECURE_NO_WARNINGS 1
#include "Link.h"

//空间申请函数
lk* lk_createspace(int x)
{
	lk* newnode = (lk*)malloc(sizeof(lk));
	if (newnode == NULL)
	{
		printf("出现错误\n");
		exit(-1);
	}

	newnode->data = x;
	newnode->next = NULL;

	return newnode;
}

//链表打印函数
void lk_print(lk* phead)
{
	if (phead == NULL)
		printf("已为空");
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

//链表追加函数
void lk_back_add(lk** pphead, int x)
{
	//为空的特殊情况
	if (*pphead == NULL)
	{
		*pphead = lk_createspace(x);
	}

	//正常情况
	else
	{
		//寻找尾结点
		lk* tail = *pphead;
		while (tail->next != NULL)
		{
			tail = tail->next;
		}
		//追加
		tail->next = lk_createspace(x);

	}
}

//链表尾删函数
void lk_back_delete(lk** pphead)
{
	//空的情况
	if (*pphead == NULL)
	{
		printf("出现错误\n");
		exit(-1);
	}
	//删除最后一个结点的情况
	if ((*pphead)->next == NULL)
	{
		free(*pphead);
		*pphead = NULL;
	}
	//两个及以上的情况
	else
	{
		lk* pre = NULL;
		pre = *pphead;
		//寻找尾结点
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

//寻找链表中间结点
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

//链表中倒数第k个节点
lk* getKthFromEnd(lk* phead, int k)
{
	/*if (phead == NULL)
		return NULL;
	可有可无，直接报错也行*/
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

//链表分隔
//题库链接：https://leetcode.cn/problems/partition-list/
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
	//先置空，断开后面的链接，以防错读
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

//链表相交：给你两个单链表的头节点 headA 和 headB ，请你找出并返回两个单链表相交的起始节点。如果两个链表没有交点，返回 null 
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
	//想交尾巴一定相同，链表是不可能出现发散的，只能聚合
	if (tailA != tailB)
		return NULL;
	//长的先走，然后再一起走
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
	//返回subcriptA和subcriptB一样
	return subscriptA;

}

//寻找链表中环的入口节点——方法一
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
			//已经相遇，fast，slow处于相遇点
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
//寻找链表中环的入口节点——方法二
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

//复杂链表的复制
lk* copyRandomList(lk* phead)
{
	lk* cur = phead;
	lk* next = phead;
	if (phead == NULL)
		return NULL;
	//创建空间，赋予copy的值和next
	while (cur != NULL)
	{
		lk* copytail = (lk*)malloc(sizeof(lk));
		next = cur->next;
		copytail->data = cur->data;
		copytail->next = next;
		cur->next = copytail;
		cur = next;
	}
	//random赋值，由于前面才开创好全部结点，所以不能在前面就给random赋值，否则会链接错误空间
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
	//断开并恢复
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
