//#include "Seqlist.h"
//
//
//void test(Seqlist* ps)
//{
//	Seqlistinit(ps);//初始化
//
//	printf("尾插三个元素\n");
//	SeqlistpushBack(ps, 1);
//	SeqlistpushBack(ps, 2);
//	SeqlistpushBack(ps, 3);
//	Seqlistprint(ps);
//	printf("\n");
//
//	printf("尾删元素\n");
//	SeqlistpopBack(ps);
//	Seqlistprint(ps);
//	printf("\n");
//
//
//	printf("头插两个元素\n");
//	SeqlistpushFront(ps, 4);
//	SeqlistpushFront(ps, 5);
//	Seqlistprint(ps);
//	printf("\n");
//
//
//	printf("头删元素\n");
//	SeqlistpopFront(ps);
//	Seqlistprint(ps);
//	printf("\n");
//
//
//	printf("找到元素“1”\n");
//	SeqlistFind(ps, 1);
//	printf("\n");
//
//	printf("在第二个位置插入元素\n");
//	Seqlistinsert(ps, 2, 6);
//	Seqlistprint(ps);
//	printf("\n");
//
//	printf("删除第三个元素\n");
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