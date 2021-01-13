#include "Slist.h"




void SlistPushBack(SlNode** phead, SlNode** ptail, SlistDataType x)//尾插-带尾节点
{

	SlNode* NewNode = (SlNode*)malloc(sizeof(SlNode));
	NewNode->data = x;
	NewNode->next = NULL;

	if ((*phead) == NULL)
	{
		(*phead)= NewNode;
		(*ptail) = NewNode;
	}
	else
	{
		(*ptail)->next = NewNode;
		(*ptail) = NewNode;
	}
	
}

//void SlistPushBack(SlNode** phead, SlistDataType x)//尾插
//{
//	SlNode* NewNode = (SlNode*)malloc(sizeof(SlNode));
//	if (NewNode == NULL)
//	{
//		printf("申请结点失败\n");
//		exit(-1);
//	}
//	NewNode->data = x;
//	NewNode->next = NULL;
//	SlNode* tail =(*phead);
//	if ((*phead)== NULL)
//	{
//		(*phead) = NewNode;
//	}
//	else
//	{
//		while (tail->next != NULL)
//		{
//			tail = tail->next;
//		}
//		tail->next=NewNode;
//	}
//	
//
//
//}



void SlistPopBack(SlNode** phead)//尾删
{
	if ((*phead) == NULL)
	{
		printf("错误，空链表");
		exit(-1);
	}
	else if ((*phead)->next == NULL)
	{
		free(*phead);
		(*phead) = NULL;
	}
	else
	{
		SlNode* current = (*phead);
		SlNode* pre = NULL;
		while (current->next != NULL)
		{
			pre = current;
			current = current->next;
		}
		free(current);
		pre->next = NULL;
	}

}
void SlistPushFront(SlNode* head, SlistDataType x);//头插
void SlistPopFront(SlNode* head);//头删

void SlistPrint(SlNode* head)//打印
{
	SlNode* current = head;//申请一个遍历指针，因为头指针不能乱跑
	while (current!= NULL)
	{
		printf("%d->", current->data);
		current = current->next;//指针后移
	}
	printf("NULL");
}