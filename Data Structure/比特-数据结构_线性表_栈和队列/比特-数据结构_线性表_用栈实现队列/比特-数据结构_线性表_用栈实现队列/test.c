#pragma once
#include "StackToQueue.h"

void test()
{
	MyQueue q;
	Stack s1;
	Stack s2;
	q._S1 = &s1;
	q._S2 = &s2;

	MyQueueInit(&q);
	MyQueuePush(&q, 1);
	MyQueuePush(&q, 2);
	printf("%d ", MyQueuePop(&q));
	MyQueuePush(&q, 3);
	MyQueuePush(&q, 4);
	printf("%d ", MyQueuePop(&q));
	printf("%d ", MyQueuePop(&q));
	printf("%d ", MyQueuePop(&q));
	


}


int main()
{
	test();
}