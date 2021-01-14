#pragma once
#include <stdio.h>;
#include <stdlib.h>;
#define Row 9
#define Col 9
#define Rows Row+2
#define Cols Col+2

void initBoard(char board[Rows][Cols],int rows,int cols,char set);//初始化放雷数组
void displayBoard(char board[Rows][Cols],int row,int col);//显示