#pragma once
#include "chess.h"

void initboard(char board[Row][Col], int row, int col)
{
	for (int i = 0; i < row; i++)
	{
		for (int j = 0; j < col; j++)
		{
			board[i][j] = ' ';
		}
	}

}
void displayboard(char board[Row][Col], int row, int col)
{
	int i = 0;
	for (i = 0; i < row; i++)
	{
		int j = 0;
		for (j = 0; j < col; j++)
		{
			printf(" %c ", board[i][j]);
			if(j<col-1)
				printf("|");
		}
		printf("\n");
		for (j = 0; j < col; j++)
		{
			printf("---");
			if(j<col-1)
				printf("|");
		}
		printf("\n");
	}

}
void playerboard(char board[Row][Col], int row, int col)
{
	int x;
	int y;//��������
	printf("����\n");
	while (1)
	{
		printf("����������\n");
		scanf_s("%d%d", &x, &y);
		if (x >= 1 && x <= row && y >= 1 && y <= col)
		{
			if (board[x - 1][y - 1] == ' ')
			{
				board[x - 1][y - 1] = '*';
				break;
			}
			else
			{
				printf("�Ѿ���������\n");
			}
		}
		else
		{
			printf("�Ƿ����룬��������\n");
		}
	}
}
void computerboard(char board[Row][Col], int row, int col)
{
	int x = 0;
	int y = 0;
	printf("������\n");
	while (1)
	{
		x = rand() % row;
		y = rand() % col;
		if (board[x][y] == ' ')
		{
			board[x][y] = '#';
			break;
		}
	}


}
char ISwin(char board[Row][Col], int row, int col)
{
	int i = 0;
	int j = 0;
	for (i = 0; i < row; i++)//������
	{
		if (board[i][0] == board[i][1] && board[i][1] == board[i][2] && board[i][1] != ' ')
		{
			return board[i][1];
		}
	}
	for (i = 0; i < col; i++)//������
	{
		if (board[0][i] == board[1][i] && board[1][i] == board[2][i] && board[1][i] != ' ')
		{
			return board[1][i];
		}
	}
	if (board[0][0] == board[1][1] && board[1][1] == board[2][2] && board[1][1] != ' ')//���Խ���
	{
		return board[1][1];
	}
	if (board[2][0] == board[1][1] && board[1][1] == board[0][2] && board[1][1] != ' ')//���Խ���
	{
		return board[1][1];
	}

	for (i = 0; i < row; i++)
	{
		for (j = 0; j < col; j++)
		{
			if (board[i][j] == ' ')
			{
				return 'C';//���̻�û��������;
			}
		}
	}
	return 'Q';//���һ�������������
}