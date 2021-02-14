#pragma once
#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#include <string.h>
#include <time.h>


void print(int* a, int n);//打印

void InsertSort(int* a,int n);//简单插入排序
void ShellSort(int* a, int n);//希尔排序
void SelectSort(int* a, int n);//直接选择排序
void BubbleSort(int* a, int n);//冒泡排序
//int PartSort(int* a, int begin,int end);//快速排序的一趟排序
void QuickSort(int* a, int left, int right);//快速排序

void QuciksortNonRecursion(int* a, int left, int right);//快速排序非递归


void MergeSort(int* a, int n);//归并排序主函数

void MergeSortNoneRecursion(int* a, int n);//归并排序非递归