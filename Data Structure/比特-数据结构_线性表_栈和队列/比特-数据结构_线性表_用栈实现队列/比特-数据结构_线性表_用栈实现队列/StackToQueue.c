#pragma once
#include "StackToQueue.h"

void MyQueueInit(MyQueue* pq)
{
	assert(pq);
	assert(pq->_S1);
	assert(pq->_S2);
	pq->_S1->_arr = (DataType*)malloc(sizeof(DataType)*4);
	pq->_S1->_top = -1;
	pq->_S1->_capacity = 4;

	pq->_S2->_arr = (DataType*)malloc(sizeof(DataType) * 4);
	pq->_S2->_top = -1;
	pq->_S2->_capacity = 4;
}

DataType StackPop(Stack* ps)//³öÕ»
{
	assert(ps);
	if (ps->_top == -1)
	{
		printf("Õ»¿Õ¸ñ\n");
		exit(-1);
	}
	DataType rec = ps->_arr[ps->_top];
	ps->_top--;
	return rec;
}
void  StackPush(Stack* ps, DataType x)//ÈëÕ»
{
	assert(ps);
	if (ps->_top == ps->_capacity - 1)
	{
		ps->_capacity *= 2;
		DataType* temp = (DataType)realloc(ps->_arr, sizeof(DataType)*ps->_capacity);
		ps->_arr = temp;
	}
	ps->_top++;
	ps->_arr[ps->_top] = x;
}

void MyQueuePush(MyQueue*pq, DataType x)
{
	StackPush(pq->_S1, x);

}
DataType MyQueuePop(MyQueue* pq)
{
	while (pq->_S1->_top != -1)
	{
		DataType save = StackPop(pq->_S1);
		StackPush(pq->_S2,save);
	}
	DataType rec= StackPop(pq->_S2);
	while (pq->_S2->_top != -1)
	{
		DataType save = StackPop(pq->_S2);
		StackPush(pq->_S1, save);
	}
	return rec;
}