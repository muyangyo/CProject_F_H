#define _CRT_SECURE_NO_WARNINGS 1
#include "Link.h"

int main()
{
	lk* phead = NULL;
	lk_back_add(&phead, 1);
	lk_back_add(&phead, 2);
	lk_back_add(&phead, 3);
	lk_print(phead);
	lk_back_delete(&phead);
	lk_back_delete(&phead);
	lk_back_delete(&phead);
	lk_print(phead);
	return 0;
}