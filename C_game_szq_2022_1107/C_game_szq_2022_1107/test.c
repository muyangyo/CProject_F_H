#define _CRT_SECURE_NO_WARNINGS 1
#include "game.h"
void test1()
{
	int flag = 1;
	while (flag) {
		ui();
		printf("«Î—°‘Ò:");
		scanf("%d", &flag);
		if (flag == 1)
		{
			my_sys();
			game();
		}

	}
}
int main()
{
	test1();
	return 0;
}