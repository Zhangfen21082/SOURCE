#include "Slist.h"




void SlistPushBack(SlNode** phead, SlNode** ptail, SlistDataType x)//β��-��β�ڵ�
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

//void SlistPushBack(SlNode** phead, SlistDataType x)//β��
//{
//	SlNode* NewNode = (SlNode*)malloc(sizeof(SlNode));
//	if (NewNode == NULL)
//	{
//		printf("������ʧ��\n");
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



void SlistPopBack(SlNode** phead)//βɾ
{
	if ((*phead) == NULL)
	{
		printf("���󣬿�����");
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
void SlistPushFront(SlNode* head, SlistDataType x);//ͷ��
void SlistPopFront(SlNode* head);//ͷɾ

void SlistPrint(SlNode* head)//��ӡ
{
	SlNode* current = head;//����һ������ָ�룬��Ϊͷָ�벻������
	while (current!= NULL)
	{
		printf("%d->", current->data);
		current = current->next;//ָ�����
	}
	printf("NULL");
}