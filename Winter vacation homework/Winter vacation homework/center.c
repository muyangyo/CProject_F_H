#define _CRT_SECURE_NO_WARNINGS 1
/*
 作者：MuYangyo
 机器：DR
 编译器：VS2019
*/
#include <stdio.h>
////函数判断闰年
//int is_leap_year_pt(int x)
//{
//	if ((x % 4 == 0 && x % 100 != 0) || (x % 400 == 0))
//		return 1;
//	else
//		return 0;
//}
//
//int main()
//{
//	int year, month, day;
//	scanf("%d %d %d", &year, &month, &day);
//	int daymount = 0;
//
//	int arr1[12] = { 31,29,31,30,31,30,31,31,30,31,30,31 };
//	int arr2[12] = { 31,28,31,30,31,30,31,31,30,31,30,31 };
//	if (is_leap_year_pt(year) == 1)
//	{
//		for (int i = 0; i < month - 1; i++)
//		{
//			daymount = arr1[i] + daymount;
//		}
//		daymount = daymount + day;
//	}
//	else
//	{
//		for (int i = 0; i < month - 1; i++)
//		{
//			daymount = arr2[i] + daymount;
//		}
//		daymount = daymount + day;
//	}
//	printf("%d", daymount);
//	return 0;
//}
int main()
{
	double a, b;
	float c, d;
	a = 1.01;
	b = 1.02;
	c = 1.2f;
	d = 1.3f;
	printf("%f", a);
	return 0;
}