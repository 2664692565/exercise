#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include "game.h"
void game()
{
	char ret = 0;
	char board[POW][CLO];//��������
	init_board(board[POW][CLO], POW, CLO);//��ʼ������

	printf_board(board[POW][CLO], POW, CLO);//��ӡ����
	while (1)
	{
		play_board(board[POW][CLO], POW, CLO);//���ѡ��
		printf_board(board[POW][CLO], POW, CLO);//��ӡ����

		ret = is_win(board[POW][CLO], POW, CLO);
		if (ret != 'C')
		{
			break;
		}
		computer_board(board[POW][CLO], POW, CLO);//��������
		printf_board(board[POW][CLO], POW, CLO);//��ӡ����

		ret = is_win(board[POW][CLO], POW, CLO);

		if (ret != 'C')
		{
			break;
		}

	}
	if (ret == 'Q')
	{
		printf("˫��ƽ��\n");
	}
	else if (ret == '*')
	{
		printf("���Ӯ��\n");
	}
	else if (ret == '#')
	{
		printf("����Ӯ��\n");
	}
}

void menu()
{
	printf("**********          **********\n");
	printf("**********  1.play  **********\n");
	printf("**********  0.exit  **********\n");
	printf("**********          **********\n");
}

void test()
{
	int a = 0;
	do
	{
		menu();
		printf("��ѡ��\n");
		scanf("%d\n", &a);
		switch (a)
		{
		case 1:
			game();
			break;
		case 0:
			printf("���˳���Ϸ\n");
			break;
		default:
			printf("ѡ�����\n");
			break;
		}
	} while (a);
	

}

int main()
{
	test();
	return 0;
}