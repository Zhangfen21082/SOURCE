#pragma once
#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
typedef int SlistDataType;

//结点类型定义
typedef struct SlistNode
{
	SlistDataType data;//数据域
	struct SlistNode* next;//指向下一个结点的指针
}SlNode;

void SlistPushBack(SlNode** head,SlNode** tail, SlistDataType x);//尾插
//void SlistPushBack(SlNode** phead, SlistDataType x);//尾插
void SlistPopBack(SlNode** phead);//尾删
void SlistPushFront(SlNode** phead,SlistDataType x);//头插
void SlistPopFront(SlNode** phead);//头删

SlNode* SlistFind(SlNode* head, SlistDataType x);//找元素

SlNode* Slistinsert(SlNode* pos, SlistDataType x);//任意位置插入
SlNode* Slistdelete(SlNode* pos);//任意位置删除

void SlistPrint(SlNode* head);//打印

