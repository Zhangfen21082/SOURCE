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



BTNode* CreatNode(DataType x);//申请结点


void PreOrder(BTNode* root);//前序遍历
void InOrder(BTNode* root);//中序遍历
void PostOrder(BTNode* root);//后序遍历
int TreeSize(BTNode* root);//求树的结点
int LeafSize(BTNode* root);//求叶子结点数
int TreeDeep(BTNode* root);//求树的深度