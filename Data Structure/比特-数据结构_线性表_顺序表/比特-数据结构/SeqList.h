#pragma once
#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
typedef int SLDataType;

typedef struct SeqList
{
	SLDataType* Array;
	int Size;//��Ч���ݸ���
	int Capacity;//������С
}SeqList;

void SeqListInit(SeqList* ps);//��ʼ��
void SeqListDestory(SeqList* ps);//����

void SeqListPrint(SeqList* ps);//��Ļ�������
void SeqListCheckCapacity(SeqList* ps);//��������Ƿ�����


void SeqListPushBack(SeqList* ps, SLDataType x);//β�壨����������λ�ò��븴�ã�
void SeqListPopBack(SeqList* ps);//βɾ��������������λ��ɾ�����ã�
void SeqListPushFront(SeqList* ps, SLDataType x);//ͷ�壨����������λ�ò��븴�ã�
void SeqListPopFront(SeqList* ps);//ͷɾ������������λ��ɾ�����ã�
void SeqListInsert(SeqList* ps, int pos, SLDataType x);//����λ�ò���
void SeqListErase(SeqList* ps, int pos);//����λ��ɾ��

int  SeqListFind(SeqList* ps, SLDataType x);//ʹ��˳����ҷ�����ĳ��Ԫ�ص�λ��
int  SeqListFindvalue_Bind(SeqList* ps, int pos);//ʹ�ö��ֲ��ҷ�����ĳ��Ԫ�ص�λ��