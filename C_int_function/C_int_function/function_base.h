#pragma once
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <assert.h>

//���������ӡ����
void int_print(int* parr, int size);
// ��ʼ�� �������� Ϊȫ0
void intarr_init(int* parr, int size);
//�������� ������
void int_reverse(int* parr, int size);
//ɾ�����������е��ظ���,�������´�С
int remove_commondate(int* parr, int size);
//int�������ݺ���
void int_bob(int* parr, int size);