#include "DList.h"

void test()
{
	DListNode* head=(DListNode*)malloc(sizeof(DListNode));
	head->prev = head;
	head->next = head;
	printf("β��4�����\n");
	ListPushBack(head, 1);
	ListPushBack(head, 2);
	ListPushBack(head, 3);
	ListPushBack(head, 4);
	printlist(head);
	printf("\n");
	printf("\n");

	printf("βɾ2�����\n");
	ListPopBack(head);
	ListPopBack(head);
	printlist(head);
	printf("\n");
	printf("\n");

	printf("ͷ��4�����\n");
	listPushFront(head, 5);
	listPushFront(head, 6);
	listPushFront(head, 7);
	listPushFront(head, 8);
	printlist(head);
	printf("\n");
	printf("\n");

	printf("ͷɾ2�����\n");
	listPopFront(head);
	listPopFront(head);
	printlist(head);
	printf("\n");
	printf("\n");

	printf("��5�������7\n");
	listinseret_behind(head, 5, 7);
	printlist(head);
	printf("\n");
	printf("\n");

	printf("ɾ��1\n");
	listdelete(head, 1);
	printlist(head);
	printf("\n");
	printf("\n");


	printf("����\n");
	listdestory(head);
	printlist(head);
	printf("\n");
	printf("\n");

}

int main()
{
	test();
}