#ifndef __GAME__H_
#define __GAME__H_

#define ROW 3
#include <stdio.h>

void InitBoard(char board[][ROW], int row, int col, char set);
void ShowBoard(char board[][ROW], int row, int col);
void PlayerMove(char board[][ROW], int row, int col);
char IsWin(char board[][ROW], int row, int col);
static int IsFull(char board[][ROW], int row, int col);
void ComputerMove(char board[][ROW], int row, int col);
#endif 
