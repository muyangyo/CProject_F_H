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