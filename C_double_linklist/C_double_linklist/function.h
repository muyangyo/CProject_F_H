#pragma once
#include <stdio.h>
#include <stdlib.h>
#include <assert.h>

typedef struct doublelinklist
{
	struct doublelinklist* prev;
	int data;
	struct doublelinklist* next;
}dlk;
//初始化函数
dlk* doublelk_init();

//找位置函数
dlk* findsubscript(dlk* phead, int x);

//空间申请函数
dlk* spacecreate(int x);

//打印函数
void print(dlk* phead);

//pos位置删除函数
void posdelete(dlk* pos);

//在pos位置之前添加函数
void posadd(dlk* pos, int x);

//尾删
void taildelete(dlk* phead);

//尾加
void tailadd(dlk* phead, int x);

//结束
void destroylist(dlk* phead);