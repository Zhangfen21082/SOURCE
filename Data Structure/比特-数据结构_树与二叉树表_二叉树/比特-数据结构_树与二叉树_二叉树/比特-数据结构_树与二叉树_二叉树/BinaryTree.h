#pragma once
#include <stdio.h>
#include <stdlib.h>
#include <assert.h>

typedef char DataType;

typedef struct BTNode
{
	DataType _val;
	struct BTNode* _lchild;
	struct BTNode* _rchild;
}BTNode;



BTNode* CreatNode(DataType x);//������


void PreOrder(BTNode* root);//ǰ�����
void InOrder(BTNode* root);//�������
void PostOrder(BTNode* root);//�������
int TreeSize(BTNode* root);//�����Ľ��
int LeafSize(BTNode* root);//��Ҷ�ӽ����
int TreeDeep(BTNode* root);//���������