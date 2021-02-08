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
	BTNode* val;//这里不用直接把树的结点入队列，直接入指针最方便
}ListNode;
typedef struct Queue
{
	ListNode* _front;
	ListNode* _rear;
}queue;
typedef BTNode* DataType;


BTNode* CreatNode(char x);//申请结点


void PreOrder(BTNode* root);//前序遍历
void InOrder(BTNode* root);//中序遍历
void PostOrder(BTNode* root);//后序遍历
int TreeSize(BTNode* root);//求树的结点
int LeafSize(BTNode* root);//求叶子结点数
int TreeDeep(BTNode* root);//求树的深度
int TreeLevelSize(BTNode* root,int k);//求树的第K层的结点个数
BTNode* TreeFind(BTNode* root, char x);//查找某个结点
void DestoryTree(BTNode* root);//销毁

void level(BTNode* root);//层次遍历
int isCompleteTree(BTNode* root);//是否为完全二叉树