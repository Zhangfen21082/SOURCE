#pragma once
#include <stdio.h>
#include <stdlib.h>
#include <assert.h>

typedef int SLDatatype;

//typedef struct Stack//静态栈，实际中不使用
//{
//	int top;
//	SLDatatype* _arr;
//}Stack;

typedef struct Stack
{
	SLDatatype* _arr;
	int _top;//栈顶
	int _capacity;//容量
}Stack;


void StackInit(Stack* ps);//栈的初始化
void StackDestory(Stack* ps);//销毁栈
void StackAddCapacity(Stack* ps);//打印栈
void StackPrint(Stack* ps);//打印栈

void StackPush(Stack* ps,SLDatatype x);//进栈
void StackPop(Stack* ps);//出栈
int StackEmpty(Stack* ps);//清空栈（1表示成功）
SLDatatype StackTop(Stack* ps);//获取栈顶元素