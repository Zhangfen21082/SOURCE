#include "sort.h"


void print(int* a, int n)
{
	int i = 0;
	for (i = 0; i < n; i++)
	{
		printf("%d ", a[i]);
	}
	printf("\n");

}
void swap(int* a, int * b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}


void InsertSort(int* a,int n)
{
	int end=0;//有序序列中的最后一个元素
	int temp = a[end + 1];//无序序列中的第一个元素
	for (int i = 0; i < n - 1; i++)
	{
		end = i;
		temp = a[end + 1];
		while (end >= 0)//如果end<0，表示此无序相对于有序最小，那么应该在a[0]位置
		{
			if (temp < a[end])//如果小于有序元素，就继续向前比，为了插入，同时向后移动有序元素
			{
				a[end + 1] = a[end];
				--end;
			}
			else//一旦跳出循环，表明此时应该插入到end的元素的后面，也即a[end+1]的位置
			{
				break;
			}
		}
		a[end + 1] = temp;//插入元素
		print(a, n);
	}
}

void ShellSort(int* a, int n)
{
	int gap=n;//本趟希尔排序的gap
	while (gap > 1)//控制趟数
	{
		gap = gap / 3 + 1;
		for (int i = 0; i < n - gap; ++i)//用于多趟并排
		{
			int end = i;//每进入依次for循环，就相当于排下一次，依次循环
			int temp = a[end + gap];
			while (end >= 0)//这一部分是简单插入排序
			{
				if (temp < a[end])
				{
					a[end + gap] = a[end];
					end = end - gap;
				}
				else
				{
					break;
				}
			}
			a[end + gap] = temp;
		}
	}
}

void SelectSort(int* a, int n)
{
	int begin = 0;//用于指向无序序列第一个元素
	while (begin < n)//begin最大取到最后一个元素，此时无序序序列只剩一个元素
	{
		int min;//用于保存，无序序列当中最小的元素
		min = begin;
		for (int i = begin + 1; i < n; i++)//从begin后一位开始，寻找最小元素
		{
			if (a[i] < a[min])
				min = i;//min保存的是最小元素下标
		}
		swap(&a[min], &a[begin]);//交换
		begin++;//后移
		print(a, n);
	}

}
