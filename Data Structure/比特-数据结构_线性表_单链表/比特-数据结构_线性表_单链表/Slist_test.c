#include "Slist.h"

void test()//增删测试
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

	//要删元素4后面的3，首先拿到元素4的地址
	SlNode* find= SlistFind(head, 4);
	Slistdelete(find);
	SlistPrint(head);
	printf("\n");
}

int main()
{

	test();//增删测试
	return 0;
}