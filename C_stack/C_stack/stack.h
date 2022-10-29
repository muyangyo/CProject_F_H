#pragma once
#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#include <stdbool.h>

typedef int StackDateType;
typedef struct stack
{
	StackDateType* op;//管理指针
	int top;//顶端位置
	int mount;//实际数量
	int capacity;//容量大小
}st;

void Stack_init(st* ps);
void stack_add(st* ps, int x);
void stack_delete(st* ps);
void stack_destroy(st* ps);
StackDateType stack_top(st* ps);
bool stack_is_empty(st* ps);