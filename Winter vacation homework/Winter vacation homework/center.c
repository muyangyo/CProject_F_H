#define _CRT_SECURE_NO_WARNINGS 1
/*
 作者：MuYangyo
 机器：DR
 编译器：VS2019
*/
#include <stdio.h>
#include <string.h>
#include <Windows.h>
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
//int main()
//{
//	double* a, b;
//	float c, d;
//	*a = 1.01;
//	*b = 1.02;
//	c = 1.2f;
//	d = 1.3f;
//	printf("%f", a);
//	return 0;
//}
//int main()
//{
//	char s[] = "\\888\1234\x86";
//	printf("%d\n", strlen(s));
//	return 0;
//}
//int main()
//{
//	for (; 1;) {
//		printf("hello");
//		Sleep(1000);
//	}
//	return 0;
//}
//
//int main()
//{
//	int arr[10];
//	int(*p)[10] = &arr;
//	return 0;
//}
//int main()
//{
//	int arr[3] = { 1,2,3 };
//	int(*p)[3] = &arr;	
//	printf("%d", **p);
//	return 0;
//}
//int main()
//{
//	unsigned char a = 200;
//	unsigned char b = 100;
//	unsigned char c = 0;
//	c = a + b;
//	printf("%d %d", a + b, c);	
//	return 0;
//}
//int main()
//{
//	unsigned int a = 0x1234;
//	unsigned char b = *(unsigned char*)&a;
//	return 0;
//}
//void Competition_ranking() {
//	int mount = 1 + 2 + 3 + 4 + 5;
//	int a, b, c, d, e;
//	for (a = 1; a < 6; a++)
//	{
//		for (b = 1; b < 6; b++)
//		{
//			for (c = 1; c < 6; c++)
//			{
//				for (d = 1; d < 6; d++)
//				{
//					for (e = 1; e < 6; e++)
//					{
//
//						if (b == 2 || a == 3)
//						{
//							if (b == 2 || e == 4)
//							{
//								if (c == 1 || d == 2)
//								{
//									if (c == 5 || d == 3)
//									{
//										if (e == 4 || a == 1)
//										{
//
//											if (a + b + c + d + e == mount && a * b * c * d * e == 120)
//											{
//												printf("A%d  B%d  C%d  D%d  E%d", a, b, c, d, e);
//												printf("\n");
//											}
//
//										}
//									}
//								}
//							}
//						}
//					}
//				}
//
//			}
//		}
//	}
//}
//
//int main()
//{
//	Competition_ranking();
//	return 0;
//}
//void findperson()
//{
//	int mount = 3;
//	char arr1[] = "ABCD";
//	int arr2[4] = { 0,0,0,0 };//0为平民,1为杀手
//	for (int i = 0; i < 4; i++)
//	{
//		arr2[i] = 1;
//		if (			((arr2[0] == 0) +(arr2[2] == 1) +(arr2[3] == 1) +(arr2[3] == 0))==mount			)
//		{
//			printf("%c", arr1[i]);
//			break;
//		}
//		arr2[i] = 0;
//	}
//}
//int main()
//{
//	findperson();
//	return 0;
//}
//void yanghuisanjiao()
//{
//	int arr[10][10];
//	for (int h = 0; h < 10; h++)
//	{
//		arr[h][0] = 1;
//		arr[h][h] = 1;
//	}
//	for (int h = 2; h < 10; h++)
//	{
//		for (int l = 1; l < h; l++)
//		{
//			arr[h][l] = arr[h - 1][l] + arr[h - 1][l - 1];
//		}
//	}
//	
//
//	for (int h = 0; h < 10; h++)
//	{
//		for (int l = 0; l <= h; l++)
//		{
//			printf("%d ", arr[h][l]);
//		}
//		printf("\n");
//	}
//}
//int main()
//{
//	yanghuisanjiao();
//	return 0;
//}
//int add(int a, int b)
//{
//	return a + b;
//}
//int sub(int a, int b)
//{
//	return a - b;
//}
//int main()
//{
//	int(*p[2])(int, int) = { add,sub };
//	printf("%d", p[0](1, 2));
//	printf("%d", (*(p[0]))(1, 2));
//	return 0;
//}
//定义一个函数指针，指向的函数有两个int形参并且返回一个函数指针，返回的指针指向一个有一个int形参且返回int的函数
//int (*((*p)(int, int)))(int)
void Young_matrix(int x,int(*p)[3],int h,int l)
{
	int h_pos = h-1;
	int l_pos = l-1;
	while (h_pos >= 0 && l_pos >= 0)
	{
		if (p[h_pos][0]>x)
		{
			h_pos--;
		}
		else if(p[h_pos][l_pos]==x)
		{
			printf("got it, subscript it as:%d %d\n", h_pos, l_pos);//中文打印出现乱码,只能用英文了
			return;
		}
		else
		{
			l_pos--;
		}
	 }
	printf("can't find the elem!\n");
}
//int main()
//{
//	int arr[3][3] = { 1,2,3,4,5,6,7,8,9 };
//	Young_matrix(9,arr,3,3);
//	return 0;
//}
