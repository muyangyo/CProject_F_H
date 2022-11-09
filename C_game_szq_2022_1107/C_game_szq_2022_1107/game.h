#pragma once
#include <stdio.h>
#include <stdlib.h>
#include <Windows.h>
#include <time.h>
#define H 3
#define L 3

//美化
void my_sys();

//程序所需函数
void ui();
void game();
void init_qipan(char(*p)[L]);
void print_qipan(char(*p)[L]);
void player(char(*p)[L]);
void computer(char(*p)[L]);
//判断函数
int is_full(char(*p)[L]);//有空时，返回0		无空时，返回1
int is_empty(char(*p)[L], int h, int l);//有空时，返回0		无空时，返回1
char judge(char(*p)[L]);