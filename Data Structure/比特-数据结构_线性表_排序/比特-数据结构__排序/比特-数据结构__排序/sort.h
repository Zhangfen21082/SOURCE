#pragma once
#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#include <string.h>
#include <time.h>


void print(int* a, int n);//��ӡ

void InsertSort(int* a,int n);//�򵥲�������
void ShellSort(int* a, int n);//ϣ������
void SelectSort(int* a, int n);//ֱ��ѡ������
void BubbleSort(int* a, int n);//ð������
//int PartSort(int* a, int begin,int end);//���������һ������
void QuickSort(int* a, int left, int right);//��������

void QuciksortNonRecursion(int* a, int left, int right);//��������ǵݹ�


void MergeSort(int* a, int n);//�鲢����������

void MergeSortNoneRecursion(int* a, int n);//�鲢����ǵݹ�