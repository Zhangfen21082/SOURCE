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

int GetMidNumber(int* a, int begin, int end)//三数取中法
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

void BubbleSort(int* a, int n)
{
	int end = n;//end用于指示无序序列的最后一位
	while (end > 0)
	{
		int flag = 0;//flag是标识旗帜，如果一次都没有进行循环，直接跳出
		for (int i = 1; i < end; ++i)//单趟，
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

int PartSort(int* a, int begin,int end)//快速排序的一部分
{
	int mid_number = GetMidNumber(a, begin, end);//取到中间元素
	swap(&a[begin], &a[mid_number]);//把中间元素交换到左侧元素

	int key = a[begin];//以左侧元素作为基准元素
	int first = begin;
	while (begin < end)
	{
		while (begin<end && a[end] >= key)//先让end走，抓出小元素
		{
			--end;
		}
		while (begin<end && a[begin] <= key)//抓出大元素
		{
			++begin;
		}
		swap(&a[begin], &a[end]);//大元素和小元素想交换
	}
	swap(&a[first], &a[end]);//最后一刻，将基准元素归位
	return begin;
}
void QuickSort(int* a, int left, int right)
{
	if (left < right)
	{
		int div = PartSort(a, left, right);//排序划分区间
		

	/*	printf("【");//测试输出
		print_fast(a, left, div);
		printf("】");

		printf("%d", a[div]);

		printf("【");
		print_fast(a, div+1, right+1);
		printf("】");

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