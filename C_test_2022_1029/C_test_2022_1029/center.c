#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdbool.h>
#include <math.h>
#include <stdlib.h>
#include <time.h>

void UI_print() {
	printf("***************\n");
	printf("*** 1.play ****\n");
	printf("*** 0.exit ****\n");
	printf("***************\n");
}

void math_game()
{
	int k = rand() % 101;
	//测试作弊用
	/*printf("%d\n", k);*/
	//猜题次数限制
	int time = 0;

	while (time < 5)
	{
		printf("请输入一个数字(1-100)：\n");
		int i = 0;
		scanf("%d", &i);
		if (i == k)
		{
			printf("猜对了！\n");
			break;
		}
		else if (i < k)
		{
			printf("猜小了！\n");
			time++;
		}
		else
		{
			printf("猜大了！\n");
			time++;
		}
		if (time == 5)
			printf("猜数次数已经用完了！\n");
	}
}

int main()
{
	srand((unsigned)time(NULL));
	while (true)
	{
		UI_print();
		int change = 0;
		printf("请选择:");
		scanf("%d", &change);
		if (change == 1)
		{
			math_game();
			continue;
		}
		else if (change == 0)
		{
			printf("退出游戏 have a good day！\n");
			break;
		}
		else
		{
			printf("选择错误！请重新输入！\n");
		}
	}
	return 0;
}