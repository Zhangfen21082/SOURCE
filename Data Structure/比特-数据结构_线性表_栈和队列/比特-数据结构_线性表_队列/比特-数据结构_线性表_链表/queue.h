#pragma once
#include <stdio.h>
#include <stdlib.h>
#include <assert.h>

typedef int DataType;

typedef struct QListNode//队列结点
{
	struct QListNode* _next;
	DataType _val;
}QNode;

typedef struct Queue//队列
{
	QNode* _front;//队头，删除元素
	QNode* _rear;//队尾删除元素
}queue;

void QueueInit(queue* pq);//初始化
void QueueDestory(queue* pq);//销毁
void QueuePrint(queue* pq);//打印

void QueuePush(queue* pq,DataType x);//入队
void QueuePop(queue* pq);//出队
DataType QueueFront(queue* pq);//取队头
DataType QueueRear(queue* pq);//取队尾

int QueueEmpty(queue* pq);//判断队列是否为空（返回1则为空）

