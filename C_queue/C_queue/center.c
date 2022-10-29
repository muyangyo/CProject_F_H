#define _CRT_SECURE_NO_WARNINGS 1
#include "queue.h"

void test1()
{
	Qop item;
	Queue_init(&item);
	Queue_add(&item, 1);
	Queue_add(&item, 2);
	Queue_add(&item, 3);
	printf("%d\n", Queue_first(&item));
	printf("%d\n", Queue_back(&item));
	Queue_add(&item, 4);
	Queue_add(&item, 5);
	printf("%d\n", Queue_first(&item));
	printf("%d\n", Queue_back(&item));
	printf("%d\n", Queue_size(&item));
	Queue_delete(&item);
	Queue_delete(&item);
	Queue_delete(&item);
	Queue_delete(&item);
	Queue_delete(&item);
	if (Queue_is_empty(&item) == true)
		printf("queue is empty");
	else
		printf("queue is not empty");
	Queue_destroy(&item);
}

int main()
{
	test1();
	return 0;
}