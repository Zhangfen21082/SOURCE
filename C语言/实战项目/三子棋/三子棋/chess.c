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
	initboard(board, Row, Col);//初始化棋盘
	displayboard(board, Row, Col);//显示棋盘
	while (1)
	{
		playerboard(board, Row, Col);//用户下棋
		displayboard(board, Row, Col);
		ret = ISwin(board, Row, Col);
		if (ret != 'C')
			break;
		computerboard(board, Row, Col);//电脑下棋
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
		printf("平局\n");
	}
	




}


void test()
{
	int input = 0;
	srand((unsigned int)time(NULL));
	do
	{
		menu();
		printf("请选择");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			game();
			break;
		case 2:
			printf("退出游戏\n");
			exit(0);
			break;
			
		default:
			printf("非法输入，重新选择\n");
			break;
		}
	} while (input || input == 0);
}

int main()
{
	test();
}