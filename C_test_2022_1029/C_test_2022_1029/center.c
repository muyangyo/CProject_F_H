#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdbool.h>
#include <math.h>
#include <stdlib.h>
#include <time.h>

//void UI_print() {
//	printf("***************\n");
//	printf("*** 1.play ****\n");
//	printf("*** 0.exit ****\n");
//	printf("***************\n");
//}
//
//void math_game()
//{
//	int k = rand() % 101;
//	//����������
//	/*printf("%d\n", k);*/
//	//�����������
//	int time = 0;
//
//	while (time < 5)
//	{
//		printf("������һ������(1-100)��\n");
//		int i = 0;
//		scanf("%d", &i);
//		if (i == k)
//		{
//			printf("�¶��ˣ�\n");
//			break;
//		}
//		else if (i < k)
//		{
//			printf("��С�ˣ�\n");
//			time++;
//		}
//		else
//		{
//			printf("�´��ˣ�\n");
//			time++;
//		}
//		if (time == 5)
//			printf("���������Ѿ������ˣ�\n");
//	}
//}
//
//int main()
//{
//	srand((unsigned)time(NULL));
//	while (true)
//	{
//		UI_print();
//		int change = 0;
//		printf("��ѡ��:");
//		scanf("%d", &change);
//		if (change == 1)
//		{
//			math_game();
//			continue;
//		}
//		else if (change == 0)
//		{
//			printf("�˳���Ϸ have a good day��\n");
//			break;
//		}
//		else
//		{
//			printf("ѡ��������������룡\n");
//		}
//	}
//	return 0;
//}
//�Զ����ӡ�˷��ھ���
//int main()
//{
//	int k = 0;
//	scanf("%d", &k);
//	int h = 0;
//	int l = 0;
//	for(h = 1; h <= k; h++)
//	{
//		for (l = 1; l <= h; l++)
//		{
//			printf("%2d * %2d = %2d  ", h, l, h * l);
//		}
//		printf("\n");
//	}
//	return 0;
//}
//������������
//void swith(int* pa, int* pb)
//{
//	int temp = *pa;
//	*pa = *pb;
//	*pb = temp;
//}
//int main()
//{
//	int a = 10;
//	int b = 20;
//	printf("����ǰ��a=%d,b=%d\n", a, b);
//	swith(&a, &b);
//	printf("������a=%d,b=%d\n", a, b);
//	return 0;
//}
//�����ж�����
//void is_leap_year_pt(int x)
//{
//	if ((x % 4 == 0 && x % 100 != 0) || (x % 400 == 0))
//		printf("���������꣡\n");
//	else
//		printf("���겻�����꣡\n");
//}
//int main()
//{
//	int year = 0;
//	scanf("%d", &year);
//	is_leap_year_pt(year);
//	return 0;
//}
//�����ж�����
//void is_prime_number(int x)
//{
//	int flag = 1;
//	for (int i = 2; i <= x / 2; i++)
//	{
//		if (x % i == 0)
//			flag = 0;
//	}
//	if (flag == 1)
//	{
//		printf("%d������\n", x);
//	}
//	else
//	{
//		printf("%d��������\n", x);
//	}
//}
//int main()
//{
//	int num = 0;
//	scanf("%d", &num);
//	is_prime_number(num);
//	return 0;
//}
//int Max(int a, int b)
//{
//	return a > b ? a : b;
//}
//int main()
//{
//	int a = 43;
//	int b = 20;
//	int c = 100;
//	printf("%d", Max(a, Max(b, c)));
//}