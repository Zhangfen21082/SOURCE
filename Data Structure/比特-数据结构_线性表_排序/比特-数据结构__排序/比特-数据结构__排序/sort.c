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
	int end=0;//���������е����һ��Ԫ��
	int temp = a[end + 1];//���������еĵ�һ��Ԫ��
	for (int i = 0; i < n - 1; i++)
	{
		end = i;
		temp = a[end + 1];
		while (end >= 0)//���end<0����ʾ�����������������С����ôӦ����a[0]λ��
		{
			if (temp < a[end])//���С������Ԫ�أ��ͼ�����ǰ�ȣ�Ϊ�˲��룬ͬʱ����ƶ�����Ԫ��
			{
				a[end + 1] = a[end];
				--end;
			}
			else//һ������ѭ����������ʱӦ�ò��뵽end��Ԫ�صĺ��棬Ҳ��a[end+1]��λ��
			{
				break;
			}
		}
		a[end + 1] = temp;//����Ԫ��
		print(a, n);
	}
}

void ShellSort(int* a, int n)
{
	int gap=n;//����ϣ�������gap
	while (gap > 1)//��������
	{
		gap = gap / 3 + 1;
		for (int i = 0; i < n - gap; ++i)//���ڶ��˲���
		{
			int end = i;//ÿ��������forѭ�������൱������һ�Σ�����ѭ��
			int temp = a[end + gap];
			while (end >= 0)//��һ�����Ǽ򵥲�������
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
	int begin = 0;//����ָ���������е�һ��Ԫ��
	while (begin < n)//begin���ȡ�����һ��Ԫ�أ���ʱ����������ֻʣһ��Ԫ��
	{
		int min;//���ڱ��棬�������е�����С��Ԫ��
		min = begin;
		for (int i = begin + 1; i < n; i++)//��begin��һλ��ʼ��Ѱ����СԪ��
		{
			if (a[i] < a[min])
				min = i;//min���������СԪ���±�
		}
		swap(&a[min], &a[begin]);//����
		begin++;//����
		print(a, n);
	}

}
