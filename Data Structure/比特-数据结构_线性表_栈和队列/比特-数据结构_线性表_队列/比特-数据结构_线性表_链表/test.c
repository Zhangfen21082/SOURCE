#include "queue.h"



void test()
{
	queue q;
	QueueInit(&q);
	QueuePush(&q, 1);
	QueuePush(&q, 2);
	QueuePush(&q, 3);
	QueuePush(&q, 4);
	QueuePush(&q, 5);
	while (!(QueueEmpty(&q)))
	{
		printf("%d ", QueueFront(&q));
		QueuePop(&q);
	}
	//QueuePrint(&q);

}


int main()
{
	test();


}