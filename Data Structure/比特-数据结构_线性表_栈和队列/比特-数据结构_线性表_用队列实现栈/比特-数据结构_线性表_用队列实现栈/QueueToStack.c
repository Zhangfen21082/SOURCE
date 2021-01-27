#include "QueueToStack.h"



void MyStackInit(MyStack* ps)
{
	assert(ps);
	ps->_q1->_front = NULL;
	ps->_q1->_rear = NULL;
	ps->_q2->_front = NULL;
	ps->_q2->_rear = NULL;
	printf("初始化成功\n");
}
void MystackDestory(MyStack* ps)
{
	assert(ps);
	//释放储存栈
	QNode* cur = ps->_q1->_front;
	QNode* pre;
	while (cur)
	{
		pre = cur;
		cur = cur->_next;
		free(pre);
	}
	free(ps);
}

//入队
void QueuePush(Queue* pq, DataType x)
{
	assert(pq);
	QNode* NewNode = (QNode*)malloc(sizeof(QNode));
	NewNode->_val = x;
	NewNode->_next = NULL;

	if (pq->_rear == NULL)
	{
		pq->_rear = NewNode;
		pq->_front = NewNode;
	}
	else
	{
		pq->_rear->_next = NewNode;
		pq->_rear = NewNode;
	}
}//
//出队
DataType QueuePop(Queue* pq)
{
	assert(pq);
	if (pq->_front == pq->_rear)
	{
		DataType rec = pq->_front->_val;
		free(pq->_rear);
		pq->_rear = NULL;
		pq->_front = NULL;
		return rec;
	}
	else
	{
		
		QNode* cur = pq->_front;
		pq->_front = pq->_front->_next;
		return cur->_val;
		free(cur);
	}
}

void MyStackPush(MyStack* ps,DataType x)
{
	//如果队列1不空就先把队列1中的元素出队列然后进入队列2
	if (ps->_q1->_front != NULL)
	{
		DataType save = QueuePop(ps->_q1);//出队列1
		QueuePush(ps->_q2,save);//进队列2
	}
	QueuePush(ps->_q2, x);//而后在正常进“栈”
}

DataType MystackPop(MyStack* ps)
{
	if (ps->_q2->_front == NULL && ps->_q1->_front !=NULL)
	//如果队列2为空，队列1不空，将队1所有元素出队1，依次进队2
	{
		while (ps->_q1->_front)
		{
			DataType save = QueuePop(ps->_q1);
			QueuePush(ps->_q2, save);
		}
	}
	//出“栈”时，第一个元素就是队列2的尾元素
	while(ps->_q2->_front!=ps->_q2->_rear)//出队2直到队列2剩余最后一个元素
	{
		DataType save = QueuePop(ps->_q2);
		QueuePush(ps->_q1, save);
	}
	DataType rec = QueuePop(ps->_q2);
	return rec;
}