#include "SeqList.h"

void SeqListInit(SeqList* ps)//��ʼ��
{
	/*Ҳ������������
	s.Size = 0;
	s.Array = NULL;
	s.Capacity = 0;
	*/
	ps->Array = (SLDataType*)malloc(sizeof(SLDataType) * 4);
	if (ps->Array == NULL)
	{
		printf("����ʧ��\n");
		exit(-1);
	}
	ps->Size = 0;
	ps->Capacity = 4;
}
void SeqListDestory(SeqList* ps)//����
{
	free(ps->Array);
	ps = NULL;
	ps->Capacity = ps->Size = 0;
}
void SeqListPrint(SeqList* ps)//��ӡ
{
	assert(ps);
	for (int i = 0; i < ps->Size; ++i)
	{
		printf("%d ", ps->Array[i]);
	}
	printf("\n");


}
void SeqListCheckCapacity(SeqList* ps)//��������Ƿ�����
{
	if (ps->Size == ps->Capacity)
	{
		ps->Capacity *= 2;
		ps->Array = (SLDataType*)realloc(ps->Array, sizeof(SLDataType)*ps->Capacity);
		if (ps->Array == NULL)//����ʧ��
		{
			printf("����ʧ��\n");
			exit(-1);
		}
	}
	

}

void SeqListPushBack(SeqList* ps, SLDataType x)//β��
{
	/*β�����sizeλ���ϵĲ���
	assert(ps);//���棬ָ��Ϊ��
	SeqListCheckCapacity(ps);//���˾�����
	ps->Array[ps->Size] = x;//size��ʾ��Ч��������ͬʱ����һ��Ԫ�ص��±�
	ps->Size++;//Ԫ�ؼ�1
	*/
	SeqListInsert(ps,ps->Size, x);
}
void SeqListPopBack(SeqList* ps)//βɾ��
{
	assert(ps);
	ps->Size--;

}
void SeqListPushFront(SeqList* ps, SLDataType x)//ͷ��
{
	/*ͷ����0λ���ϵĲ���
	assert(ps);
	SeqListCheckCapacity(ps);//���˾�����
	for (int i = ps->Size-1; i >= 0; i--)//ͷ�巨�������һ��Ԫ�ؿ�ʼ����������ƣ���0��λ�ÿճ���
	{
		ps->Array[i+1] = ps->Array[i];
	}
	ps->Array[0] = x;
	ps->Size++;
	*/
	SeqListInsert(ps, 0, x);

}
void SeqListPopFront(SeqList* ps)//ͷɾ
{
	/*ͷɾ��0λ�õ�ɾ��
	assert(ps);
	for (int i = 0; i < ps->Size; i++)
	{
		ps->Array[i] = ps->Array[i + 1];//ɾ��ʱֱ�Ӹ��Ǽ���
	}
	ps->Size--;
	*/
	SeqListErase(ps, 0);
	

}
void SeqListInsert(SeqList* ps, int pos, SLDataType x)//����λ�ò���
{
	assert(ps);
	assert(pos <= ps->Size && pos>= 0);//����λ������
	SeqListCheckCapacity(ps);
	for (int i = ps->Size - 1; i >= pos; i--)//�Ӳ���λ���Ժ��������Ų��
	{
		ps->Array[i + 1] = ps->Array[i];
	}
	ps->Array[pos] = x;
	ps->Size++;

}
void SeqListErase(SeqList* ps, int pos)//����λ��ɾ��
{
	assert(ps);
	assert(pos < ps->Size && pos >= 0);//ɾ��λ������
	for (int i = pos; i < ps->Size; i++)
	{
		ps->Array[i] = ps->Array[i + 1];
	}
	ps->Size--;
}

int  SeqListFind(SeqList* ps, SLDataType x)//˳����ҷ�
{
	assert(ps);
	int i = 0;
	while (i<ps->Size)
	{
		if (ps->Array[i] == x)
			return i;
		++i;
	}
	return -1;


}
int  SeqListFindvalue_Bind(SeqList* ps, int pos)//���ֲ��ҷ�
{
	int low = 0;
	int high = ps->Size - 1;
	while (low < high)
	{
		int mid = (low + high) / 2;
		if (pos < ps->Array[mid])
			high = mid - 1;
		else if (pos > ps->Array[mid])
			low = mid + 1;
		else
			return mid;
	}
}