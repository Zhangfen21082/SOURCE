#include "stack.h"

void StackInit(Stack* ps)
{
	assert(ps);
	ps->_arr = (SLDatatype*)malloc(sizeof(SLDatatype) * 4);
	ps->_top = -1;
	ps->_capacity = 4;
}

void StackDestory(Stack* ps)
{
	assert(ps);
	free(ps->_arr);
	ps->_arr = NULL;
	ps->_top = -1;
	ps->_capacity = 0;

}
void StackPrint(Stack* ps)
{
	assert(ps);
	int k = ps->_top+1;
	while (k--)
	{
		printf("%d ", ps->_arr[k]);
	}


}
void StackAddCapacity(Stack* ps)
{
	assert(ps);
	ps->_capacity *= 2;
	SLDatatype* temp = (SLDatatype)realloc(ps->_arr,sizeof(SLDatatype)*ps->_capacity);
	ps->_arr = temp;

}
void StackPush(Stack* ps,SLDatatype x)
{
	assert(ps);
	if (ps->_top == ps->_capacity-1)
		StackAddCapacity(ps);
	ps->_top++;
	ps->_arr[ps->_top] = x;
	
}
void StackPop(Stack* ps)
{
	assert(ps);
	if (ps->_top == -1)
	{
		printf("栈为空\n");
		exit(-1);
	}
	ps->_top--;
}
int StackEmpty(Stack* ps)
{
	assert(ps);
	if (ps->_top == -1)
	{
		printf("栈已经清空\n");
		return 1;
	}
	return 0;
}
SLDatatype StackTop(Stack* ps)
{
	assert(ps);
	if (StackEmpty)
	{
		printf("栈空\n");
		exit(-1);
	}
	return ps->_arr[ps->_top];

}
