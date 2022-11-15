#pragma once
#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include <Windows.h>

#define ROW 9
#define COL 9

#define R_ROW ROW+2
#define R_COL COL+2

#define EASY_COUNT 79

void UI();
void game();
void FindMine(char mine[R_ROW][R_COL], char pan[R_ROW][R_COL]);
int get_mine_count(char(*p)[R_COL], int x, int y);
void Init(char(*p)[R_COL], char set);
void show(char(*p)[R_COL]);
void SetMine(char(*p)[R_COL]);
void showformine(char(*p)[R_COL]);

