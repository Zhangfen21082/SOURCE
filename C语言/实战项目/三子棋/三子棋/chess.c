#define _CRT_SECURE_NO_WARNINGS 1
#include "chess.h"

void menu()
{
	printf("*****************************\n");
	printf("*******1.play   2.exit*******\n");
	printf("*****************************\n");
}

void game()
{
	char ret = 0;
	char board[Row][Col] = { 0 };
	initboard(board, Row, Col);//��ʼ������
	displayboard(board, Row, Col);//��ʾ����
	while (1)
	{
		playerboard(board, Row, Col);//�û�����
		displayboard(board, Row, Col);
		ret = ISwin(board, Row, Col);
		if (ret != 'C')
			break;
		computerboard(board, Row, Col);//��������
		displayboard(board, Row, Col);
		ret = ISwin(board, Row, Col);
		if (ret != 'C')
			break;
	}
	if (ret == '*')
	{
		printf("You win!\n");
	}
	else if (ret == '#')
	{
		printf("computer win!\n");
	}
	else
	{
		printf("ƽ��\n");
	}
	




}


void test()
{
	int input = 0;
	srand((unsigned int)time(NULL));
	do
	{
		menu();
		printf("��ѡ��");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			game();
			break;
		case 2:
			printf("�˳���Ϸ\n");
			exit(0);
			break;
			
		default:
			printf("�Ƿ����룬����ѡ��\n");
			break;
		}
	} while (input || input == 0);
}

int main()
{
	test();
}