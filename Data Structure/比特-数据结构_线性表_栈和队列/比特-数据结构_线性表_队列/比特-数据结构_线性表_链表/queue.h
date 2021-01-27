#pragma once
#include <stdio.h>
#include <stdlib.h>
#include <assert.h>

typedef int DataType;

typedef struct QListNode//���н��
{
	struct QListNode* _next;
	DataType _val;
}QNode;

typedef struct Queue//����
{
	QNode* _front;//��ͷ��ɾ��Ԫ��
	QNode* _rear;//��βɾ��Ԫ��
}queue;

void QueueInit(queue* pq);//��ʼ��
void QueueDestory(queue* pq);//����
void QueuePrint(queue* pq);//��ӡ

void QueuePush(queue* pq,DataType x);//���
void QueuePop(queue* pq);//����
DataType QueueFront(queue* pq);//ȡ��ͷ
DataType QueueRear(queue* pq);//ȡ��β

int QueueEmpty(queue* pq);//�ж϶����Ƿ�Ϊ�գ�����1��Ϊ�գ�

