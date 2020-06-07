#define _CRT_SECURE_NO_WARNINGS 1
#include "game.h"
void menu()
{
	printf("*********************\n");
	printf("********0.exit*******\n");
	printf("********1.play*******\n");
	printf("*********************\n");
}

void game()
{
	char board[3][3] = { 0 };
	InitBoard(board, ROW, ROW,' ');
	ShowBoard(board, ROW, ROW);
	char ret = 0;
	while (1)//
	{
		PlayerMove(board, ROW, ROW);
		ret=IsWin(board, ROW, ROW);
		if (ret != ' ')
		{
			break;
		}
		ShowBoard(board, ROW, ROW);
		ComputerMove(board, ROW, ROW);
		ret = IsWin(board, ROW, ROW);
		if (ret != ' ')
		{
			break;
		}
		ShowBoard(board, ROW, ROW);
	}
	if (ret == 'x')
	{
		printf("玩家赢了\n");
	}
	else if (ret == 'x')
	{
		printf("电脑赢了\n");
	}
	else if (ret == 'Q')
	{
		printf("平局\n");
	}
}

int main()
{
	int input = 0;
	do
	{
		menu();
		printf("请输入你的选择：");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			game();
			break;
		case 0:
			printf("游戏退出\n");
			break;
		default:
			printf("请输入正确的操作\n");
			break;
		}
	} while (input);
	return 0;
}