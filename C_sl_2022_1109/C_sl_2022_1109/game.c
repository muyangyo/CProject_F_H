#define _CRT_SECURE_NO_WARNINGS 1
#include "game.h"
void showformine(char(*p)[R_COL])
{
	int i = 0;
	int j = 0;
	printf("����ͼ\n");
	for (j = 0; j <= COL; j++)
	{
		printf("%d ", j);
	}
	printf("\n");
	for (i = 1; i <= ROW; i++)
	{
		printf("%d ", i);
		for (j = 1; j <= ROW; j++)
		{
			printf("%c ", p[i][j]);
		}
		printf("\n");
	}
}
void UI()
{
	printf("######################\n");
	printf("#####           ######\n");
	printf("#####  1.play   ######\n");
	printf("#####  0.exit   ######\n");
	printf("#####           ######\n");
	printf("######################\n");
}
void game()
{
	char mine[R_ROW][R_COL];
	char pan[R_ROW][R_COL];
	Init(mine, '0');
	Init(pan, '?');


	show(pan);
	SetMine(mine);

	//������
	showformine(mine);

	FindMine(mine, pan);
}
void Init(char(*p)[R_COL], char set)
{
	int i = 0;
	for (i = 0; i < R_COL; i++)
	{
		int j = 0;
		for (j = 0; j < R_COL; j++)
		{
			p[i][j] = set;
		}
	}
}
void show(char(*p)[R_COL])
{
	int i = 0;
	int j = 0;
	printf("ɨ��\n");
	for (j = 0; j <= COL; j++)
	{
		printf("%d ", j);
	}
	printf("\n");
	for (i = 1; i <= ROW; i++)
	{
		printf("%d ", i);
		for (j = 1; j <= ROW; j++)
		{
			printf("%c ", p[i][j]);
		}
		printf("\n");
	}
}
void SetMine(char(*p)[R_COL])
{
	int count = EASY_COUNT;
	while (count)
	{
		//1. ��������±�
		int x = rand() % ROW + 1;
		int y = rand() % COL + 1;
		//2. ������
		if (p[x][y] == '0')
		{
			p[x][y] = '1';
			count--;
		}
	}
}
int get_mine_count(char(*p)[R_COL], int x, int y)
{
	return (p[x - 1][y] + p[x - 1][y - 1] + p[x][y - 1] + p[x + 1][y - 1] + p[x + 1][y] + p[x + 1][y + 1] + p[x][y + 1] + p[x - 1][y + 1] - 8 * '0');
}
void FindMine(char mine[R_ROW][R_COL], char pan[R_ROW][R_COL])
{
	int x = 0;
	int y = 0;
	int win = 0;
	while (win < (ROW * COL - EASY_COUNT))
	{
		printf("������Ҫ�Ų������:");
		scanf("%d %d", &x, &y);
		if (x >= 1 && x <= ROW && y >= 1 && y <= COL)
		{
			if (pan[x][y] != '?')
			{
				printf("�����걻�Ų����\n");
				continue;
			}
			if (mine[x][y] == '1')
			{
				Sleep(1000);
				system("cls");
				printf("���ź����㱻ը����\n");
				showformine(mine);
				break;
			}
			else
			{
				int n = get_mine_count(mine, x, y);
				pan[x][y] = n + '0';
				Sleep(1000);
				system("cls");
				show(pan);
				win++;
			}
		}
		else
		{
			printf("����Ƿ�����������\n");
		}
	}
	if (win == (ROW * COL - EASY_COUNT))
	{
		Sleep(1000);
		system("cls");
		printf("��ϲ�㣬���׳ɹ�\n");
		showformine(mine);
	}
}