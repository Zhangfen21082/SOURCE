#pragma once
#include <stdio.h>
#include <stdlib.h>
#include <assert.h>

typedef int DataType;
 

typedef struct QNode
{
	DataType _val;
	struct QNode* _next;
}QNode;

typedef struct Queue
{
	QNode* _front;
	QNode* _rear;
}Queue;

typedef struct MyStack
{
	Queue* _q1;//����Ԫ�ص�ջ
	Queue* _q2;//��Ԫ�ص�ջ
}MyStack;

void MyStackInit(MyStack* ps);
void MyStackPush(MyStack* ps, DataType x);//��ջ
DataType MystackPop(MyStack* ps);//��ջ