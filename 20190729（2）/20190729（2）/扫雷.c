#define _CRT_SECURE_NO_WARNINGS 1

#include "game.h"
void menu()
{
	printf("**********************\n");
	printf("********0.exit********\n");
	printf("********1.play********\n");
	printf("**********************\n");
}

void game()
{
	//����׵���Ϣ 
	char mine[ROWS][COLS] = { 0 };
	//�Ų����������Ϣ--��û���Ų�����Ļ���ӡ*
	char mineInfo[ROWS][COLS] = { 0 };
	//����û�в�����
	InitBoard(mine, ROWS, COLS, '0');
	//����û���Ų������ʱ�����
	InitBoard(mineInfo, ROWS, COLS, '*');
	//��ӡ��ά���� 
	//Show(mine, ROW, COL);
	Show(mineInfo, ROW, COL);
	//������ 
	SetMine(mine,ROW,COL);
	//Show(mine, ROW, COL);
	//����
	FindMine(mine,mineInfo,ROW,COL); 
	Show(mine, ROW, COL);
}


int main() 
{
	int input = 0;
	do
	{ 
		menu(); 
		printf("���������ѡ�� -��");
		scanf("%d", &input); 
		switch (input)
		{ 
		case 1: 
			game();
			break;
		case 0:
			printf("�˳���Ϸ\n");
			break; 
		default:
			printf("��������ȷ������\n");
			break;
		}
	} while (input);
	return 0; 
}