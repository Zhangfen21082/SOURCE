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
	B->_rchild = E;

	printf("A�߶�Ϊ%d\n", TreeDeep(A));
	printf("B�߶�Ϊ%d\n", TreeDeep(B));

	



}


int main()
{
	test();
}