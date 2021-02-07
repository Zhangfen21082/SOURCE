#pragma once
#include "heap.h"

void test()
{
	int a[] = { 27,15,19,18,28,34,65,49,25,37 };
	Heap heap;
	HeapInit(&heap, a, sizeof(a) / sizeof(DataType));
	print(&heap, heap._capacity);//原始
	HeapCreat(&heap, heap._capacity);//建大顶堆
	print(&heap, heap._capacity);
	//HeapSort(&heap);//排升序
	HeapPush(&heap, 97);
	//HeapPush(&heap, 63);
	print(&heap, heap._length);
	HeapPop(&heap);
	print(&heap, heap._length);

}
int main()
{
	test();

}