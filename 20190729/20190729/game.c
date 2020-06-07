#define _CRT_SECURE_NO_WARNINGS 1
#include"game.h"
#include <stdlib.h>

void InitBoard(char board[][ROW], int row, int col, char set)
{
	int i = 0;
	int j = 0;
	for (i = 0; i < row; i++)
	{
		for (j = 0; j < row; j++)
		{
			board[i][j] = set;
		}
	}
}
void ShowBoard(char board[][ROW], int row, int col)
{
	int i = 0;
	int j = 0;
	for (i = 0; i < row; i++)
	{
		for (j = 0; j < col; j++)
		{
			printf(" %c ", board[i][j]);
			if (j < col - 1)
			{
				printf("|");
			}
		}
		printf("\n");
		if (i < row - 1)
		{
			
			for (j = 0; j < col ; j++)
			{
				printf("---");
				if (j <  col - 1)
				{
					printf("|");
				}
			}
			printf("\n");
		}
	}
}

void PlayerMove(char board[][ROW], int row, int col)
{
	int x, y;
	while (1)
	{
		printf("玩家移动\n");
		printf("请输入1 - 3的坐标:\n");
		scanf("%d%d", &x,&y);
		if (x > 0 && x <= 3 && y > 0 && y <= 3)
		{
			if (board[x - 1][y - 1] == ' ')
			{
				board[x - 1][y - 1] = 'x';
				break;
			}
			else
			{
				printf("提示：此坐标已经被占了\n");
			}
		}
		else
		{
			printf("输入坐标不合法\n");
		}

	}
}

static int IsFull(char board[][ROW], int row, int col)
{
	int i = 0, j = 0;
	for (i = 0; i < row; i++)
	{
		for (j = 0; j < col; j++)
		{
			if (board[i][j] == ' ')
			{
				return 0;//棋盘没满
			}
		}
	}
	return 1;
}

char IsWin(char board[][ROW], int row, int col)
{
	int i = 0;
	for(i = 0; i < row; i++)
	{
		if (board[i][0] == board[i][1] && board[i][1] == board[i][2] && board[i][0] != ' ')//行
		{
			return board[i][0];
		}
		if (board[0][i] == board[1][i] && board[1][i] == board[2][i] && board[0][i] != ' ')//列
		{
			return board[0][i];
		}
	}
	if (board[0][0] == board[1][1] && board[1][1] == board[2][2] && board[0][0] != ' ')//对角线
	{
		return board[0][0];
	}
	if(board[0][2] == board[1][1] && board[1][1] == board[2][0] && board[0][2] != ' ')//duijiaoxian
	{
		return board[0][2];
	}

	if (IsFull(board, row, col))
	{
		return 'Q';//棋盘满了 平局
	}
	return ' ';//没人赢  棋盘没满
}
void ComputerMove(char board[][ROW], int row, int col)
{

	while (1)
	{
		int x = rand() % 3;//生成随机数
		int y = rand() % 3;
		printf("电脑移动\n");
		if (board[x][y]==' ')
		{
			board[x][y] = 'o';
			break;
		}
	}
}
