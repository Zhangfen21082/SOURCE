#pragma once
#include <stdio.h>
#include <assert.h>
#include <stdlib.h>

typedef int DLdatatype;
typedef struct DListNode
{
	struct DListNode* next;
	struct DListNode* prev;
	DLdatatype val;

}DListNode;

void printlist(DListNode* head);//打印
DListNode* CreatNode(DLdatatype x);//申请结点

void ListPushBack(DListNode* head, DLdatatype x);//尾插
void ListPopBack(DListNode* head);//尾删
void listPushFront(DListNode* head, DLdatatype x);//头插
void listPopFront(DListNode* head);//头删

DListNode* find(DListNode* head, DLdatatype x);//找某个元素
void listinseret_behind(DListNode* head,DLdatatype pos, DLdatatype x);//任意位置插入(后面)
void listinseret_front(DListNode* head,DLdatatype pos, DLdatatype x);//任意位置插入(前面)
void listdelete(DListNode* head,DLdatatype pos);//任意位置删除

void listdestory(DListNode* head);//链表销毁