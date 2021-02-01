#pragma once
#include <stdio.h>
#include <stdlib.h>
#include <assert.h>

typedef int DataType;

typedef struct CircularQueue
{
	int _front;
	int _rear;
	DataType* _arr;

}CircularQueue;

void CircularQueueInit(CircularQueue* pq);//初始化
void CircularQueuePush(CircularQueue* pq, DataType x);//入队
void CircularQueuePop(CircularQueue* pq);//删除
DataType CircularQueueHead(CircularQueue* pq);//队头
DataType CircularQueueTail(CircularQueue* pq);//队头