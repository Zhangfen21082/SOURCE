#include "Slist.h"

void test()//��ɾ����
{
	SlNode* head=NULL;
	SlNode* tail = head;
	SlistPushFront(&head, 1);
	SlistPushFront(&head, 2);
	SlistPushFront(&head, 3);
	SlistPushFront(&head, 4);
	SlistPushFront(&head, 5);
	SlistPrint(head);
	printf("\n");

	//ҪɾԪ��4�����3�������õ�Ԫ��4�ĵ�ַ
	SlNode* find= SlistFind(head, 4);
	Slistdelete(find);
	SlistPrint(head);
	printf("\n");
}

int main()
{

	test();//��ɾ����
	return 0;
}