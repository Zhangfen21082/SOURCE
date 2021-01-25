#include "DList.h"

void test()
{
	DListNode* head=(DListNode*)malloc(sizeof(DListNode));
	head->prev = head;
	head->next = head;
	printf("尾插4个结点\n");
	ListPushBack(head, 1);
	ListPushBack(head, 2);
	ListPushBack(head, 3);
	ListPushBack(head, 4);
	printlist(head);
	printf("\n");
	printf("\n");

	printf("尾删2个结点\n");
	ListPopBack(head);
	ListPopBack(head);
	printlist(head);
	printf("\n");
	printf("\n");

	printf("头插4个结点\n");
	listPushFront(head, 5);
	listPushFront(head, 6);
	listPushFront(head, 7);
	listPushFront(head, 8);
	printlist(head);
	printf("\n");
	printf("\n");

	printf("头删2个结点\n");
	listPopFront(head);
	listPopFront(head);
	printlist(head);
	printf("\n");
	printf("\n");

	printf("在5后面插入7\n");
	listinseret_behind(head, 5, 7);
	printlist(head);
	printf("\n");
	printf("\n");

	printf("删除1\n");
	listdelete(head, 1);
	printlist(head);
	printf("\n");
	printf("\n");


	printf("销毁\n");
	listdestory(head);
	printlist(head);
	printf("\n");
	printf("\n");

}

int main()
{
	test();
}