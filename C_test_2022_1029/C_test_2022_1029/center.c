#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdbool.h>
#include <math.h>
#include <stdlib.h>
#include <time.h>

void UI_print() {
	printf("***************\n");
	printf("*** 1.play ****\n");
	printf("*** 0.exit ****\n");
	printf("***************\n");
}

void math_game()
{
	int k = rand() % 101;
	//����������
	/*printf("%d\n", k);*/
	//�����������
	int time = 0;

	while (time < 5)
	{
		printf("������һ������(1-100)��\n");
		int i = 0;
		scanf("%d", &i);
		if (i == k)
		{
			printf("�¶��ˣ�\n");
			break;
		}
		else if (i < k)
		{
			printf("��С�ˣ�\n");
			time++;
		}
		else
		{
			printf("�´��ˣ�\n");
			time++;
		}
		if (time == 5)
			printf("���������Ѿ������ˣ�\n");
	}
}

int main()
{
	srand((unsigned)time(NULL));
	while (true)
	{
		UI_print();
		int change = 0;
		printf("��ѡ��:");
		scanf("%d", &change);
		if (change == 1)
		{
			math_game();
			continue;
		}
		else if (change == 0)
		{
			printf("�˳���Ϸ have a good day��\n");
			break;
		}
		else
		{
			printf("ѡ��������������룡\n");
		}
	}
	return 0;
}