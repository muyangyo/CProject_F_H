#pragma once
#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#include <stdbool.h>

typedef int StackDateType;
typedef struct stack
{
	StackDateType* op;//����ָ��
	int top;//����λ��
	int mount;//ʵ������
	int capacity;//������С
}st;

void Stack_init(st* ps);
void stack_add(st* ps, int x);
void stack_delete(st* ps);
void stack_destroy(st* ps);
StackDateType stack_top(st* ps);
bool stack_is_empty(st* ps);