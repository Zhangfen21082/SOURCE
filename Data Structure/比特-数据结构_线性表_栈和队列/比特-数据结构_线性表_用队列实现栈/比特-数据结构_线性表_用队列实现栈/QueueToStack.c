#include "QueueToStack.h"



void MyStackInit(MyStack* ps)
{
	assert(ps);
	ps->_q1->_front = NULL;
	ps->_q1->_rear = NULL;
	ps->_q2->_front = NULL;
	ps->_q2->_rear = NULL;
	printf("��ʼ���ɹ�\n");
}
void MystackDestory(MyStack* ps)
{
	assert(ps);
	//�ͷŴ���ջ
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

//���
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
//����
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
	//�������1���վ��ȰѶ���1�е�Ԫ�س�����Ȼ��������2
	if (ps->_q1->_front != NULL)
	{
		DataType save = QueuePop(ps->_q1);//������1
		QueuePush(ps->_q2,save);//������2
	}
	QueuePush(ps->_q2, x);//��������������ջ��
}

DataType MystackPop(MyStack* ps)
{
	if (ps->_q2->_front == NULL && ps->_q1->_front !=NULL)
	//�������2Ϊ�գ�����1���գ�����1����Ԫ�س���1�����ν���2
	{
		while (ps->_q1->_front)
		{
			DataType save = QueuePop(ps->_q1);
			QueuePush(ps->_q2, save);
		}
	}
	//����ջ��ʱ����һ��Ԫ�ؾ��Ƕ���2��βԪ��
	while(ps->_q2->_front!=ps->_q2->_rear)//����2ֱ������2ʣ�����һ��Ԫ��
	{
		DataType save = QueuePop(ps->_q2);
		QueuePush(ps->_q1, save);
	}
	DataType rec = QueuePop(ps->_q2);
	return rec;
}