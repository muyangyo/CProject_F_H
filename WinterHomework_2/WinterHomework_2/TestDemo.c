#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>

/*
 作者：MuYangyo
 机器：DR
 编译器：VS2019
*/

//void String_left_handed(size_t x, char* parr, size_t size)
//{
//	if (x > 5)
//	{
//		x = x % 5;
//	}
//	char temp[100] = "";
//	strncat(temp, parr, size);
//	strncat(temp, parr, size);
//	
//	char* pos = temp+x;
//	while (size)
//	{
//		*parr = *pos;
//		parr++;
//		pos++;
//		size--;
//	}
//	printf("%s\n", temp);
//}
//int main()
//{
//	char arr[] = "abcde";
//	String_left_handed(6, arr, strlen(arr));
//	printf("%s", arr);
//	return 0;
//}
//int String_flipping(char* parr1, char* parr2)
//{
//	size_t size1 = strlen(parr1);
//	size_t size2 = strlen(parr2);
//	if (size1 != size2)
//	{
//		return 0;
//	}
//
//	char temp[100] = "";
//	strncat(temp, parr1, size1);
//	strncat(temp, parr1, size1);
//
//	char* pos = temp;
//	while (size1)
//	{
//		if (*pos == *parr2)
//		{
//			char* temp_pos1 = pos;
//			char* temp_pos2 = parr2;
//			int flag = 1;//进入比较,如果有对不上的就跳出
//			for (int i = 0; i < size2 - 1; i++)
//			{	
//				temp_pos1++;
//				temp_pos2++;
//				if (*temp_pos1 != *temp_pos2)
//				{
//					flag = 0;
//					break;
//				}
//			}
//			if (flag == 1)
//				return 1;
//		}
//		pos++;
//		size1--;
//	}
//	return 0;
//}
//int main()
//{
//	char arr1[] = "AABCD";
//	char arr2[] = "ABCDA";
//	if (String_flipping(arr1, arr2))
//	{
//		printf("arr1是arr2翻转而来的!");
//	}
//	else
//	{
//		printf("arr1不是arr2翻转而来的!");
//	}
//	return 0;
//}
//int main()
//{
//	unsigned char a = 200;
//	//00000000 00000000 00000000 11001000 --200的补码
//	//11001000 --储存在a中的8bit
//
//	unsigned char b = 100;
//	//00000000 00000000 00000000 01100100 --100的补码
//	//01100100 --储存在b中的8bit
//
//	unsigned char c = 0;
//	c = a + b;
//	//由于小于整形,在计算时:先 整形提升 后 计算 ,再 赋值截断
//	//由于a是无符号char,直接补0
//	//00000000 00000000 00000000 11001000 --整形提升后的a
//	//00000000 00000000 00000000 01100100 --整形提升后的b
//	//00000000 00000000 00000001 00101100 --计算后
//	//00101100  --截断后储存在c中的8bit
//
//	printf("%d %d %d", a + b, a, c);
//	//同理,先 整形提升 后 计算 ,再 打印
//	//00000000 00000000 00000000 11001000 --整形提升后的a
//	//00000000 00000000 00000000 01100100 --整形提升后的b
//	//00000000 00000000 00000001 00101100 --计算后  300的二进制  由于第一位是0,故%d打印就是+300
//
//	//同理,先 整形提升 ,再 打印
//	//00000000 00000000 00000000 11001000 --整形提升后的a
//	//200的二进制  由于第一位是0,故%d打印就是+200
//
//	//同理,先 整形提升 ,再 打印
//	//00000000 00000000 00000000 00101100 --整形提升后的c
//	//44的二进制  由于第一位是0,故%d打印就是44
//	return 0;
//}
#include <stdlib.h>
typedef struct stu
{
	int id;
	char name[10];
}Stu;
int cmp_float(const void* p1, const void* p2)
{
	float exp1 = *((float*)p1);
	float exp2 = *((float*)p2);
	if (exp1 > exp2)
		return 1;
	else if (exp1 == exp2)
		return 0;
	else
		return -1;
}
int cmp_Stu(const void* p1, const void* p2)
{
	int exp1 = ((Stu*)p1)->id;
	int exp2 = ((Stu*)p2)->id;
	if (exp1 > exp2)
		return 1;
	else if (exp1 == exp2)
		return 0;
	else
		return -1;
}
void swap(void* p1, void* p2, size_t elem_width)
{
	for (size_t i = 0; i < elem_width; i++)
	{
		char temp = *(char*)p1;
		*(char*)p1 = *(char*)p2;
		*(char*)p2 = temp;
		((char*)p1)++;
		((char*)p2)++;
	}
}
//qsort(arr, sz, size_elem, cmp_float);
void MyQsort(void* parr, size_t num, size_t elem_width, int(*cmp)(const void*, const void*))
{
	for (size_t i = 0; i < num - 1; i++)
	{
		for (size_t j = 0; j < num - 1 - i; j++)
		{
			if (cmp((char*)parr + (j * elem_width), (char*)parr + ((j + 1) * elem_width)) == 1)
			{
				swap((char*)parr + (j * elem_width), (char*)parr + ((j + 1) * elem_width),elem_width);
			}
		}
	}
}
void printf_float(float* parr, size_t size)
{
	for (int i = 0; i < size; i++)
	{
		printf("%f ", parr[i]);
	}
	printf("\n");
}
void printf_Stu(Stu* parr,size_t size)
{
	for (int i = 0; i < size; i++)
	{
		printf("%d %s\n", parr[i].id,parr[i].name);
	}
	printf("--------------------------------------------\n");
}

int main()
{
	//float_qsort
	float arr[] = { 1.2,1.3,1.1 };
	size_t sz = sizeof(arr) / sizeof(arr[0]);
	size_t size_elem = sizeof(arr[0]);
	printf_float(arr, sz);
	MyQsort(arr, sz, size_elem,cmp_float);
	printf_float(arr, sz);

	//Stu_qsort
	/*Stu arr1[] = { {3,"小李"},{1,"小白"},{2,"小圆"} };
	size_t sz1 = sizeof(arr1) / sizeof(arr1[0]);
	size_t size_elem1 = sizeof(arr1[0]);
	printf_Stu(arr1, sz);
	qsort(arr1, sz1, size_elem1, cmp_Stu);
	printf_Stu(arr1, sz);
	return 0;*/
}