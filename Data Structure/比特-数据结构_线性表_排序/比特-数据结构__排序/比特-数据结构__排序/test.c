#include "sort.h"



void test()
{
	long start1, end1;
	long start2, end2;
	double duration1;
	double duration2;

	int a1[3000] = {0};
	int a2[3000] = { 0 };
	for (int i = 0; i <3000; i++)
	{
		a1[i] = i;
		a2[i] = i;
	}


	//for (int i = 0; i < 100000; i++)
	//{
	//	a2[i] = 100000 - i;
	//}
	//
	/*printf("原数组为：");
	print(a, sizeof(a) / sizeof(int));
	printf("\n");*/
	/*
	InsertSort(a, sizeof(a) / sizeof(int));
	printf("直接插入排序：");
	print(a, sizeof(a) / sizeof(int));*/

	/*QuickSort(a,0,(sizeof(a)/sizeof(int))-1);
	printf("快速排序：");
	print(a, sizeof(a) / sizeof(int));*/



	
	
	
	start1 = clock();
	InsertSort(a1, sizeof(a1) / sizeof(int));
	end1 = clock();
	duration1 = (double)(end1 - start1) / CLOCKS_PER_SEC;
	printf("简单插入排序用时%lf\n",duration1);

	start2 = clock();
	QuickSort(a2, 0, (sizeof(a2) / sizeof(int)) - 1);
	end2 = clock();
	duration2 = (double)(end2 - start2) / CLOCKS_PER_SEC;
	printf("快速排序用时%lf\n", duration2);


	
	




}

int main()
{
	test();
}