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
	while (cur)//�ڵ��ͷ�
	{
		pre = cur;
		cur = cur->_next;
		free(pre);
	}
	//�ͷ�ͷβָ��
	pq->_front = NULL;
	pq->_rear = NULL;
	free(pq);
}
void QueuePrint(queue* pq)
{
	assert(pq);
	QNode* cur = pq->_front;
	if (cur == NULL)//���Ƕ����Ѿ�����
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

	if (pq->_rear == NULL)//�����һ���ڵ㣬rear��frontҪͬʱָ��newnode
	{
		pq->_rear = NewNode;
		pq->_front = NewNode;
	}
	else//�������
	{
		pq->_rear->_next = NewNode;
		pq->_rear = NewNode;
	}
}
void QueuePop(queue* pq)
{
	assert(pq);
	assert(pq->_front);
	if (pq->_front == pq->_rear)//ע�����������������ֻʣһ��Ԫ�أ���Ҫ���⴦����Ȼ��������
	{
		free(pq->_rear);
		pq->_rear = NULL;
		pq->_front = NULL;
	}
	else//�������
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
