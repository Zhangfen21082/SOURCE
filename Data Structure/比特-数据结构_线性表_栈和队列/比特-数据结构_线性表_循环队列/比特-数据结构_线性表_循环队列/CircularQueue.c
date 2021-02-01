#include "CircularQueue.h"


void CircularQueueInit(CircularQueue* pq)
{
	pq->_front = 0;
	pq->_rear = 0;
	pq->_arr = (DataType*)malloc(sizeof(DataType)*(8+1));
}

void print(CircularQueue* pq)
{
	assert(pq);
	int cur = pq->_front;
	while (cur != pq->_rear)
	{
		printf("%d ", pq->_arr[cur]);
		cur = (cur + 1) % 9;

	}

}

void CircularQueuePush(CircularQueue* pq, DataType x)
{
	assert(pq);
	if ((pq->_rear + 1) % 9 == pq->_front)
		return;

	pq->_arr[pq->_rear] = x;
	pq->_rear = (pq->_rear + 1) % 9;
}
void CircularQueuePop(CircularQueue* pq)
{
	assert(pq);
	if (pq->_rear == pq->_front)
		return;
	pq->_front=(pq->_front + 1) % 9;
}
DataType CircularQueueHead(CircularQueue* pq)
{
	assert(pq);
	if (pq->_rear == pq->_front)
		exit(-1);
	return pq->_arr[pq->_front];

}
DataType CircularQueueTail(CircularQueue* pq)
{
	assert(pq);
	if (pq->_rear == pq->_front)
		exit(-1);
	else
	{
		int cur = pq->_front;
		while ((cur + 1) % 9 != pq->_rear)
			cur = cur++;
		return pq->_arr[cur];
	}

}