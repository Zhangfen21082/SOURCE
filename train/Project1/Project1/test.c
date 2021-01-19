#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <math.h>
#include <time.h>
#include <stdlib.h>
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


/*
#include <stdio.h>//最大公约数
int main()
{
	int a, b, r;

	scanf("%d %d", &a, &b);
	while (b != 0)//当其中一个数为0，另一个数就是两数的最大公约数
	{
		r = a % b;
		a = b;
		b = r;
	}
	printf("最大公约数%d\n", a);
	return 0;
}
*/
/*
int main()//闰年
{
	int year;
	printf("请输入年份：");
	scanf("%d", &year);
	if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0)
		printf("%d是闰年\n", year);
	else
		printf("%d不是闰年\n", year);
	return 0;
}
*/

/*
int isPrime(int n)//素数
{
	int i;
	for (i = 2; i <= (int)sqrt(n); i++)
	{
		if (n%i == 0)//不是素数
			return 0;
	}
	return 1;
}

int main()
{
	int i;
	for (i = 100; i < 200; i++)
	{
		if (isPrime(i))
			printf("%d ",i);
	}
	return 0;

}
*/

/*
int count_number(int n)//9的个数
{
	int count = 0;
	while (n)
	{
		if (n % 10 == 9)
			count++;
		n /= 10;
	}
	return count;

}
int main()
{
	int i;
	static int counts = 0;
	for (i = 1; i <= 100; i++)
	{
		counts = counts + count_number(i);
	}
	printf("%d\n", counts);
	return 0;

}
*/

/*x分数求和
int main()
{
	int i;
	float sum = 0;
	int flag = 1;
	for (i = 1; i <= 100; i++)
	{
		sum=sum+(1.0/(flag*i));
		flag = -flag;
	}
	printf("%d \n", sum);

}
*/

/*
int main()求最大值
{
	int max;
	srand((unsigned int)time(NULL));
	int arr[10] = { 0 };
	for (int i = 0; i < 10; i++)
	{
		arr[i] = rand() % 100;
		printf("%d ", arr[i]);
	}
	printf("\n");
	max = arr[0];
	for (int i = 1; i < 10; i++)
	{
		if (arr[i] > max)
			max = arr[i];
	}
	printf("最大值为%d\n", max);
	return 0;

}
*/

/*
int main()//九九乘法表
{
	int i = 0;
	int j = 0;
	for (i = 1; i <= 9; i++)
	{
		for (j = 1; j <= i; j++)
		{
			printf("%-d*%d=%d ", i, j, i*j);
		}
		printf("\n");
	}

}
*/

/*
int computer_make()
{
	return rand() % 100 + 1;
}



void game()
{
	printf("开始游戏\n");
	int computer_number=computer_make();
	printf("电脑已经生成1-100内的数字，请猜\n");
	int guess;
	int count = 0;
	do
	{
		count++;
		if (count > 10)
		{
			printf("尝试超过10次，失败，答案是%d\n", computer_number);
			break;
		}
		printf("\n");
		scanf("%d", &guess);

		if (guess > computer_number)
		{
			printf("大了\n");
		}
		else if (guess < computer_number)
		{
			printf("小了\n");
		}
		else
		{
			printf("You win");
		}
		
	} while (guess != computer_number);

	if (count <= 10)
	{
		printf("尝试了%d次\n", count-1);
	}
	
}

void menu()
{
	printf("*************猜数字游戏**********\n");
	printf("******1.start*******0.exit******\n");
	printf("********************************\n");
}


void test()
{
	int input = 0;
	srand((unsigned int)time(NULL));
	do
	{
		menu();
		printf("请输入:\n");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			game();
			break;
		case 0:
			printf("结束游戏\n");
			exit(-1);
		default:
			printf("输入有误请重新输入\n");
			break;
		}
	} while (input);

}

int main()
{
	test();

}
*/

void test2()
{
	printf("sff");
}
void test1()
{
	test2();
}

void test()
{
	test1();
}
int main()
{
	test();
	return 0;

}