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

void printlist(DListNode* head);//��ӡ
DListNode* CreatNode(DLdatatype x);//������

void ListPushBack(DListNode* head, DLdatatype x);//β��
void ListPopBack(DListNode* head);//βɾ
void listPushFront(DListNode* head, DLdatatype x);//ͷ��
void listPopFront(DListNode* head);//ͷɾ

DListNode* find(DListNode* head, DLdatatype x);//��ĳ��Ԫ��
void listinseret_behind(DListNode* head,DLdatatype pos, DLdatatype x);//����λ�ò���(����)
void listinseret_front(DListNode* head,DLdatatype pos, DLdatatype x);//����λ�ò���(ǰ��)
void listdelete(DListNode* head,DLdatatype pos);//����λ��ɾ��

void listdestory(DListNode* head);//��������