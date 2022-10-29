#define _CRT_SECURE_NO_WARNINGS 1
#include "stack.h"
void test1()
{
	st item;
	Stack_init(&item);
	stack_add(&item, 1);
	stack_add(&item, 2);
	printf("%d\n", stack_top(&item));
	stack_add(&item, 3);
	stack_add(&item, 4);
	stack_add(&item, 5);
	stack_add(&item, 6);
	printf("%d\n", stack_top(&item));
	stack_delete(&item);
	stack_delete(&item);
	stack_delete(&item);
	stack_delete(&item);
	stack_delete(&item);
	stack_delete(&item);
	if (stack_is_empty(&item) == true)
		printf("stack is empty");
	else
		printf("stack is not empty");
	stack_destroy(&item);
}
int main()
{
	test1();
	return 0;
}