#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdbool.h>
#include <math.h>
#include <stdlib.h>
#include <time.h>

//void UI_print() {
//	printf("***************\n");
//	printf("*** 1.play ****\n");
//	printf("*** 0.exit ****\n");
//	printf("***************\n");
//}
//
//void math_game()
//{
//	int k = rand() % 101;
//	//测试作弊用
//	/*printf("%d\n", k);*/
//	//猜题次数限制
//	int time = 0;
//
//	while (time < 5)
//	{
//		printf("请输入一个数字(1-100)：\n");
//		int i = 0;
//		scanf("%d", &i);
//		if (i == k)
//		{
//			printf("猜对了！\n");
//			break;
//		}
//		else if (i < k)
//		{
//			printf("猜小了！\n");
//			time++;
//		}
//		else
//		{
//			printf("猜大了！\n");
//			time++;
//		}
//		if (time == 5)
//			printf("猜数次数已经用完了！\n");
//	}
//}
//
//int main()
//{
//	srand((unsigned)time(NULL));
//	while (true)
//	{
//		UI_print();
//		int change = 0;
//		printf("请选择:");
//		scanf("%d", &change);
//		if (change == 1)
//		{
//			math_game();
//			continue;
//		}
//		else if (change == 0)
//		{
//			printf("退出游戏 have a good day！\n");
//			break;
//		}
//		else
//		{
//			printf("选择错误！请重新输入！\n");
//		}
//	}
//	return 0;
//}
//自定义打印乘法口诀表
//int main()
//{
//	int k = 0;
//	scanf("%d", &k);
//	int h = 0;
//	int l = 0;
//	for(h = 1; h <= k; h++)
//	{
//		for (l = 1; l <= h; l++)
//		{
//			printf("%2d * %2d = %2d  ", h, l, h * l);
//		}
//		printf("\n");
//	}
//	return 0;
//}
//交换两个整数
//void swith(int* pa, int* pb)
//{
//	int temp = *pa;
//	*pa = *pb;
//	*pb = temp;
//}
//int main()
//{
//	int a = 10;
//	int b = 20;
//	printf("交换前：a=%d,b=%d\n", a, b);
//	swith(&a, &b);
//	printf("交换后：a=%d,b=%d\n", a, b);
//	return 0;
//}
//函数判断闰年
//void is_leap_year_pt(int x)
//{
//	if ((x % 4 == 0 && x % 100 != 0) || (x % 400 == 0))
//		printf("该年是闰年！\n");
//	else
//		printf("该年不是闰年！\n");
//}
//int main()
//{
//	int year = 0;
//	scanf("%d", &year);
//	is_leap_year_pt(year);
//	return 0;
//}
//函数判断素数
//void is_prime_number(int x)
//{
//	int flag = 1;
//	for (int i = 2; i <= x / 2; i++)
//	{
//		if (x % i == 0)
//			flag = 0;
//	}
//	if (flag == 1)
//	{
//		printf("%d是素数\n", x);
//	}
//	else
//	{
//		printf("%d不是素数\n", x);
//	}
//}
//int main()
//{
//	int num = 0;
//	scanf("%d", &num);
//	is_prime_number(num);
//	return 0;
//}
//int Max(int a, int b)
//{
//	return a > b ? a : b;
//}
//int main()
//{
//	int a = 43;
//	int b = 20;
//	int c = 100;
//	printf("%d", Max(a, Max(b, c)));
//}
//int Fun(int n)
//{
//	if (n == 5)
//		return 2;
//	else
//		return 2 * Fun(n + 1);
//}
//int main()
//{
//	int ret = Fun(2);
//	printf("%d\n", ret);
//	return 0;
//}
//递归实现n的k次方
//int nj(int x)
//{
//	if (x == 1)
//		return 1;
//	else
//		return (x* (nj(x - 1)));
//}
//int main()
//{
//	int a = 5;
//	int ret = nj(a);
//	printf("%d\n",ret);
//	return 0;
//}
//计算一个数的每位之和（递归实现）
//int sum(int x)
//{
//	if (x < 10)
//		return x;
//	else
//		return (x % 10 + (sum(x / 10)));
//}
//int main()
//{
//	int ret = sum(1729);
//	printf("%d\n", ret);
//	return 0;
//}
//strlen的模拟（递归实现）
//int my_strlen(char* parr)
//{
//	if (*parr == '\0')
//		return 0;
//	else
//	{
//		return(1 + (my_strlen(parr + 1)));
//	}
//}
//int main()
//{
//	char arr[] = "abcde";
//	int ret = my_strlen(arr);
//	printf("%d\n", ret);
//}
//void everynumberprint(int x)
//{
//	if (x < 10)
//		printf("%d ",x);
//	else
//	{
//		everynumberprint(x / 10);
//		printf("%d ", x % 10);
//	}
//}
//int main()
//{
//	everynumberprint(12345678);
//	return 0;
//}