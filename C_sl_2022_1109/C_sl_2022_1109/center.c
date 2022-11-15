#define _CRT_SECURE_NO_WARNINGS 1
#include "game.h"
void test()
{
	int k = 1;
	srand((unsigned)time(NULL));
	while (k)
	{
		UI();
		printf("请选择:");
		scanf("%d", &k);
		if (k == 1)
		{
			game();
		}
		else if (k == 0)
		{
			break;
		}
		else
			printf("输入有误，请重新选择\n");
	}
}
int main()
{
	test();
	return 0;
}