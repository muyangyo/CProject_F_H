#pragma once
#include <stdio.h>
#include <stdlib.h>
#include <assert.h>

typedef struct linklist
{
	int data;
	struct linklist* next;

}lk;

//空间申请函数
lk* lk_createspace(int x);

//链表打印函数
void lk_print(lk* phead);

//链表追加函数
void lk_back_add(lk** pphead, int x);

//链表尾删函数
void lk_back_delete(lk** pphead);

//寻找链表中间结点
lk* middleNode(lk* phead);

//链表中倒数第k个节点
lk* getKthFromEnd(lk* phead, int k);

//链表分隔
//题库链接：https://leetcode.cn/problems/partition-list/
lk* partition(lk* phead, int x);

//链表相交：给你两个单链表的头节点 headA 和 headB ，请你找出并返回两个单链表相交的起始节点。如果两个链表没有交点，返回 null 
lk* getIntersectionNode(lk* headA, lk* headB);

//寻找链表中环的入口节点
lk* detectCycle(lk* phead);

//复杂链表的复制
lk* copyRandomList(lk* phead);