#pragma once
#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#include <string.h>

typedef int DataType;

typedef struct Heap
{
	DataType* _arr;
	int _length;
	int _capacity;
}Heap;

void print(Heap* heap,int n);//打印
void HeapInit(Heap* php, DataType* a, int n);//初始化
void HeapDestroy(Heap* php);//销毁
void AdjustDown(Heap* php, int n,int root);//向下调整：前提左右子树都是小堆
void AdjustUp(Heap* php,int child);//向上调整，用于插入时
void HeapCreat(Heap* php, int n);//建立堆
void HeapPush(Heap* php, DataType x);//插入元素
void HeapPop(Heap* php);//删除元素，删除头
void HeapSort(Heap* php);//堆排序
DataType HeapTop(Heap* php);

