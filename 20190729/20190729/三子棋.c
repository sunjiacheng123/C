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
		printf("���Ӯ��\n");
	}
	else if (ret == 'x')
	{
		printf("����Ӯ��\n");
	}
	else if (ret == 'Q')
	{
		printf("ƽ��\n");
	}
}

int main()
{
	int input = 0;
	do
	{
		menu();
		printf("���������ѡ��");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			game();
			break;
		case 0:
			printf("��Ϸ�˳�\n");
			break;
		default:
			printf("��������ȷ�Ĳ���\n");
			break;
		}
	} while (input);
	return 0;
}