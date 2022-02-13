#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include "game.h"

void menu()
{
	printf("********************\n");
	printf("*****  1.play  *****\n");
	printf("*****  0.exit  *****\n");
	printf("********************\n");
}

void game()
{
	//�洢���� - ��ά����
	char board[ROW][COL];
	//��ʼ������
	InitBoard(board, ROW, COL);

	//��ӡ���̺���
	DisplayBoard(board, ROW, COL);
	char ret = 0;

	while (1)
	{
		//�������
		PlayerMove(board, ROW, COL);
		DisplayBoard(board, ROW, COL);
		//�ж�����Ƿ�Ӯ����Ϸ
		ret = IsWin(board, ROW, COL);
		if (ret != 'C')
			break;

		//��������
		ComputerMove(board, ROW, COL);
		DisplayBoard(board, ROW, COL);
		//�жϵ����Ƿ�Ӯ����Ϸ
		ret = IsWin(board, ROW, COL);
		if (ret != 'C')
			break;
	}
	if (ret == '*')
	{
		printf("���Ӯ�ˣ�\n");
	}
	else if (ret == '#')
	{
		printf("����Ӯ�ˣ�\n");
	}
	else
	{
		printf("ƽ�֣�\n");
	}

}
int main()
{
	int input = 0;
	srand((unsigned int)time(NULL));

	do
	{
		menu();
		printf("������:>");
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
			printf("�����������������\n");
			break;
		}
	} while (input);

	return 0;
}