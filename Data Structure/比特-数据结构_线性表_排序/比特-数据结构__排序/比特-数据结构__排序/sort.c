#include "sort.h"
#include "C:\Users\zhangxing\Desktop\SOURCE\Data Structure\����-���ݽṹ_���Ա�_ջ�Ͷ���\����-���ݽṹ_���Ա�_ջ\����-���ݽṹ_ջ�Ͷ���_ջ\stack.h"

//////////////////////////////��������///////////////////////////////////////////
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


/////////////////////////�������////////////////////////////////////////////

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
	//if (left < right)
	//{
	//	int div = PartSort(a, left, right);//���򻮷�����
	//	

	///*	printf("��");//�������
	//	print_fast(a, left, div);
	//	printf("��");

	//	printf("%d", a[div]);

	//	printf("��");
	//	print_fast(a, div+1, right+1);
	//	printf("��");

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
	else//���䳤��̫Сֱ��ʹ��ֱ�Ӳ�������
	{
		InsertSort(a + left, right - left + 1);
	}




}
void QuciksortNonRecursion(int* a, int left, int right)
{
	Stack st;
	StackInit(&st);//ջ�Ĵ������ʼ��

	StackPush(&st, right);//�����ң������
	StackPush(&st, left);

	while (st._top!=-1)//���ջ���գ���ջ
	{
		int begin = StackPop(&st);//�ȳ���
		int end = StackPop(&st);//�ٳ���

		int div = PartSort(a, begin, end);

		if (div + 1 < end)//Ԫ��Ϊ1���ٲ���ջ
		{
			StackPush(&st, end);
			StackPush(&st, div + 1);
		}
		if (begin + 1 < div)//Ԫ��Ϊ1���ٲ���ջ
		{
			StackPush(&st, div - 1);
			StackPush(&st, begin);
		}
	}
}





void MergeSort_part(int* a, int left, int right,int* temp)//�鲢�����Ӻ���
{
	/*
		int* a������
		left���������
		right:�����Ҷ�
		int* temp����ʱ�ռ䣬���ںϲ�
	*/

	if (left >= right)
		return;//��ʱ����ֻ��һ��Ԫ���ˣ�������

	////////////////////////////����//////////////////////////////
	int mid = (left + right) / 2;
	/*��Ϊ[left,mid]��[mid+1,left]���������䣬
	����һ���¿϶������л�������(�����������򣬷������ֵ�һ��Ԫ�ؿ϶��������)�������ݹ�
	���л���
	*/
	MergeSort_part(a, left, mid, temp);
	MergeSort_part(a, mid+1, right, temp);

	///////////////////////////�鲢///////////////////////////////////

	/*���й鲢��ע��ǰ����жϣ�
	������Ļ���˵�������Ѿ������ˣ���������ֱ�Ϊ[left,mid]��[mid+1,right]���ֱ���
	begin1��end1����[left��mid]����begin2��end2����[mid+1,right]�����������������Ԫ��
	����鲢��[left,right]�����Ի���Ҫһ������index�����ƶ�
	*/
	int begin1 = left, end1 = mid;
	int begin2 = mid + 1, end2 = right;
	int index = left;
	while (begin1 <= end1 && begin2 <= end2)
	{
		if (a[begin1] < a[begin2])//˭С˭�Ƚ�
		{
			temp[index] = a[begin1];//ע������ʱ�ռ�����鲢����Ҫ��ԭ�����ϲ���
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
	while (begin1 <= end1)//[left,mid]����û�й鲢�꣬��ô��ʣ��Ԫ�ؼ����鲢
		temp[index++] = a[begin1++];
	while (begin2<=end2)//[mid+1, right]����û�й鲢�꣬��ô��ʣ��Ԫ�ؼ����鲢
		temp[index++] = a[begin2++];

	/////////////////////////////������ԭ��λ��///////////////////////////////
	/*
		���������鲢����temp�����ʱ�ռ䣬��������Ҫ��λ�ÿ�����ȥ
	*/
	for (int i = left;i <= right;i++)
	{
		a[i] = temp[i];
	}


}

void MergeSort(int* a, int n)//�鲢����������
{
	int* temp = malloc(sizeof(int)*n);
	MergeSort_part(a, 0, n - 1, temp);



	free(temp);


}


void MergeSortNoneRecursion(int* a, int n)
{
	int* temp = malloc(sizeof(int)*n);//��ʱ�ռ�
	int gap = 1;//��࣬ÿ����һ��ѭ����gap*=2��gap=gap*2
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
			//1���ϲ�ʱ�ڶ���û�����ݣ���ô��ξͲ��ϲ���
			if (begin2 >= n)
			{
				break;
			}
			//2���ϲ�ʱ�ڶ���ֻ�в������ݣ���Ҫ�����߽�
			if (end2 >= n)
			{
				end2 = n-1 ;
			}
			while (begin1 <= end1 && begin2 <= end2)
			{
				if (a[begin1] < a[begin2])//˭С˭�Ƚ�
				{
					temp[index] = a[begin1];//ע������ʱ�ռ�����鲢����Ҫ��ԭ�����ϲ���
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
			while (begin1 <= end1)//[left,mid]����û�й鲢�꣬��ô��ʣ��Ԫ�ؼ����鲢
				temp[index++] = a[begin1++];
			while (begin2 <= end2)//[mid+1, right]����û�й鲢�꣬��ô��ʣ��Ԫ�ؼ����鲢
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



