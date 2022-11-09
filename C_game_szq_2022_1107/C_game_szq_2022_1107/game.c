#define _CRT_SECURE_NO_WARNINGS 1
#include "game.h"
void ui()
{
	printf("######################\n");
	printf("#####           ######\n");
	printf("#####  1.play   ######\n");
	printf("#####  0.exit   ######\n");
	printf("#####           ######\n");
	printf("######################\n");

}
void my_sys()
{
	Sleep(1000);
	system("cls");
}
void init_qipan(char(*p)[L])
{
	for (int i = 0; i < H; i++)
	{
		for (int j = 0; j < L; j++)
		{
			p[i][j] = ' ';
		}
	}
}
void print_qipan(char(*p)[L])
{
	for (int i = 0; i < H; i++)
	{
		for (int j = 0; j < L; j++)
		{
			printf(" %c ", p[i][j]);
			if (j < L - 1)
			{
				printf("|");
			}
		}
		printf("\n");
		if (i < H - 1)
		{
			for (int c = 0; c < L; c++)
			{
				printf("----");
			}
		}
		printf("\n");
	}
}
void player(char(*p)[L])
{
	int flag = 1;
	while (flag)
	{
		printf("玩家下祺：");
		int h = 0;
		int l = 0;
		scanf("%d %d", &h, &l);
		h = h - 1;
		l = l - 1;
		if (h > H - 1 || l > L - 1 || h < 0 || l < 0)
		{
			printf("超出棋盘范围！请重新下棋！\n");
			continue;
		}
		flag = is_empty(p, h, l);
		if (flag == 0)
		{
			//下棋
			p[h][l] = 'k';

			printf("\n下棋成功！\n");
		}
		else
			printf("\n该位置被占用，请重新下棋！\n");
	}

}
void computer(char(*p)[L])
{
	int flag = 1;
	while (flag)
	{
		int h = 0;
		int l = 0;
		h = rand() % H;
		l = rand() % L;
		flag = is_empty(p, h, l);
		if (flag == 0)
		{
			p[h][l] = 'c';
			printf("电脑下棋中");
		}
	}

}
int is_full(char(*p)[L])
{
	int flag = 0;//有空时，返回0		无空时，返回1
	for (int i = 0; i < H; i++)
	{
		for (int j = 0; j < L; j++)
		{
			if (p[i][j] == ' ')
				return flag;
		}
	}
	flag = 1;
	return flag;
}
int is_empty(char(*p)[L], int h, int l)
{
	//有空时，返回0		无空时，返回1
	if (p[h][l] == ' ')
	{
		return 0;
	}
	else
	{
		return 1;
	}
}
char judge(char(*p)[L])
{
	//k玩家赢  c电脑赢  p平局 j继续
	//同行同列判断
	for (int i = 0; i < H; i++)
	{
		//同行判断 想法:将i作为行变量，j作为列变量
		int h_play_count = 0;
		int h_cp_count = 0;
		//同列判断 想法:将i作为列变量，j作为行变量
		int l_play_count = 0;
		int l_cp_count = 0;
		for (int j = 0; j < L; j++)
		{

			if ((p[i][0] == 'k') && (p[i][0] == p[i][j]))
			{
				h_play_count++;
			}
			if ((p[i][0] == 'c') && (p[i][0] == p[i][j]))
			{
				h_cp_count++;
			}
			//判断同行中是否出现胜负
			if (h_play_count == H)
			{
				return 'k';
			}
			else if (h_cp_count == H)
			{
				return 'c';
			}

			if ((p[0][i] == 'k') && (p[0][i] == p[j][i]))
			{
				l_play_count++;
			}
			if ((p[0][i] == 'c') && (p[0][i] == p[j][i]))
			{
				l_cp_count++;
			}
			//判断同列中是否出现胜负
			if (l_play_count == L)
			{
				return 'k';
			}
			else if (l_cp_count == L)
			{
				return 'c';
			}
		}

	}
	//对角线判断
	//d1为正对角线  d2为副对角线
	int d1_play_count = 0;
	int d2_play_count = 0;

	int d1_cp_count = 0;
	int d2_cp_count = 0;
	for (int i = 0; i < H; i++)
	{

		if ((p[0][0] == 'k') && (p[0][0] == p[i][i]))
		{
			d1_play_count++;
		}
		else if ((p[0][L - 1] == 'k') && (p[0][L - 1] == p[i][L - 1 - i]))
		{
			d2_play_count++;
		}

		if ((p[0][0] == 'c') && (p[i][0] == p[i][i]))
		{
			d1_cp_count++;
		}
		else if ((p[0][L - 1] == 'c') && (p[0][L - 1] == p[i][L - 1 - i]))
		{
			d2_cp_count++;
		}
		if (d1_play_count == H || d2_play_count == H)
		{
			return 'k';
		}
		else if (d1_cp_count == H || d2_cp_count == H)
		{
			return 'c';
		}
	}
	//玩家和电脑都没赢的情况
	if (is_full(p) == 1)
	{
		return 'p';
	}
	else
	{
		return 'j';
	}
}
void game()
{
	//初始化和打印
	char arr[H][L];
	init_qipan(arr);
	print_qipan(arr);
	srand((unsigned)time(NULL));

	while (1)
	{
		//玩家游玩
		player(arr);
		my_sys();
		print_qipan(arr);
		char jd = judge(arr);
		if (jd == 'k')
		{
			printf("玩家胜利！\n");
			break;
		}
		else if (jd == 'p')
		{
			printf("平局！\n");
			break;
		}
		//电脑游玩
		computer(arr);
		my_sys();
		print_qipan(arr);
		jd = judge(arr);
		if (jd == 'c')
		{
			printf("电脑胜利！\n");
			break;
		}
		else if (jd == 'p')
		{
			printf("平局！\n");
			break;
		}
	}
}