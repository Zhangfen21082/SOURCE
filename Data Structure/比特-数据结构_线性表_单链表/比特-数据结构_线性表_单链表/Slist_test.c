#include "Slist.h"

void test()//��ɾ����
{
	SlNode* head=NULL;
	SlNode* tail = head;
	SlistPushBack(&head,&tail, 1);
	SlistPushBack(head,&tail, 2);
	SlistPushBack(head,&tail, 3);
	SlistPrint(head);

	printf("\n");
	SlistPopBack(&head);
	SlistPrint(head);

	printf("\n");
	SlistPopBack(&head);
	SlistPrint(head);

	printf("\n");
	SlistPopBack(&head);
	SlistPrint(head);

	printf("\n");
	SlistPopBack(&head);
	SlistPrint(head);


	//SlNode* head = NULL;
	//SlistPushBack(&head, 1);
	//SlistPushBack(&head, 2);
	//SlistPrint(head);
}

int main()
{

	test();//��ɾ����
	return 0;
}