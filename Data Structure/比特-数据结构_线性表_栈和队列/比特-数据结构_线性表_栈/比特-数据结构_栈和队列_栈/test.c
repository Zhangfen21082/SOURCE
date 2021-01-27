#include "stack.h"


void test()
{
	Stack stack;
	StackInit(&stack);
	StackPush(&stack, 1);
	StackPush(&stack, 2);
	StackPush(&stack, 3);
	StackPush(&stack, 4);
	StackPush(&stack, 5);
	StackPush(&stack, 5);
	StackPush(&stack, 5);
	StackPush(&stack, 5);
	StackPush(&stack, 5);
	StackPrint(&stack);
	//StackDestory(&stack);
}

int main()
{
	test();
}