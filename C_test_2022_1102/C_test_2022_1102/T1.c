#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//递归
// 
//
//int fib(int x)
//{
//	int a = 1;
//	if (x <= 2)
//	{
//		return 1;
//	}
//	else
//		return fib(x - 1) + fib(x - 2);
//}
//
//int fibfor(int x)
//{
//	int a = 1;
//	int b = 1;
//	int c = 1;
//	for (int i = 1; i <= x - 2; i++)
//	{
//		c = a + b;
//		a = b;
//		b = c;
//	}
//	return c;
//}
//int main()
//{
//	printf("%d\n", fib(3));
//	printf("%d\n", fib(5));
//	printf("%d\n", fib(10));
//
//	printf("%d\n", fibfor(3));
//	printf("%d\n", fibfor(5));
//	printf("%d\n", fibfor(10));
//
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
//void reverse_string(char* parr)
//{
//	int longth = my_strlen(parr);
//	int z = 0;
//	int y = longth - 1;
//	if (y<2)
//	{
//		return;
//	}
//	else
//	{
//		char temp = parr[z];
//		parr[z] = parr[y];
//		parr[y] = '\0';
//		reverse_string(parr + 1);
//		parr[y] = temp;
//	}
//
//
//}
//int main()
//{
//	char arr[] = "abcde";
//	reverse_string(arr);
//	printf("%s\n", arr);
//	return 0;
//}
//int nj(int x)
//{
//	if (x < 2)
//	{
//		return 1;
//	}
//	else
//		return x * nj(x - 1);
//}
//int njfor(int x)
//{
//	int ret = 1;
//	for (int i = 1; i <= x; i++)
//	{
//		ret = ret * i;
//	}
//	return ret;
//}
//int main()
//{
//	printf("%d\n", nj(1));
//	printf("%d\n", nj(3));
//	printf("%d\n", nj(5));
//
//	printf("%d\n", njfor(1));
//	printf("%d\n", njfor(3));
//	printf("%d\n", njfor(5));
//	return 0;
//}