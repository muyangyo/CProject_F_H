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
int String_flipping(char* parr1, char* parr2)
{
	size_t size1 = strlen(parr1);
	size_t size2 = strlen(parr2);
	if (size1 != size2)
	{
		return 0;
	}

	char temp[100] = "";
	strncat(temp, parr1, size1);
	strncat(temp, parr1, size1);

	char* pos = temp;
	while (size1)
	{
		if (*pos == *parr2)
		{
			char* temp_pos1 = pos;
			char* temp_pos2 = parr2;
			int flag = 1;//进入比较,如果有对不上的就跳出
			for (int i = 0; i < size2 - 1; i++)
			{	
				temp_pos1++;
				temp_pos2++;
				if (*temp_pos1 != *temp_pos2)
				{
					flag = 0;
					break;
				}
			}
			if (flag == 1)
				return 1;
		}
		pos++;
		size1--;
	}
	return 0;
}
int main()
{
	char arr1[] = "AABCD";
	char arr2[] = "ABCDA";
	if (String_flipping(arr1, arr2))
	{
		printf("arr1是arr2翻转而来的!");
	}
	else
	{
		printf("arr1不是arr2翻转而来的!");
	}
	return 0;
}