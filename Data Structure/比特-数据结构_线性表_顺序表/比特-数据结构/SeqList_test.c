#include "SeqList.h"

//���Բ���ɾ��Ԫ��
void Test1(SeqList* ps)
{
	SeqListInit(ps);//��ʼ��
	SeqListPushBack(ps, 1);
	SeqListPushBack(ps, 2);
	SeqListPushBack(ps, 3);
	SeqListPushBack(ps, 4);
	SeqListPushBack(ps, 5);//β����������Ԫ��
	SeqListPrint(ps);

	//SeqListPopBack(&s);
	//SeqListPopBack(&s);
	//SeqListPopBack(&s);//β������ɾ��Ԫ��
	//SeqListPrint(&s);

	//SeqListPushFront(&s, 9);
	//SeqListPushFront(&s, 8);
	//SeqListPushFront(&s, 7);
	//SeqListPushFront(&s, 6);
	//SeqListPushFront(&s, 5);//ͷ�����β���Ԫ��
	//SeqListPrint(&s);

	//SeqListPopFront(&s);
	//SeqListPopFront(&s);
	//SeqListPopFront(&s);//ͷ������ɾ��Ԫ��
	//SeqListPrint(&s);

	//SeqListInsert(&s, 1, 5);
	//SeqListInsert(&s, 1, 6);//��ָ��λ�ò���Ԫ��
	//SeqListPrint(&s);

	//SeqListErase(&s, 1);
	//SeqListErase(&s, 1);//��ָ��λ��Ԫ��ɾ��
	//SeqListPrint(&s);

}
//���Խ����û�����ɾ��ָ��Ԫ��ɾ��
void Test2(SeqList* ps)
{
	printf("������Ҫɾ����Ԫ��\n");
	int res = 0;
	scanf_s("%d", &res);
	int index = SeqListFind(ps, res);
	if (index == -1)
		printf("û�д�Ԫ��");
	else
	{
		printf("ɾ����Ϊ\n");
		SeqListErase(ps, index);
		SeqListPrint(ps);
	}
	
	

}


int main()
{
	SeqList s;
	Test1(&s);//���Բ���ɾ��Ԫ��
	Test2(&s);//�����û�ָ��Ԫ��ɾ��
	return 0;
}