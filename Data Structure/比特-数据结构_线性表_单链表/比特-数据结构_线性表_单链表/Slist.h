#pragma once
#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
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
void SlistPushFront(SlNode** phead,SlistDataType x);//ͷ��
void SlistPopFront(SlNode** phead);//ͷɾ

SlNode* SlistFind(SlNode* head, SlistDataType x);//��Ԫ��

SlNode* Slistinsert(SlNode* pos, SlistDataType x);//����λ�ò���
SlNode* Slistdelete(SlNode* pos);//����λ��ɾ��

void SlistPrint(SlNode* head);//��ӡ

