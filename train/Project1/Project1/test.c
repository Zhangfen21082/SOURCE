#include "Seqlist.h"


void test(Seqlist* ps)
{
	Seqlistinit(ps);//��ʼ��

	printf("β������Ԫ��\n");
	SeqlistpushBack(ps, 1);
	SeqlistpushBack(ps, 2);
	SeqlistpushBack(ps, 3);
	Seqlistprint(ps);
	printf("\n");

	printf("βɾԪ��\n");
	SeqlistpopBack(ps);
	Seqlistprint(ps);
	printf("\n");


	printf("ͷ������Ԫ��\n");
	SeqlistpushFront(ps, 4);
	SeqlistpushFront(ps, 5);
	Seqlistprint(ps);
	printf("\n");


	printf("ͷɾԪ��\n");
	SeqlistpopFront(ps);
	Seqlistprint(ps);
	printf("\n");


	printf("�ҵ�Ԫ�ء�1��\n");
	SeqlistFind(ps, 1);
	printf("\n");

	printf("�ڵڶ���λ�ò���Ԫ��\n");
	Seqlistinsert(ps, 2, 6);
	Seqlistprint(ps);
	printf("\n");

	printf("ɾ��������Ԫ��\n");
	Seqlistdelete(ps, 3);
	Seqlistprint(ps);
	printf("\n");
}

int main()
{
	Seqlist S;
	test(&S);
}