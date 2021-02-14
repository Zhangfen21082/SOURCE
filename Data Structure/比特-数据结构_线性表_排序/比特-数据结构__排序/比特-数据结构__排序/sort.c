#include "sort.h"
#include "C:\Users\zhangxing\Desktop\SOURCE\Data Structure\比特-数据结构_线性表_栈和队列\比特-数据结构_线性表_栈\比特-数据结构_栈和队列_栈\stack.h"

//////////////////////////////辅助函数///////////////////////////////////////////
void print(int* a, int n)
{
	int i = 0;
	for (i = 0; i < n; i++)
	{
		printf("%d ", a[i]);
	}

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


/////////////////////////排序代码////////////////////////////////////////////

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
	//if (left < right)
	//{
	//	int div = PartSort(a, left, right);//排序划分区间
	//	

	///*	printf("【");//测试输出
	//	print_fast(a, left, div);
	//	printf("】");

	//	printf("%d", a[div]);

	//	printf("【");
	//	print_fast(a, div+1, right+1);
	//	printf("】");

	//	printf("\n");
	//	printf("\n");*/

	//	QuickSort(a, left, div - 1);
	//	QuickSort(a, div + 1, right);
	//}
	//else
	//{
	//	return;
	//}
	if (left>=right)
		return;
	if ((right - left + 1) > 10)
	{
		int div = PartSort(a, left, right);
		QuickSort(a, left, div - 1);
		QuickSort(a, div+1, right);
	}
	else//区间长度太小直接使用直接插入排序
	{
		InsertSort(a + left, right - left + 1);
	}




}
void QuciksortNonRecursion(int* a, int left, int right)
{
	Stack st;
	StackInit(&st);//栈的创建与初始化

	StackPush(&st, right);//先入右，后出左
	StackPush(&st, left);

	while (st._top!=-1)//如果栈不空，出栈
	{
		int begin = StackPop(&st);//先出左
		int end = StackPop(&st);//再出右

		int div = PartSort(a, begin, end);

		if (div + 1 < end)//元素为1个再不入栈
		{
			StackPush(&st, end);
			StackPush(&st, div + 1);
		}
		if (begin + 1 < div)//元素为1个再不入栈
		{
			StackPush(&st, div - 1);
			StackPush(&st, begin);
		}
	}
}





void MergeSort_part(int* a, int left, int right,int* temp)//归并排序子函数
{
	/*
		int* a：数组
		left：区间左端
		right:区间右端
		int* temp：临时空间，用于合并
	*/

	if (left >= right)
		return;//此时区间只有一个元素了，有序了

	////////////////////////////划分//////////////////////////////
	int mid = (left + right) / 2;
	/*分为[left,mid]和[mid+1,left]这两个区间，
	划分一两下肯定子序列还是无序(管它有序无序，反正划分到一个元素肯定是有序的)，继续递归
	进行划分
	*/
	MergeSort_part(a, left, mid, temp);
	MergeSort_part(a, mid+1, right, temp);

	///////////////////////////归并///////////////////////////////////

	/*进行归并（注意前面的判断）
	到这里的话，说明区间已经有序了，两个区间分别为[left,mid]和[mid+1,right]，分别用
	begin1和end1操纵[left，mid]，用begin2和end2操纵[mid+1,right]，最红把这两个区间的元素
	有序归并到[left,right]，所以还需要一个变量index进行移动
	*/
	int begin1 = left, end1 = mid;
	int begin2 = mid + 1, end2 = right;
	int index = left;
	while (begin1 <= end1 && begin2 <= end2)
	{
		if (a[begin1] < a[begin2])//谁小谁先进
		{
			temp[index] = a[begin1];//注意在临时空间里面归并，不要在原数组上操作
			index++;
			begin1++;
		}
		else
		{
			temp[index] = a[begin2];
			index++;
			begin2++;
		}
	}
	while (begin1 <= end1)//[left,mid]区间没有归并完，那么把剩余元素继续归并
		temp[index++] = a[begin1++];
	while (begin2<=end2)//[mid+1, right]区间没有归并完，那么把剩余元素继续归并
		temp[index++] = a[begin2++];

	/////////////////////////////拷贝到原来位置///////////////////////////////
	/*
		上述操作归并到了temp这个临时空间，接下来就要按位置拷贝回去
	*/
	for (int i = left;i <= right;i++)
	{
		a[i] = temp[i];
	}


}

void MergeSort(int* a, int n)//归并排序主函数
{
	int* temp = malloc(sizeof(int)*n);
	MergeSort_part(a, 0, n - 1, temp);



	free(temp);


}


void MergeSortNoneRecursion(int* a, int n)
{
	int* temp = malloc(sizeof(int)*n);//临时空间
	int gap = 1;//间距，每进入一次循环，gap*=2，gap=gap*2
	int index = 0;//
	int begin1 = 0, begin2 = 0;
	int end1 = 0, end2 = 0;

	while (gap < n)
	{
		index = 0;
		for (int i = 0; i < n; i += 2 * gap)
		{
			int begin1 = i, end1 = i + gap - 1;
			int begin2 = i + gap, end2 = i + 2 * gap - 1;
			//1：合并时第二组没有数据，那么这次就不合并了
			if (begin2 >= n)
			{
				break;
			}
			//2：合并时第二组只有部分数据，需要修正边界
			if (end2 >= n)
			{
				end2 = n-1 ;
			}
			while (begin1 <= end1 && begin2 <= end2)
			{
				if (a[begin1] < a[begin2])//谁小谁先进
				{
					temp[index] = a[begin1];//注意在临时空间里面归并，不要在原数组上操作
					index++;
					begin1++;
				}
				else
				{
					temp[index] = a[begin2];
					index++;
					begin2++;
				}
			}
			while (begin1 <= end1)//[left,mid]区间没有归并完，那么把剩余元素继续归并
				temp[index++] = a[begin1++];
			while (begin2 <= end2)//[mid+1, right]区间没有归并完，那么把剩余元素继续归并
				temp[index++] = a[begin2++];

			for (int j = i; j <=i+2*gap-1; j++)
			{
				a[j] = temp[j];
			}

		}
			
		printf("\n");
		gap *= 2;
	}
}



