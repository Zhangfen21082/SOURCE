#pragma once
#include <stdio.h>
#include <stdlib.h>
typedef int SlistDataType;

//������Ͷ���
typedef struct SlistNode
{
	SlistDataType data;//������
	struct SlistNode* next;//ָ����һ������ָ��
}SlNode;

void SlistPushBack(SlNode** head,SlNode** tail, SlistDataType x);//β��
//void SlistPushBack(SlNode** phead, SlistDataType x);//β��

void SlistPopBack(SlNode** phead);//βɾ
void SlistPushFront(SlNode* head,SlistDataType x);//ͷ��
void SlistPopFront(SlNode* head);//ͷɾ

void SlistPrint(SlNode* head);//��ӡ

