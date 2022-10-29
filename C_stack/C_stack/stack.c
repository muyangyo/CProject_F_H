#define _CRT_SECURE_NO_WARNINGS 1
#include "stack.h"

//初始化
void Stack_init(st* ps)
{
	assert(ps);
	ps->op = NULL;
	ps->top = -1;//元素地址从0开始算
	ps->mount = 0;
	ps->capacity = 0;
}

//添加（只能尾加）
void stack_add(st* ps, int x)
{
	assert(ps);
	//先判断空间够不够，不够就扩容在添加
	if (ps->capacity == ps->mount)
	{
		ps->capacity = ps->capacity == 0 ? 4 : ((ps->capacity) * 2);
		StackDateType* temp = (StackDateType)realloc(ps->op, (ps->capacity) * sizeof(StackDateType));
		assert(temp != NULL);
		ps->op = temp;
	}
	ps->top++;
	ps->mount++;
	ps->op[ps->top] = x;
}
//删除
void stack_delete(st* ps)
{
	assert(ps);
	assert(ps->mount > 0);//判断是否删空
	ps->top--;
	ps->mount--;
}
//销毁
void stack_destroy(st* ps)
{
	assert(ps);
	free(ps->op);
	ps->op = NULL;
}
//顶部数据
StackDateType stack_top(st* ps)
{
	assert(ps);
	assert(ps->mount > 0);
	return ps->op[ps->top];
}
//判断是否为空
bool stack_is_empty(st* ps)
{
	assert(ps);
	if (ps->mount == 0)
		return true;
	else
		return false;
}