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
	int parent = root;//待交换父节点
	int child = parent * 2 + 1;//默认认为左孩子小
	while (child<n)//一旦child>n，parent就到了最后一层，调整完成
	{
		if (child+1<n && php->_arr[child + 1] > php->_arr[child])
			++child;//如果右孩子比较小，就让右孩子与父节点交换
		if (php->_arr[child] > php->_arr[parent])//如果孩子小，孩子与父亲交换
		{
			swap(&php->_arr[child], &php->_arr[parent]);
			parent = child;//交换完，同时向下移动，
			child = child * 2 + 1;
		}
		else//如果不小于，就跳出，否则会一直陷入循环
		{
			break;
		}
	}
}
void AdjustUp(Heap* php, int child)//向上调整，用于插入
{
	int parent = (child - 1) / 2;//求出这个孩子的父亲
	//while (parent>=0)//这样写是错误的，因为parent永远都不会小于0
	while(child>0)//当child>0时，早该结束了
	{
		if (php->_arr[child] > php->_arr[parent])
		{
			swap(&php->_arr[child], &php->_arr[parent]);//调整大顶堆时，如果孩子大于父亲，就进行交换
			child = parent;
			parent = (child - 1) / 2;//与向下调整类似，只不过是向上跌打
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

	//：从最后一个非叶结点开始，对每个结点进行向下调整
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
	for (i = n / 2 - 1; i >= 0; --i)//从最后一个非叶结点开始，对每个结点进行向下调整
	{
		AdjustDown(php, n, i);
	}

}
void HeapSort(Heap* php)
{
	assert(php);
	for (int i = php->_capacity-1; i > 0; --i)//拿出最后一个结点放到根节点位置，然后再进行调整
	{
		swap(&php->_arr[0], &php->_arr[i]);
		AdjustDown(php, i, 0);
		print(php, php->_capacity);
	}
	
}

void HeapPush(Heap* php, DataType x)//插入元素时，只会影响一部分，所以仅对那一部分进行向上调整（）类似于并查集
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
	AdjustUp(php, php->_length-1);//调用向上调整算法
	

}
void HeapPop(Heap* php)
{
	assert(php);
	assert(php->_length > 0);
	php->_arr[0] = php->_arr[php->_length-1];
	php->_length--;
	AdjustDown(php, php->_length, 0);
}