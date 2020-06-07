#ifndef __GAME__H_
#define __GAME__H_

#define ROW 9
#define COL 9

#define ROWS 11
#define COLS 11

#define A 20
void InitBoard(char board[][ROWS], int row, int col, char set);
void Show(char board[][ROWS], int row, int col);
void SetMine(char mine[][ROWS], int row, int col);
void FindMine(char mine[][ROWS], char mineInfo[][ROWS], int row, int col);
void Open_up(char my[ROWS][COLS], char show[ROWS][COLS], int row, int col, int x, int y);
#include <stdio.h>
#endif