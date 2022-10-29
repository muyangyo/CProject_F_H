#define _CRT_SECURE_NO_WARNINGS 1
#include "function_base.h"

//整形数组打印函数
void int_print(int* parr, int size)
{
	int i = 0;
	for (i = 0; i < size; i++)
	{
		printf("%d ", *(parr + i));
	}
	printf("\n");
}

//删除有序数组中的重复项
int remove_commondate(int* parr, int size)
{
	int* flag = parr;
	int* p = parr;
	int ele = *flag;
	int subscript_flag = 0;
	int newsize = 0;
	while (subscript_flag < size)
	{
		if ((*flag) == ele)
		{
			flag++;
			subscript_flag++;
		}
		else
		{
			*p = ele;
			p++;
			newsize += 1;
			ele = *flag;
		}
	}
	*p = ele;
	newsize += 1;
	return newsize;
}

//int整形泡泡函数
void int_bob(int* parr, int size)
{
	assert(parr != NULL);
	int i = 0;
	int j = 0;
	for (i = 1; i < size; i++)
	{
		for (j = 0; j < size - i; j++)
		{
			if (parr[j] > parr[j + 1])
			{
				int temp = parr[j];
				parr[j] = parr[j + 1];
				parr[j + 1] = temp;
			}

		}
	}
}

//测试
void test_remove_commondate()
{
	int arr[10] = { 1,1,2,3,3,3,3,3,3,3 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	int newsize = remove_commondate(arr, sz);
	int_print(arr, newsize);

}