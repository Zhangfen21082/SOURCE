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

void CircularQueueInit(CircularQueue* pq);//��ʼ��
void CircularQueuePush(CircularQueue* pq, DataType x);//���
void CircularQueuePop(CircularQueue* pq);//ɾ��
DataType CircularQueueHead(CircularQueue* pq);//��ͷ
DataType CircularQueueTail(CircularQueue* pq);//��ͷ