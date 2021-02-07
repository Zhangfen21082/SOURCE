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

void print(Heap* heap,int n);//��ӡ
void HeapInit(Heap* php, DataType* a, int n);//��ʼ��
void HeapDestroy(Heap* php);//����
void AdjustDown(Heap* php, int n,int root);//���µ�����ǰ��������������С��
void AdjustUp(Heap* php,int child);//���ϵ��������ڲ���ʱ
void HeapCreat(Heap* php, int n);//������
void HeapPush(Heap* php, DataType x);//����Ԫ��
void HeapPop(Heap* php);//ɾ��Ԫ�أ�ɾ��ͷ
void HeapSort(Heap* php);//������
DataType HeapTop(Heap* php);

