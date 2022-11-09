#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <assert.h>
//void sort(int* parr, int size)
//{
//	for (int i = 0; i < size - 1; i++)
//	{
//		for (int j = 0; j < size - i - 1; j++)
//		{
//			if (parr[j] > parr[j + 1])
//			{
//				assert(j + 1 < 10);
//				int temp = parr[j];
//				parr[j] = parr[j + 1];
//				parr[j + 1] = temp;
//			}
//		}
//	}
//}
////void intarr_tostring(int* parr, int size)
//{
//	printf("{ ");
//	for (int i = 0; i < size; i++)
//	{
//		printf("%d ", parr[i]);
//	}
//	printf("} \n");
//
//}
//void intarr_tostring(int(*p)[10])
//{
//	int sz = sizeof(*p) / sizeof((*p)[0]);
//	printf("{ ");
//	for (int i = 0; i < sz; i++)
//	{
//		printf("%d ", (*p)[i]);
//	}
//	printf("} \n");
//
//}
//int main()
//{
//	int arr[10] = { 10,9,8,7,6,5,4,3,2,1 };
//	int size = sizeof(arr) / sizeof(arr[0]);
//	sort(arr, size);
//	intarr_tostring(&arr);
//
//	return 0;
//}