#pragma once
#include "heap.h"


void print(Heap* heap,int n)
{
	assert(heap);
	for (int i = 0; i <n; i++)
	{
		printf("%d ", heap->_arr[i]);
	}
	printf("\n");
}
void swap(DataType* p1, DataType *p2)
{
	DataType temp = *p2;
	*p2 = *p1;
	*p1 = temp;
	
}



void AdjustDown(Heap* php, int n, int root)
{
	int parent = root;//���������ڵ�
	int child = parent * 2 + 1;//Ĭ����Ϊ����С
	while (child<n)//һ��child>n��parent�͵������һ�㣬�������
	{
		if (child+1<n && php->_arr[child + 1] > php->_arr[child])
			++child;//����Һ��ӱȽ�С�������Һ����븸�ڵ㽻��
		if (php->_arr[child] > php->_arr[parent])//�������С�������븸�׽���
		{
			swap(&php->_arr[child], &php->_arr[parent]);
			parent = child;//�����꣬ͬʱ�����ƶ���
			child = child * 2 + 1;
		}
		else//�����С�ڣ��������������һֱ����ѭ��
		{
			break;
		}
	}
}
void AdjustUp(Heap* php, int child)//���ϵ��������ڲ���
{
	int parent = (child - 1) / 2;//���������ӵĸ���
	//while (parent>=0)//����д�Ǵ���ģ���Ϊparent��Զ������С��0
	while(child>0)//��child>0ʱ����ý�����
	{
		if (php->_arr[child] > php->_arr[parent])
		{
			swap(&php->_arr[child], &php->_arr[parent]);//�����󶥶�ʱ��������Ӵ��ڸ��ף��ͽ��н���
			child = parent;
			parent = (child - 1) / 2;//�����µ������ƣ�ֻ���������ϵ���
		}
		else
		{
			break;
		}
	}
}
void HeapInit(Heap* php, DataType* a, int n)
{
	assert(php);
	php->_arr = (DataType*)malloc(sizeof(DataType)*n);
	memcpy(php->_arr, a, sizeof(DataType)*n);
	php->_length = n;
	php->_capacity =php->_length= n;

	//�������һ����Ҷ��㿪ʼ����ÿ�����������µ���
}
void HeapDestroy(Heap* php)
{
	assert(php);
	free(php->_arr);
	php->_capacity = 0;

}
void HeapCreat(Heap* php, int n)
{
	assert(php);
	int i = 0;
	for (i = n / 2 - 1; i >= 0; --i)//�����һ����Ҷ��㿪ʼ����ÿ�����������µ���
	{
		AdjustDown(php, n, i);
	}

}
void HeapSort(Heap* php)
{
	assert(php);
	for (int i = php->_capacity-1; i > 0; --i)//�ó����һ�����ŵ����ڵ�λ�ã�Ȼ���ٽ��е���
	{
		swap(&php->_arr[0], &php->_arr[i]);
		AdjustDown(php, i, 0);
		print(php, php->_capacity);
	}
	
}

void HeapPush(Heap* php, DataType x)//����Ԫ��ʱ��ֻ��Ӱ��һ���֣����Խ�����һ���ֽ������ϵ������������ڲ��鼯
{
	assert(php);
	if (php->_length == php->_capacity)
	{
		php->_capacity *= 2;
		DataType* temp = (DataType*)realloc(php->_arr,(sizeof(DataType))*(php->_capacity));
		php->_arr = temp;
	}
	php->_arr[php->_length] = x;
	php->_length++;
	AdjustUp(php, php->_length-1);//�������ϵ����㷨
	

}
void HeapPop(Heap* php)
{
	assert(php);
	assert(php->_length > 0);
	php->_arr[0] = php->_arr[php->_length-1];
	php->_length--;
	AdjustDown(php, php->_length, 0);
}