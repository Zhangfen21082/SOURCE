#include "sort.h"



void test()
{
	int a[] = { 9,1,2,5,7,4,8,6,3,5 };
	/*int a[100000] = {0};
	for (int i = 0; i < 100000; i++)
	{
		a[i] = 100000 - i;
	}*///������ʱ
	
	printf("ԭ����Ϊ��");
	print(a, sizeof(a) / sizeof(int));
	printf("\n");
	/*
	InsertSort(a, sizeof(a) / sizeof(int));
	printf("ֱ�Ӳ�������");
	print(a, sizeof(a) / sizeof(int));*/

	/*ShellSort(a, sizeof(a) / sizeof(int));
	printf("ϣ������");
	print(a, sizeof(a) / sizeof(int));*/



	//long start, end;
	//double duration;
	
	
	//start = clock();
	//
	//end = clock();
	//duration = (double)(end - start) / CLOCKS_PER_SEC;

	SelectSort(a, sizeof(a) / sizeof(int));
	printf("ֱ��ѡ������");
	print(a, sizeof(a) / sizeof(int));
	




}

int main()
{
	test();
}