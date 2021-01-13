#pragma once
#include <stdio.h>
#include <stdlib.h>
#include <assert.h>

typedef int SLDataType;
typedef struct SeqList
{
	SLDataType* arr;
	int length;
	int size;
}Seqlist;



void Seqlistinit(Seqlist* ps);//��ʼ��
void Seqlistdestory(Seqlist* ps);//����

void Seqlistprint(Seqlist* ps);//��ӡ
void SeqlistisFull(Seqlist* ps);//����

void SeqlistpushBack(Seqlist* ps, SLDataType x);//β��
void SeqlistpopBack(Seqlist* ps);//βɾ��
void SeqlistpushFront(Seqlist* ps, SLDataType x);//ͷ��
void SeqlistpopFront(Seqlist*ps);//ͷɾ��

void SeqlistFind(Seqlist* ps, SLDataType x);//��Ԫ��

void Seqlistinsert(Seqlist* ps, int pos, SLDataType x);//����λ�ò���
void Seqlistdelete(Seqlist* ps, int pos);//����λ��ɾ��