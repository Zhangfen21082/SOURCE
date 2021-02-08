#include "BinaryTree.h"

void test()
{
	BTNode* A = CreatNode('A');
	BTNode* B = CreatNode('B');
	BTNode* C = CreatNode('C');
	BTNode* D = CreatNode('D');
	BTNode* E = CreatNode('E');
	A->_lchild = B;
	A->_rchild = C;
	B->_lchild = D;
	C->_lchild = E;

	//printf("A高度为%d\n", TreeDeep(A));
	//printf("B高度为%d\n", TreeDeep(B));
	//printf("A的第二层的高度为%d\n", TreeLevelSize(A, 1));
	//printf("结点的D的地址是%p\n", D);
	//printf("调用函数找到的D的地址是%p\n", TreeFind(A, 'D'));
	if(isCompleteTree(A)==1)
		printf("是完全二叉树\n");
	else
		printf("不是完全二叉树");


}


int main()
{
	test();
}