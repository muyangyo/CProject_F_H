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
		printf("���������");
		int h = 0;
		int l = 0;
		scanf("%d %d", &h, &l);
		h = h - 1;
		l = l - 1;
		if (h > H - 1 || l > L - 1 || h < 0 || l < 0)
		{
			printf("�������̷�Χ�����������壡\n");
			continue;
		}
		flag = is_empty(p, h, l);
		if (flag == 0)
		{
			//����
			p[h][l] = 'k';

			printf("\n����ɹ���\n");
		}
		else
			printf("\n��λ�ñ�ռ�ã����������壡\n");
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
			printf("����������");
		}
	}

}
int is_full(char(*p)[L])
{
	int flag = 0;//�п�ʱ������0		�޿�ʱ������1
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
	//�п�ʱ������0		�޿�ʱ������1
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
	//k���Ӯ  c����Ӯ  pƽ�� j����
	//ͬ��ͬ���ж�
	for (int i = 0; i < H; i++)
	{
		//ͬ���ж� �뷨:��i��Ϊ�б�����j��Ϊ�б���
		int h_play_count = 0;
		int h_cp_count = 0;
		//ͬ���ж� �뷨:��i��Ϊ�б�����j��Ϊ�б���
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
			//�ж�ͬ�����Ƿ����ʤ��
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
			//�ж�ͬ�����Ƿ����ʤ��
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
	//�Խ����ж�
	//d1Ϊ���Խ���  d2Ϊ���Խ���
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
	//��Һ͵��Զ�ûӮ�����
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
	//��ʼ���ʹ�ӡ
	char arr[H][L];
	init_qipan(arr);
	print_qipan(arr);
	srand((unsigned)time(NULL));

	while (1)
	{
		//�������
		player(arr);
		my_sys();
		print_qipan(arr);
		char jd = judge(arr);
		if (jd == 'k')
		{
			printf("���ʤ����\n");
			break;
		}
		else if (jd == 'p')
		{
			printf("ƽ�֣�\n");
			break;
		}
		//��������
		computer(arr);
		my_sys();
		print_qipan(arr);
		jd = judge(arr);
		if (jd == 'c')
		{
			printf("����ʤ����\n");
			break;
		}
		else if (jd == 'p')
		{
			printf("ƽ�֣�\n");
			break;
		}
	}
}