//#include "Seqlist.h"
//
//
//void test(Seqlist* ps)
//{
//	Seqlistinit(ps);//��ʼ��
//
//	printf("β������Ԫ��\n");
//	SeqlistpushBack(ps, 1);
//	SeqlistpushBack(ps, 2);
//	SeqlistpushBack(ps, 3);
//	Seqlistprint(ps);
//	printf("\n");
//
//	printf("βɾԪ��\n");
//	SeqlistpopBack(ps);
//	Seqlistprint(ps);
//	printf("\n");
//
//
//	printf("ͷ������Ԫ��\n");
//	SeqlistpushFront(ps, 4);
//	SeqlistpushFront(ps, 5);
//	Seqlistprint(ps);
//	printf("\n");
//
//
//	printf("ͷɾԪ��\n");
//	SeqlistpopFront(ps);
//	Seqlistprint(ps);
//	printf("\n");
//
//
//	printf("�ҵ�Ԫ�ء�1��\n");
//	SeqlistFind(ps, 1);
//	printf("\n");
//
//	printf("�ڵڶ���λ�ò���Ԫ��\n");
//	Seqlistinsert(ps, 2, 6);
//	Seqlistprint(ps);
//	printf("\n");
//
//	printf("ɾ��������Ԫ��\n");
//	Seqlistdelete(ps, 3);
//	Seqlistprint(ps);
//	printf("\n");
//}
//
//int main()
//{
//	Seqlist S;
//	test(&S);
//}
#include <stdio.h>


int remove(int* nums, int numsSize)
{
	int slow = 0;
	int fast = 0;
	for (fast = 1; fast < numsSize; fast++)
	{
		if (nums[fast] != nums[slow])
		{
			slow++;
			nums[slow] = nums[fast];
		}

	}
	return slow;
}
int main()
{
	int nums2[] = {1,1,3};
	int ret = remove(nums2, 3);
	for (int i = 0; i < ret; i++) 
	{
		printf("%d ",nums2[i]);
	}


}