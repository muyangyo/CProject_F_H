#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int main()
{
	
	char  a = 'a';      //字符数据类型
	int b = 10;         //整形
	//short             //短整型
	//long              //长整型
	//long long         //更长的整形
	float c = 1.02f;    //单精度浮点数
	double d = 1.2;     //双精度浮点数

	int arr1[10] = { 1,2,3,4,5,6,7,8,9,10 };
	char arr2[3] = { 'a','b','c' };
	char arr3[] = "hello everyone!";

	//C语言有没有字符串类型？
	//答案是没有的哦,
	//在C语言中我们实现字符串都是用字符串数组实现的哦
	return 0;
}