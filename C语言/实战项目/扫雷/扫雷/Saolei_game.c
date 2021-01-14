#include "Saolei.h"

void initBoard(char board[Rows][Cols], int rows, int cols,char set)
{
	int i = 0;
	int j = 0;
	for (i = 0; i < rows; i++)
	{
		for (j = 0; j < cols; j++)
		{
			board[i][j] = set;
		}
	}
}
void displayBoard(char board[Rows][Cols], int row, int col)
{
	int i = 0;
	int j = 0;
	for (i = 0; i <= col; i++)//列号
	{
		printf("%d ", i);
	}
	printf("\n");
	for (i = 0; i <= col; i++)//列号下的横线
	{
		printf("—");
	}
	printf("\n");
	for (int i = 1; i <=row; i++)
	{
		printf("%d", i);
		printf("|");
		for (int j = 1; j <=col; j++)
		{
			printf("%c ", board[i][j]);
		}
		printf("\n");
	}


}