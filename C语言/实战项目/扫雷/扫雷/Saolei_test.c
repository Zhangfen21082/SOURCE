#define _CRT_SECURE_NO_WARNINGS 1
#include "Saolei.h";

void menu()
{
	printf("*************************\n");
	printf("**********1.play*********\n");
	printf("**********0.exit*********\n");
	printf("*************************\n");

}
void game()
{
	int win = 0;
	int h= 0;
	int z = 0;
	int ret = 1;
	printf("��Ϸ��ʼ\n");
	char mine[Rows][Cols] = {0};//����
	char show[Rows][Cols] = { 0 };//����
	initBoard(mine, Rows, Cols,'0');//��ʼ����������
	initBoard(show, Rows, Cols,'*');//��ʼ����������
	printf("\n");
	printf("�׳�����\n");
	displayBoard(show, Row, Col);//��ʾ
	setMine(mine, Row, Col);//����
	displayBoard(mine, Row, Col);//��ʾ
	printf("�������������\n");//���ڵ�һ�α����û����룬����������������
	scanf_s("%d%d", &h, &z);
	

	FindMine2(mine, show, Row, Col,win,h,z);//����
	
	
}
void test()
{
	srand((unsigned int)time(NULL));
	int input = 0;
	do
	{
		menu();
		printf("��ѡ��:");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			game();
			break;
		case 0:
			printf("�˳���Ϸ\n");
			break;
		default:
			printf("�������\n");
			break;
		}
	} while (input);

}

int main()
{
	test();
	return 0;
}