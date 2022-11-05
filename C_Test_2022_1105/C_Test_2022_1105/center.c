#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//数组
//
//
//整形数组打印函数
//void print(int* parr, int size)
//{
//	int i = 0;
//	for (i = 0; i < size; i++)
//	{
//		printf("%d ", *(parr + i));
//	}
//	printf("\n");
//}
//int main()
//{
//	int arr1[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int arr2[10] = { 10,9,8,7,6,5,4,3,2,1 };
//	int size = sizeof(arr1) / sizeof(arr1[0]);
//	int_print(arr1, size);
//	int_print(arr2, size);
//
//	int temp = 0;
//	for (int i = 0; i < size; i++)
//	{
//		temp = arr1[i];
//		arr1[i] = arr2[i];
//		arr2[i] = temp;
//	}
//	int_print(arr1, size);
//	int_print(arr2, size);
//	return 0;
//}

//void print(int* parr, int size)
//{
//	int i = 0;
//	for (i = 0; i < size; i++)
//	{
//		printf("%d ", *(parr + i));
//	}
//	printf("\n");
//}
//// 初始化 整形数组 为全0
//void init(int* parr, int size)
//{
//	for (int i = 0; i < size; i++)
//	{
//		*(parr + i) = 0;
//	}
// }
////整形数组 的逆置
//void reverse(int* parr, int size)
//{
//	int z = 0;
//	int y = size - 1;
//	while (z <= y)
//	{
//		int temp = parr[z];
//		parr[z] = parr[y];
//		parr[y] = temp;
//		z++;
//		y--;
//	}
//}
//int main()
//{
//	int arr1[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int size = sizeof(arr1) / sizeof(arr1[0]);
//	print(arr1, size);
//
//	reverse(arr1, size);
//	print(arr1, size);
//
//	init(arr1,size);
//	print(arr1, size);
//	return 0;
//}
