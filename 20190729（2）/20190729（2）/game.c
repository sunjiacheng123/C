#define _CRT_SECURE_NO_WARNINGS 1
#include "game.h"


void InitBoard(char board[][ROWS], int row, int col, char set)
{
	int i = 0, j = 0;
	for (i = 0; i < row; i++)
	{
		for (j = 0; j < col; j++)
		{
			board[i][j] = set;
		}
	}
}



void Show(char board[][ROWS], int row, int col)
{
	int i=0, j=0;
	for (i = 0; i <= row; i++)
	{
		printf(" %d", i);
	}
	printf("\n");
	for (i = 1; i <= row; i++)
	{
		printf(" %d", i);
		for (j = 1; j <= col; j++)
		{
			printf(" %c", board[i][j]);
		}
		printf("\n");
	}

	printf("-----------------------\n");
}

void SetMine(char mine[][ROWS], int row, int col)
{
	int a = A;
	int x, y;
	while (a)
	{
		x = rand() % 9+1;
		y = rand() % 9+1;
		if (mine[x][y] = '0')
		{
			mine[x][y] = '1';
			a--;
		}	
	}
}


int Add(char mine[][ROWS], int x, int y)
{
	return (mine[x - 1][y - 1] - '0' + mine[x - 1][y] - '0' + mine[x - 1][y + 1] - '0' + mine[x][y - 1] - '0' + mine[x][y + 1] - '0' + mine[x + 1][y - 1] - '0' + mine[x + 1][y] - '0' + mine[x + 1][y + 1] - '0');
}

void Open_up(char mine[ROWS][COLS], char mineInfo[ROWS][COLS], int row, int col, int x, int y)
{
	int ret = Add(mine, x, y);
	if (ret == 0)
	{
		mineInfo[x][y] = ' ';
		if (x - 1>0 && y>0 && mineInfo[x - 1][y] == '*')
			Open_up(mine, mineInfo, row, col, x - 1, y);
		if (x - 1>0 && y + 1 <= col && mineInfo[x - 1][y + 1] == '*')
			Open_up(mine, mineInfo, row, col, x - 1, y + 1);
		if (x>0 && y + 1 <= col && mineInfo[x][y + 1] == '*')
			Open_up(mine, mineInfo, row, col, x, y + 1);
		if (x + 1 <= row && y + 1 <= col && mineInfo[x + 1][y + 1] == '*')
			Open_up(mine, mineInfo, row, col, x + 1, y + 1);
		if (x + 1 <= row && y>0 && mineInfo[x + 1][y] == '*')
			Open_up(mine, mineInfo, row, col, x + 1, y);
		if (x + 1 <= row && y - 1>0 && mineInfo[x + 1][y - 1] == '*')
			Open_up(mine, mineInfo, row, col, x + 1, y - 1);
		if (x>0 && y - 1>0 && mineInfo[x][y - 1] == '*')
			Open_up(mine, mineInfo, row, col, x, y - 1);
		if (x - 1>0 && y - 1>0 && mineInfo[x - 1][y - 1] == '*')
			Open_up(mine, mineInfo, row, col, x - 1, y - 1);
	}
	else
	{
		mineInfo[x][y] = Add(mine, x, y) + '0';
	}
}

void FindMine(char mine[][ROWS], char mineInfo[][ROWS], int row, int col)
{
	int x, y;
	int count=0;
	while (count != row*col)
	{
		printf("请输入坐标：");
		scanf("%d%d", &x, &y);
		if (mine[x][y] == '1')
		{
			printf("你被炸死了\n");
			break;
		}
		else
		{
			int ret = Add(mine, x, y);
			mineInfo[x][y] = ret + '0';
			Open_up(mine , mineInfo, row, col, x, y);
			Show(mineInfo, ROW, COL);
			count++;
		}
	}
}
