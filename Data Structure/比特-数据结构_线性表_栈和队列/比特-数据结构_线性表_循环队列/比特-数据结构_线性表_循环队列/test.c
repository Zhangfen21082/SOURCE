#include "CircularQueue.h"


void test()
{
	CircularQueue CQ;
	CircularQueueInit(&CQ);
	CircularQueuePush(&CQ, 1);
	CircularQueuePush(&CQ, 2);
	CircularQueuePush(&CQ, 3);
	CircularQueuePush(&CQ, 4);
	print(&CQ);
	printf("\n");
	CircularQueuePop(&CQ);
	print(&CQ);
	printf("\n");
	printf("队头元素是%d \n", CircularQueueHead(&CQ));
	printf("队尾元素是%d \n", CircularQueueTail(&CQ));

}
int main()
{
	test();
}