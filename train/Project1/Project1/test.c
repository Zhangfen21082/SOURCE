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


/*
#include <stdio.h>//���Լ��
int main()
{
	int a, b, r;

	scanf("%d %d", &a, &b);
	while (b != 0)//������һ����Ϊ0����һ�����������������Լ��
	{
		r = a % b;
		a = b;
		b = r;
	}
	printf("���Լ��%d\n", a);
	return 0;
}
*/
/*
int main()//����
{
	int year;
	printf("��������ݣ�");
	scanf("%d", &year);
	if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0)
		printf("%d������\n", year);
	else
		printf("%d��������\n", year);
	return 0;
}
*/

/*
int isPrime(int n)//����
{
	int i;
	for (i = 2; i <= (int)sqrt(n); i++)
	{
		if (n%i == 0)//��������
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
int count_number(int n)//9�ĸ���
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

/*x�������
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
int main()�����ֵ
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
	printf("���ֵΪ%d\n", max);
	return 0;

}
*/

/*
int main()//�žų˷���
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
	printf("��ʼ��Ϸ\n");
	int computer_number=computer_make();
	printf("�����Ѿ�����1-100�ڵ����֣����\n");
	int guess;
	int count = 0;
	do
	{
		count++;
		if (count > 10)
		{
			printf("���Գ���10�Σ�ʧ�ܣ�����%d\n", computer_number);
			break;
		}
		printf("\n");
		scanf("%d", &guess);

		if (guess > computer_number)
		{
			printf("����\n");
		}
		else if (guess < computer_number)
		{
			printf("С��\n");
		}
		else
		{
			printf("You win");
		}
		
	} while (guess != computer_number);

	if (count <= 10)
	{
		printf("������%d��\n", count-1);
	}
	
}

void menu()
{
	printf("*************��������Ϸ**********\n");
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
		printf("������:\n");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			game();
			break;
		case 0:
			printf("������Ϸ\n");
			exit(-1);
		default:
			printf("������������������\n");
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