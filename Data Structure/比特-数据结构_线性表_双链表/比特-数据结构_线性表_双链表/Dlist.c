#include "DList.h"

DListNode* CreatNode(DLdatatype x)
{
	DListNode* NewNode = (DListNode*)malloc(sizeof(DListNode));
	NewNode->val = x;
	NewNode->next = NULL;
	NewNode->prev = NULL;
	return NewNode;
}

void printlist(DListNode* head)
{
	assert(head);
	DListNode* cur = head->next;
	while (cur!=head)
	{
		printf("%d->", cur->val);
		cur = cur->next;
	}
	if (head->next == head)
		printf("NULL");

}

void ListPushBack(DListNode* head, DLdatatype x)
{
	assert(head);
	DListNode* NewNode=CreatNode(x);

	NewNode->next = head;
	(head->prev)->next = NewNode;
	NewNode->prev = head->prev;
	head->prev = NewNode;
}

void ListPopBack(DListNode* head)
{
	assert(head);
	assert(head->next != head);//如果链表为空，断言
	DListNode* delelte = head->prev;
	head->prev = delelte->prev;
	delelte->prev->next = head;
	free(delelte);
}

void listPushFront(DListNode* head, DLdatatype x)
{
	assert(head);
	DListNode* NewNode = CreatNode(x);

	NewNode->next = head->next;
	NewNode->prev = head;
	head->next->prev = NewNode;
	head->next = NewNode;

}
void listPopFront(DListNode* head)
{
	assert(head);
	assert(head->next != head);
	DListNode* first = head->next;
	first->next->prev = head;
	head->next = first->next;
	free(first);

}

DListNode* find(DListNode* head, DLdatatype x)
{
	assert(head);
	DListNode* cur = head->next;
	while (cur->next != head && cur->val != x)
	{
		cur = cur->next;
	}
	if (cur->next == head && cur->val!=x)
	{
		return NULL;//未找到
	}
	else
	{
		return cur;//否则返回
	}

}

void listinseret_behind(DListNode* head, DLdatatype pos, DLdatatype x)
{
	assert(head);
	DListNode* insert = find(head, pos);
	if (insert == NULL)
	{
		printf("%d不存在\n", pos);
	}
	else
	{
		DListNode* NewNode = CreatNode(x);
		NewNode->next = insert->next;
		NewNode->prev = insert;
		insert->next->prev = NewNode;
		insert->next = NewNode;
	}

}

void listinseret_front(DListNode* head, DLdatatype pos, DLdatatype x)
{
	assert(head);
	DListNode* insert = find(head, pos);
	if (insert == NULL)
	{
		printf("%d不存在\n", pos);
	}
	
	{
		DListNode* NewNode = CreatNode(x);
		NewNode->next = insert;
		NewNode->prev = insert->prev;
		NewNode->prev->next = NewNode;
		insert->prev = NewNode;
	
	}

}

void listdelete(DListNode* head, DLdatatype pos)
{
	assert(head);
	assert(pos != head);
	DListNode* delete = find(head, pos);
	if (delete == NULL)
	{
		printf("%d不存在\n", pos);
	}
	else
	{
		delete->prev->next = delete->next;
		delete->next->prev = delete->prev;
		free(delete);
	}

}

void listdestory(DListNode* head)
{
	assert(head);
	DListNode* cur = head->next;
	DListNode* pre = NULL;
	while (cur->next != head)
	{
		pre = cur;
		cur = cur->next;
		free(pre);
		
	}
	head->next =head;
	head->prev = head;

}