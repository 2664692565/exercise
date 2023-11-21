#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include "game.h"
void game()
{
	char ret = 0;
	char board[POW][CLO];//创建棋盘
	init_board(board[POW][CLO], POW, CLO);//初始化棋盘

	printf_board(board[POW][CLO], POW, CLO);//打印棋盘
	while (1)
	{
		play_board(board[POW][CLO], POW, CLO);//玩家选择
		printf_board(board[POW][CLO], POW, CLO);//打印棋盘

		ret = is_win(board[POW][CLO], POW, CLO);
		if (ret != 'C')
		{
			break;
		}
		computer_board(board[POW][CLO], POW, CLO);//电脑下棋
		printf_board(board[POW][CLO], POW, CLO);//打印棋盘

		ret = is_win(board[POW][CLO], POW, CLO);

		if (ret != 'C')
		{
			break;
		}

	}
	if (ret == 'Q')
	{
		printf("双方平局\n");
	}
	else if (ret == '*')
	{
		printf("玩家赢了\n");
	}
	else if (ret == '#')
	{
		printf("电脑赢了\n");
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
		printf("请选择\n");
		scanf("%d\n", &a);
		switch (a)
		{
		case 1:
			game();
			break;
		case 0:
			printf("已退出游戏\n");
			break;
		default:
			printf("选择错误\n");
			break;
		}
	} while (a);
	

}

int main()
{
	test();
	return 0;
}