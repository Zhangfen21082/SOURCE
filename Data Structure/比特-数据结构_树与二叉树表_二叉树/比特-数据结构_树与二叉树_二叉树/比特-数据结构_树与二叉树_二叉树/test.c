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

	//printf("A�߶�Ϊ%d\n", TreeDeep(A));
	//printf("B�߶�Ϊ%d\n", TreeDeep(B));
	//printf("A�ĵڶ���ĸ߶�Ϊ%d\n", TreeLevelSize(A, 1));
	//printf("����D�ĵ�ַ��%p\n", D);
	//printf("���ú����ҵ���D�ĵ�ַ��%p\n", TreeFind(A, 'D'));
	if(isCompleteTree(A)==1)
		printf("����ȫ������\n");
	else
		printf("������ȫ������");


}


int main()
{
	test();
}