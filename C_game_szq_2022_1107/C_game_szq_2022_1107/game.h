#pragma once
#include <stdio.h>
#include <stdlib.h>
#include <Windows.h>
#include <time.h>
#define H 3
#define L 3

//����
void my_sys();

//�������躯��
void ui();
void game();
void init_qipan(char(*p)[L]);
void print_qipan(char(*p)[L]);
void player(char(*p)[L]);
void computer(char(*p)[L]);
//�жϺ���
int is_full(char(*p)[L]);//�п�ʱ������0		�޿�ʱ������1
int is_empty(char(*p)[L], int h, int l);//�п�ʱ������0		�޿�ʱ������1
char judge(char(*p)[L]);