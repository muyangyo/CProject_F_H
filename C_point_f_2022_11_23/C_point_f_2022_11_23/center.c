#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//int main()
//{
//	int changeccount = 0;
//	int money = 20;
//	int cococount = 0;
//	while (money)
//	{
//		money --	;
//		changeccount++;
//		cococount++;
//	}
//	while (changeccount>1)
//	{
//		cococount++;
//		changeccount++;
//		changeccount -= 2;
//	}
//	printf("%d\n", cococount);
//	return 0;
//}
//为了好看而已
//#include <assert.h>
//#define LONGTH 50
//void int_bob(int* parr, int size)
//{
//	assert(parr != NULL);
//	int i = 0;
//	int j = 0;
//	for (i = 1; i < size; i++)
//	{
//		for (j = 0; j < size - i; j++)
//		{
//			if (parr[j] > parr[j + 1])
//			{
//				int temp = parr[j];
//				parr[j] = parr[j + 1];
//				parr[j + 1] = temp;
//			}
//
//		}
//	}
//}
//void intarr_init(int* parr, int size)
//{
//	for (int i = 0; i < size; i++)
//	{
//		*(parr + i) = 100;//无效数字为100
//	}
//}
//void jxoh(int* p, int size)
//{
//	int arr1[LONGTH] = { 0 };
//	int size1 = sizeof(arr1) / sizeof(arr1[0]);
//	intarr_init(arr1, size1);
//
//	int arr2[LONGTH] = { 0 };
//	intarr_init(arr2, size1);
//
//	int p1 = 0;
//	int p2 = 0;
//	for (int i = 0; i < size; i++)
//	{
//		if (p[i] % 2 != 0)
//		{
//			arr1[p1] = p[i];
//			p1++;
//		}
//		else
//		{
//			arr2[p2] = p[i];
//			p2++;
//		}
//	}
//
//	int_bob(arr1, size1);
//	int_bob(arr2, size1);
//
//	int sub = 0;
//	for (int i = 0; i < LONGTH; i++)
//	{
//		if (arr1[i] == 100)
//		{
//			break;
//		}
//		p[sub] = arr1[i];
//		sub++;
//	}
//
//	for (int i = 0; i < LONGTH; i++)
//	{
//		if (arr2[i] == 100)
//		{
//			break;
//		}
//		p[sub] = arr2[i];
//		sub++;
//	}
//}
//
//void intarr_print(int* p, int size)
//{
//	for (int i = 0; i < size; i++)
//	{
//		printf("%d ", p[i]);
//	}
//	printf("\n");
//}
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9 };
//	int size = sizeof(arr) / sizeof(arr[0]);
//	jxoh(arr, size);
//	intarr_print(arr, size);
//}