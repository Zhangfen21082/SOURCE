#include "queue.h"


void QueueInit(queue* pq)
{
	assert(pq);
	pq->_front = NULL;
	pq->_rear = NULL;
	
}
void QueueDestory(queue* pq)
{
	assert(pq);
	QNode* cur = pq->_front;
	QNode* pre=NULL;
	while (cur)//节点释放
	{
		pre = cur;
		cur = cur->_next;
		free(pre);
	}
	//释放头尾指针
	pq->_front = NULL;
	pq->_rear = NULL;
	free(pq);
}
void QueuePrint(queue* pq)
{
	assert(pq);
	QNode* cur = pq->_front;
	if (cur == NULL)//这是队列已经空了
	{
		printf("NULL\n");
	}
	else
	{
		while (cur)
		{
			printf("%d-> ", cur->_val);
			cur = cur->_next;
		}
	}
}
void QueuePush(queue* pq,DataType x)
{
	assert(pq);
	QNode* NewNode = (QNode*)malloc(sizeof(QNode));
	NewNode->_val = x;
	NewNode->_next = NULL;

	if (pq->_rear == NULL)//插入第一个节点，rear和front要同时指向newnode
	{
		pq->_rear = NewNode;
		pq->_front = NewNode;
	}
	else//正常情况
	{
		pq->_rear->_next = NewNode;
		pq->_rear = NewNode;
	}
}
void QueuePop(queue* pq)
{
	assert(pq);
	assert(pq->_front);
	if (pq->_front == pq->_rear)//注意特殊情况，队列中只剩一个元素，需要特殊处理，不然发生错误
	{
		free(pq->_rear);
		pq->_rear = NULL;
		pq->_front = NULL;
	}
	else//正常情况
	{
		QNode* cur = pq->_front;
		pq->_front = pq->_front->_next;
		free(cur);
	}
	
}


DataType QueueFront(queue* pq)
{
	assert(pq);
	assert(pq->_front);
	return pq->_front->_val;
}
DataType QueueRear(queue* pq)
{
	assert(pq);
	assert(pq->_rear);
	return pq->_rear->_val;	
}
int QueueEmpty(queue* pq)
{
	assert(pq);
	if (pq->_front == NULL)
		return 1;
	else
		return 0;

}
