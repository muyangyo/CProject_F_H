#pragma once
#include <stdio.h>
#include <stdlib.h>
#include <assert.h>

typedef struct linklist
{
	int data;
	struct linklist* next;

}lk;

//�ռ����뺯��
lk* lk_createspace(int x);

//�����ӡ����
void lk_print(lk* phead);

//����׷�Ӻ���
void lk_back_add(lk** pphead, int x);

//����βɾ����
void lk_back_delete(lk** pphead);

//Ѱ�������м���
lk* middleNode(lk* phead);

//�����е�����k���ڵ�
lk* getKthFromEnd(lk* phead, int k);

//����ָ�
//������ӣ�https://leetcode.cn/problems/partition-list/
lk* partition(lk* phead, int x);

//�����ཻ�����������������ͷ�ڵ� headA �� headB �������ҳ������������������ཻ����ʼ�ڵ㡣�����������û�н��㣬���� null 
lk* getIntersectionNode(lk* headA, lk* headB);

//Ѱ�������л�����ڽڵ�
lk* detectCycle(lk* phead);

//��������ĸ���
lk* copyRandomList(lk* phead);