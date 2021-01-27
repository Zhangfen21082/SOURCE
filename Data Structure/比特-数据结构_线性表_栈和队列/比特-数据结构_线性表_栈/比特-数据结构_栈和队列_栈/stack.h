#pragma once
#include <stdio.h>
#include <stdlib.h>
#include <assert.h>

typedef int SLDatatype;

//typedef struct Stack//��̬ջ��ʵ���в�ʹ��
//{
//	int top;
//	SLDatatype* _arr;
//}Stack;

typedef struct Stack
{
	SLDatatype* _arr;
	int _top;//ջ��
	int _capacity;//����
}Stack;


void StackInit(Stack* ps);//ջ�ĳ�ʼ��
void StackDestory(Stack* ps);//����ջ
void StackAddCapacity(Stack* ps);//��ӡջ
void StackPrint(Stack* ps);//��ӡջ

void StackPush(Stack* ps,SLDatatype x);//��ջ
void StackPop(Stack* ps);//��ջ
int StackEmpty(Stack* ps);//���ջ��1��ʾ�ɹ���
SLDatatype StackTop(Stack* ps);//��ȡջ��Ԫ��