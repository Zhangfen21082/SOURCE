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
	for (i = 0; i <= col; i++)//�к�
	{
		printf("%d ", i);
	}
	printf("\n");
	for (i = 0; i <= col; i++)//�к��µĺ���
	{
		printf("��");
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
void setMine(char board[Rows][Cols], int row, int col)
{
	int count = EASY_COUNT;//count����
	while (count)
	{
		int x = rand() % row + 1;
		int y = rand() % col + 1;//��ΧΪ1-9;
		if (board[x][y] == '0')
		{
			board[x][y] = '1';
			count--;
		}

	}


}
int get_mine_count(char board[Rows][Cols], int x, int y)
{
	return
		board[x - 1][y - 1] +
		board[x - 1][y] +
		board[x - 1][y + 1] +
		board[x][y - 1] +
		board[x][y + 1] +
		board[x + 1][y - 1] +
		board[x + 1][y] +
		board[x + 1][y + 1]
		- 8 * '0';
}
/*void FindMine(char mine[Rows][Cols], char show[Rows][Cols], int row, int col)
{

	int win = 0;
	int x, y = 0;
	
	while (win<row*col-EASY_COUNT)
	{
		printf("�������������\n");
		scanf_s("%d%d", &x, &y);
		if (x >= 1 && x <= row && y >= 1 && y <= col)
		{
			//����Ϸ�
			if (mine[x][y] == '1')//��������
			{
				printf("You Lose!\n");
				displayBoard(mine, row, col);
				break;
			}
			else//�����ף�ͳ����Ϣ
			{

				int count = get_mine_count(mine, x, y);//�õ���λ����Χ���׵ĸ���
				if (count == 0)
				{
					show[x][y] = '@';
					
				}
				else
				{
					show[x][y] = count + '0';
				}


				
				displayBoard(show, row, col);
				win++;
				
			}
		}
		else
		{
			printf("����������������\n");
		}
	}

	if (win == row * col - EASY_COUNT)
	{
		printf("you win\n");
	}


}*/
void FindMine2(char mine[Rows][Cols], char show[Rows][Cols], int row, int col, int win, int h, int z)
{
	int x = h;
	int y = z;//���ڴ���������������ǵݹ鴫���ֵ������x��y����
	if (win == row * col - EASY_COUNT)
	{
		printf("you win\n");
	}
	else
	{
		int rec = get_mine_count(mine, x, y);//��һ�������Ҫ�û��������꣬���ǲ����Զ�չ��ʱ
		if (rec !=0 )
		{
			printf("�������������\n");
			scanf_s("%d%d", &x, &y);
		}
		
		if (x >= 1 && x <= row && y >= 1 && y <= col)
		{
			//����Ϸ�
			if (mine[x][y] == '1')//��������
			{
				printf("You Lose!\n");
				displayBoard(mine, row, col);
				exit(-1);
			}
			else//�����ף�ͳ����Ϣ
			{

				int count = get_mine_count(mine, x, y);//�õ���λ����Χ���׵ĸ���
				if (count == 0)
				{
					show[x][y] = '@';
					displayBoard(show, row, col);
					FindMine2(mine, show, row, col, win, x - 1, y - 1);
					FindMine2(mine, show, row, col, win, x - 1, y);
					FindMine2(mine, show, row, col, win, x - 1, y + 1);
					FindMine2(mine, show, row, col, win, x , y - 1);
					FindMine2(mine, show, row, col, win, x , y + 1);
					FindMine2(mine, show, row, col, win, x+1 , y - 1);
					FindMine2(mine, show, row, col, win, x+1, y);
					FindMine2(mine, show, row, col, win, x+1 , y + 1);


				}
				else
				{
					show[x][y] = count + '0';
				}



				displayBoard(show, row, col);
				win++;

			}
		}
		else
		{
			printf("����������������\n");
		}

	}

}