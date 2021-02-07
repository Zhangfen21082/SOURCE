#include "BinaryTree.h"




//int BTSize(BTNode* root)
//{
//	assert(root);
//	int num = 0;
//	BTNode* cur = root;
//	while (cur)
//	{
//		num++;
//		if (cur->_lchild)
//			cur = cur->_lchild;
//		else if (cur->_rchild)
//			cur = cur->_rchild;
//	}
//}

void PreOrder(BTNode* root)
{
	if (root == NULL)
	{
		printf("NULL ");
		return;
	}
	printf("%c ", root->_val);
	PreOrder(root->_lchild);	
	PreOrder(root->_rchild);
}
void InOrder(BTNode* root)
{
	if (root == NULL)
	{
		printf("NULL ");
		return;
	}

	InOrder(root->_lchild);
	printf("%c ", root->_val);
	InOrder(root->_rchild);
}
void PostOrder(BTNode* root)
{
	if (root == NULL)
	{
		printf("NULL ");
		return;
	}

	PostOrder(root->_lchild);
	PostOrder(root->_rchild);
	printf("%c ", root->_val);
}

BTNode* CreatNode(DataType x)
{
	BTNode* NewNode = (BTNode*)malloc(sizeof(BTNode));
	NewNode->_lchild = NULL;
	NewNode->_rchild = NULL;
	NewNode->_val = x;

}

int TreeSize(BTNode* root)
{
	if (root == NULL)
		return 0;
	else
		return 1+ TreeSize(root->_lchild) + TreeSize(root->_rchild);

}
int LeafSize(BTNode* root)
{
	if (root == NULL)
		return 0;
	if (root->_lchild == NULL && root->_rchild == NULL)
		return 1;
	return LeafSize(root->_lchild) + LeafSize(root->_rchild);

}
int TreeDeep(BTNode* root)
{
	if (root == NULL)
		return 0;
	if (root->_lchild == NULL && root->_rchild == NULL)
		return 1;
	return TreeDeep(root->_lchild) > TreeDeep(root->_rchild) ? TreeDeep(root->_lchild) + 1 : TreeDeep(root->_rchild) + 1;

}