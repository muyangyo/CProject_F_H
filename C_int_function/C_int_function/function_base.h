#pragma once
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <assert.h>

//整形数组打印函数
void int_print(int* parr, int size);
// 初始化 整形数组 为全0
void intarr_init(int* parr, int size);
//整形数组 的逆置
void int_reverse(int* parr, int size);
//删除有序数组中的重复项,并返回新大小
int remove_commondate(int* parr, int size);
//int整形泡泡函数
void int_bob(int* parr, int size);