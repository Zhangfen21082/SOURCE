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
	printf("��Ϸ��ʼ\n");
	char mine[Rows][Cols] = {0};//����
	char show[Rows][Cols] = { 0 };//����
	initBoard(mine, Rows, Cols,'0');//��ʼ����������
	initBoard(show, Rows, Cols,'*');//��ʼ����������
	displayBoard(mine, Row, Col);//��ʾ
	displayBoard(show, Row, Col);//��ʾ
	
	
}
void test()
{
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