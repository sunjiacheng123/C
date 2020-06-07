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
		printf("����ƶ�\n");
		printf("������1 - 3������:\n");
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
				printf("��ʾ���������Ѿ���ռ��\n");
			}
		}
		else
		{
			printf("�������겻�Ϸ�\n");
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
				return 0;//����û��
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
		if (board[i][0] == board[i][1] && board[i][1] == board[i][2] && board[i][0] != ' ')//��
		{
			return board[i][0];
		}
		if (board[0][i] == board[1][i] && board[1][i] == board[2][i] && board[0][i] != ' ')//��
		{
			return board[0][i];
		}
	}
	if (board[0][0] == board[1][1] && board[1][1] == board[2][2] && board[0][0] != ' ')//�Խ���
	{
		return board[0][0];
	}
	if(board[0][2] == board[1][1] && board[1][1] == board[2][0] && board[0][2] != ' ')//duijiaoxian
	{
		return board[0][2];
	}

	if (IsFull(board, row, col))
	{
		return 'Q';//�������� ƽ��
	}
	return ' ';//û��Ӯ  ����û��
}
void ComputerMove(char board[][ROW], int row, int col)
{

	while (1)
	{
		int x = rand() % 3;//���������
		int y = rand() % 3;
		printf("�����ƶ�\n");
		if (board[x][y]==' ')
		{
			board[x][y] = 'o';
			break;
		}
	}
}
