#pragma once
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define Row 3
#define Col 3


void initboard(char board[Row][Col],int row,int col);//ϴ��
void displayboard(char board[Row][Col], int row, int col);//��ʾ����
void playerboard(char board[Row][Col], int row, int col);//�������
void computerboard(char board[Row][Col], int row, int col);//��������

char ISwin(char board[Row][Col], int row, int col);//�ж���Ӯ