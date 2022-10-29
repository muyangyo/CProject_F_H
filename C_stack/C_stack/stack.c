#define _CRT_SECURE_NO_WARNINGS 1
#include "stack.h"

//��ʼ��
void Stack_init(st* ps)
{
	assert(ps);
	ps->op = NULL;
	ps->top = -1;//Ԫ�ص�ַ��0��ʼ��
	ps->mount = 0;
	ps->capacity = 0;
}

//��ӣ�ֻ��β�ӣ�
void stack_add(st* ps, int x)
{
	assert(ps);
	//���жϿռ乻���������������������
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
//ɾ��
void stack_delete(st* ps)
{
	assert(ps);
	assert(ps->mount > 0);//�ж��Ƿ�ɾ��
	ps->top--;
	ps->mount--;
}
//����
void stack_destroy(st* ps)
{
	assert(ps);
	free(ps->op);
	ps->op = NULL;
}
//��������
StackDateType stack_top(st* ps)
{
	assert(ps);
	assert(ps->mount > 0);
	return ps->op[ps->top];
}
//�ж��Ƿ�Ϊ��
bool stack_is_empty(st* ps)
{
	assert(ps);
	if (ps->mount == 0)
		return true;
	else
		return false;
}