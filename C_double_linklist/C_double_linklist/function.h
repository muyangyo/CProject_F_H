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
//��ʼ������
dlk* doublelk_init();

//��λ�ú���
dlk* findsubscript(dlk* phead, int x);

//�ռ����뺯��
dlk* spacecreate(int x);

//��ӡ����
void print(dlk* phead);

//posλ��ɾ������
void posdelete(dlk* pos);

//��posλ��֮ǰ��Ӻ���
void posadd(dlk* pos, int x);

//βɾ
void taildelete(dlk* phead);

//β��
void tailadd(dlk* phead, int x);

//����
void destroylist(dlk* phead);