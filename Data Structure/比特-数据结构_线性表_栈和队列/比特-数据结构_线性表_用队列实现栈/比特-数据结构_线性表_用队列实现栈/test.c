#include "QueueToStack.h"

void test()
{
	MyStack ms;
	Queue q1;
	Queue q2;
	ms._q1 = &q1;
	ms._q2 = &q2;

	MyStackInit(&ms);
	MyStackPush(&ms, 1);
	MyStackPush(&ms, 2);
	MyStackPush(&ms, 3);
	MyStackPush(&ms, 4);
	MyStackPush(&ms, 5);
	printf("%d ", MystackPop(&ms));
	printf("%d ", MystackPop(&ms));
	printf("%d ", MystackPop(&ms));
	printf("%d ", MystackPop(&ms));
	printf("%d ", MystackPop(&ms));


}


int main()
{
	test();

}