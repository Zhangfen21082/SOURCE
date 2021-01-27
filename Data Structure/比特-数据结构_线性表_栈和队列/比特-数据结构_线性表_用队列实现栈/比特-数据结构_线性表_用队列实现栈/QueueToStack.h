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
	Queue* _q1;//储备元素的栈
	Queue* _q2;//进元素的栈
}MyStack;

void MyStackInit(MyStack* ps);
void MyStackPush(MyStack* ps, DataType x);//进栈
DataType MystackPop(MyStack* ps);//出栈