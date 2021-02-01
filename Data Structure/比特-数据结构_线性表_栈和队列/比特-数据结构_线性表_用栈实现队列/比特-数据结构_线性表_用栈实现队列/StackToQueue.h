#pragma once
#include <stdio.h>
#include <stdlib.h>
#include <assert.h>

typedef int DataType;


typedef struct
{
	DataType* _arr;
	int _top;
	int _capacity;

}Stack;
typedef struct MyQueue
{
	Stack* _S1;
	Stack* _S2;

}MyQueue;



void MyQueueInit(MyQueue* pq);//��ʼ��
void MyQueuePush(MyQueue*pq, DataType x);//�롰�ӡ�
DataType MyQueuePop(MyQueue* pq);//�����ӡ�