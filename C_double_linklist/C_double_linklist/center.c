#define _CRT_SECURE_NO_WARNINGS 1
#include "function.h"

int main()
{
	dlk* phead = NULL;
	phead = doublelk_init();
	tailadd(phead, 1);
	tailadd(phead, 2);
	tailadd(phead, 3);
	print(phead);
	tailadd(phead, 4);
	tailadd(phead, 5);
	print(phead);
	dlk* pos = findsubscript(phead, 3);
	posadd(pos, 1);
	print(phead);
	destroylist(phead);
	phead = NULL;
	return 0;
}