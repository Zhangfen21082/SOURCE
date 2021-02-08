#pragma once
#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#include <stdbool.h>




typedef struct BTNode
{
	char val;
	struct BTNode* _lchild;
	struct BTNode* _rchild;
}BTNode;

typedef struct ListNode
{
	struct ListNode* _next;
	BTNode* val;//���ﲻ��ֱ�Ӱ����Ľ������У�ֱ����ָ�����
}ListNode;
typedef struct Queue
{
	ListNode* _front;
	ListNode* _rear;
}queue;
typedef BTNode* DataType;


BTNode* CreatNode(char x);//������


void PreOrder(BTNode* root);//ǰ�����
void InOrder(BTNode* root);//�������
void PostOrder(BTNode* root);//�������
int TreeSize(BTNode* root);//�����Ľ��
int LeafSize(BTNode* root);//��Ҷ�ӽ����
int TreeDeep(BTNode* root);//���������
int TreeLevelSize(BTNode* root,int k);//�����ĵ�K��Ľ�����
BTNode* TreeFind(BTNode* root, char x);//����ĳ�����
void DestoryTree(BTNode* root);//����

void level(BTNode* root);//��α���
int isCompleteTree(BTNode* root);//�Ƿ�Ϊ��ȫ������