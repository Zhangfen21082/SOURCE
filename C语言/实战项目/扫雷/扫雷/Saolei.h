#pragma once
#include <stdio.h>;
#include <stdlib.h>;
#include <time.h>;
#define Row 9
#define Col 9
#define Rows Row+2
#define Cols Col+2
#define EASY_COUNT 10

void initBoard(char board[Rows][Cols],int rows,int cols,char set);//��ʼ����������
void displayBoard(char board[Rows][Cols],int row,int col);//��ʾ
void setMine(char board[Rows][Cols], int row,int col);//������
//void FindMine(char mine[Rows][Cols], char show[Rows][Cols], int row, int col);//����
int get_mine_count(char board[Rows][Cols], int x, int y);
void FindMine2(char mine[Rows][Cols], char show[Rows][Cols], int row, int col, int win, int h, int z);