#include "BinaryTree.h"




void QueuePush(queue* pq, DataType x)
{
	assert(pq);
	ListNode* NewNode = (ListNode*)malloc(sizeof(ListNode));
	assert(NewNode);
	NewNode->val = x;
	NewNode->_next = NULL;

	if (pq->_rear == NULL)//�����һ���ڵ㣬rear��frontҪͬʱָ��newnode
	{
		pq->_rear = NewNode;
		pq->_front = NewNode;
	}
	else//�������
	{
		pq->_rear->_next = NewNode;
		pq->_rear = NewNode;
	}
}
BTNode* QueuePop(queue* pq)
{
	assert(pq);
	assert(pq->_front);
	if (pq->_front == pq->_rear)//ע�����������������ֻʣһ��Ԫ�أ���Ҫ���⴦����Ȼ��������
	{
		BTNode* receive = pq->_front->val;//���ڷ������ڵ�
		ListNode* release = pq->_front;//�ͷŽ��
		pq->_front = NULL;
		pq->_rear = NULL;
		free(release);
		return receive;
	}
	else//�������
	{
		BTNode* receive = pq->_front->val;	
		ListNode* release = pq->_front;
		pq->_front = pq->_front->_next;
		free(release);
		return receive;
	}

}









void PreOrder(BTNode* root)
{
	if (root == NULL)
	{
		printf("NULL ");
		return;
	}
	printf("%c ", root->val);
	PreOrder(root->_lchild);	
	PreOrder(root->_rchild);
}
void InOrder(BTNode* root)
{
	if (root == NULL)
	{
		printf("NULL ");
		return;
	}

	InOrder(root->_lchild);
	printf("%c ", root->val);
	InOrder(root->_rchild);
}
void PostOrder(BTNode* root)
{
	if (root == NULL)
	{
		printf("NULL ");
		return;
	}

	PostOrder(root->_lchild);
	PostOrder(root->_rchild);
	printf("%c ", root->val);
}

BTNode* CreatNode(char x)
{
	BTNode* NewNode = (BTNode*)malloc(sizeof(BTNode));
	NewNode->_lchild = NULL;
	NewNode->_rchild = NULL;
	NewNode->val = x;

}

int TreeSize(BTNode* root)
{
	if (root == NULL)
		return 0;
	else
		return 1+ TreeSize(root->_lchild) + TreeSize(root->_rchild);

}
int LeafSize(BTNode* root)
{
	if (root == NULL)
		return 0;
	if (root->_lchild == NULL && root->_rchild == NULL)
		return 1;
	return LeafSize(root->_lchild) + LeafSize(root->_rchild);

}
int TreeDeep(BTNode* root)
{
	if (root == NULL)
		return 0;
	if (root->_lchild == NULL && root->_rchild == NULL)
		return 1;
	return TreeDeep(root->_lchild) > TreeDeep(root->_rchild) ? TreeDeep(root->_lchild) + 1 : TreeDeep(root->_rchild) + 1;

}
int TreeLevelSize(BTNode* root, int k)
{
	if (root == NULL)
		return 0;
	if (k == 1)
		return 1;
	return TreeLevelSize(root->_lchild, k - 1) + TreeLevelSize(root->_rchild, k - 1);
}
BTNode* TreeFind(BTNode* root, char x)
{
	if (root == NULL)
		return NULL;
	if (root->val == x)
		return root;

	BTNode* findnode_left = TreeFind(root->_lchild, x);
	if (findnode_left)
		return findnode_left;

	BTNode* findnode_right = TreeFind(root->_rchild, x);
	if(findnode_right)
		return findnode_right;

	return NULL;
}
void DestoryTree(BTNode* root)
{
	if (root == NULL)
		return;
	DestoryTree(root->_lchild);
	DestoryTree(root->_rchild);
	free(root);

}

void level(BTNode* root)
{
	queue q;
	q._front = NULL;
	q._rear = NULL;//���еĳ�ʼ��

	BTNode* p;//��ת���
	QueuePush(&q, root);//��������ڵ�
	while (q._front != NULL)//���в��գ����г�����
	{
		p = QueuePop(&q);//����һ������һ����Ȼ�������ο������Һ����Ƿ���ڣ���������������
		printf("%c ", p->val);

		if (p->_lchild != NULL)
		{
			QueuePush(&q, p->_lchild);
		}
		if (p->_rchild != NULL)
		{
			QueuePush(&q, p->_rchild);
		}	
	}	
}

//����1����ȫ�����ز�����ȫ
int isCompleteTree(BTNode* root)
{
	queue q;
	q._front = NULL;
	q._rear = NULL;

	if (root == NULL)
		return 1;//��������ȫ������
	QueuePush(&q, root);
	while (q._front != NULL)
	{
		BTNode* midlle_node = QueuePop(&q);
		if (midlle_node == NULL)
			break;//���Ϊ�գ�˵����α�������
		QueuePush(&q, midlle_node->_lchild);
		QueuePush(&q, midlle_node->_rchild);
	}

	while (q._front != NULL)
	{
		BTNode* middle_front = QueuePop(&q);
		if (middle_front!=NULL)//�����벿�ֳ����˷ǿգ���ô�Ϳ϶�������ȫ������
		{
			return 0;
		}
	}
	return 1;

}