#pragma once
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define Row 3
#define Col 3


void initboard(char board[Row][Col],int row,int col);//Ï´ÅÆ
void displayboard(char board[Row][Col], int row, int col);//ÏÔÊ¾ÆåÅÌ
void playerboard(char board[Row][Col], int row, int col);//Íæ¼ÒÏÂÆå
void computerboard(char board[Row][Col], int row, int col);//µçÄÔÏÂÆå

char ISwin(char board[Row][Col], int row, int col);//ÅĞ¶ÏÊäÓ®