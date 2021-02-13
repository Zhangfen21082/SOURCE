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
void print_fast(int* a, int ll,int rr)
{
	int i = 0;
	for (i = ll; i <rr; i++)
	{
		printf("%d ", a[i]);
	}

}

int GetMidNumber(int* a, int begin, int end)//����ȡ�з�
{
	int mid = (begin + end) / 2;
	if (a[begin] < a[mid])//begin<mid
	{
		if (a[mid] < a[end])//left>mid<end
			return mid;
		else if (a[begin] > a[end])
			return begin;//end>begin>mid
		else
			return end;//begin>end>mid
	}
	else//begin>mid
	{
		if (a[mid] > a[end])
			return mid;
		else if (a[begin] < a[end])
			return begin;
		else
			return end;
	}

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

void BubbleSort(int* a, int n)
{
	int end = n;//end����ָʾ�������е����һλ
	while (end > 0)
	{
		int flag = 0;//flag�Ǳ�ʶ���ģ����һ�ζ�û�н���ѭ����ֱ������
		for (int i = 1; i < end; ++i)//���ˣ�
		{
			if (a[i - 1] > a[i])
			{
				swap(&a[i - 1], &a[i]);
				flag = 1;
			}
		}
		if (flag == 0)
			break;
	}


}

int PartSort(int* a, int begin,int end)//���������һ����
{
	int mid_number = GetMidNumber(a, begin, end);//ȡ���м�Ԫ��
	swap(&a[begin], &a[mid_number]);//���м�Ԫ�ؽ��������Ԫ��

	int key = a[begin];//�����Ԫ����Ϊ��׼Ԫ��
	int first = begin;
	while (begin < end)
	{
		while (begin<end && a[end] >= key)//����end�ߣ�ץ��СԪ��
		{
			--end;
		}
		while (begin<end && a[begin] <= key)//ץ����Ԫ��
		{
			++begin;
		}
		swap(&a[begin], &a[end]);//��Ԫ�غ�СԪ���뽻��
	}
	swap(&a[first], &a[end]);//���һ�̣�����׼Ԫ�ع�λ
	return begin;
}
void QuickSort(int* a, int left, int right)
{
	if (left < right)
	{
		int div = PartSort(a, left, right);//���򻮷�����
		

	/*	printf("��");//�������
		print_fast(a, left, div);
		printf("��");

		printf("%d", a[div]);

		printf("��");
		print_fast(a, div+1, right+1);
		printf("��");

		printf("\n");
		printf("\n");*/

		QuickSort(a, left, div - 1);
		QuickSort(a, div + 1, right);
	}
	else
	{
		return;
	}


}