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
	printf("游戏开始\n");
	char mine[Rows][Cols] = {0};//放雷
	char show[Rows][Cols] = { 0 };//排雷
	initBoard(mine, Rows, Cols,'0');//初始化放雷数组
	initBoard(show, Rows, Cols,'*');//初始化排雷数组
	displayBoard(mine, Row, Col);//显示
	displayBoard(show, Row, Col);//显示
	
	
}
void test()
{
	int input = 0;
	do
	{
		menu();
		printf("请选择:");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			game();
			break;
		case 0:
			printf("退出游戏\n");
			break;
		default:
			printf("输入错误\n");
			break;
		}
	} while (input);

}

int main()
{
	test();
	return 0;
}