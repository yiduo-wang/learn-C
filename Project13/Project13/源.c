#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
//����
//����������һ���߻�ʤ
//���Ժ����
//����������꣬���������������ӵĵط�

#define ROW 3
#define COL 3
char g_board[ROW][COL];

void Init()
{
	srand((unsigned)time(0));
	for (int row = 0; row < ROW; row++)
	{
		for (int col = 0; col < COL; col++)
			g_board[row][col] = ' ';
	}
}

void Print()
{
	printf("____________\n");
	for (int row = 0; row < ROW; row++)
	{
			printf("| %c | %c | %c |\n", g_board[row][0],g_board[row][1],g_board[row][2]);
		    printf("|___|___|___|\n");
	}
	printf("\n");
}

void PlayerMove()
{
	printf("���������\n");
	printf("������������꣺��row��col��\n");
	int row, col;
	while (1)
	{
		scanf("%d,%d", &row, &col);
		if (row<0 || row>ROW || col<0 || col>COL)
		{
			printf("����������������������������꣺\n");
			continue;
		}
		if (g_board[row][col] != ' ')
		{
			printf("��ǰλ�������ӣ�����������������꣺\n");
			continue;
		}
		g_board[row][col] = 'X';
		break;
	}

}

void ComputerMove()
{
	printf("���������\n");
	while (1)
	{
		//srand((unsigned)time(0)); ���������ѭ��������������ӣ���Ϊcontinueִ�е��ٶ�̫�죬1sdou�����ᵽ������ʱ���û�иı䣬����������Ӳ����
		int row = 0, col = 0;
		row = rand() % ROW;
		col = rand() % COL;
		printf("%d,%d\n", row, col);
		if (g_board[row][col] != ' ')
		{
			printf("��ǰλ�������ӣ�����������������꣺\n");
			continue;
		}
		g_board[row][col] = 'O';
		break;
	}

}

char CheakWinner()
{
	int row = 0, col = 0;;
	//����С��С��Խ����Ƿ�ȫΪ��X����ȫΪ��O��
	//����У�
	for (row = 0; row < ROW; row++)
	{
		if (g_board[row][0] == g_board[row][1] && g_board[row][0] == g_board[row][2] && g_board[row][0] != ' ')
			return g_board[row][0];
	}
	//����У�
	for (col = 0; col < COL; col++)
	{
		if (g_board[0][col] == g_board[1][col] && g_board[0][col] == g_board[2][col] && g_board[0][col] != ' ')
			return g_board[0][col];
	}
	//��������Խ��ߣ�
	if (g_board[0][0] == g_board[1][1] && g_board[0][0] == g_board[2][2] && g_board[0][0] != ' ')
		return g_board[0][0];
	if (g_board[0][2] == g_board[1][1] && g_board[0][2] == g_board[2][0] && g_board[0][2] != ' ')
		return g_board[0][2];
	//�ж��Ƿ���壺
	for (row = 0; row < ROW; row++)
	{
		for (col = 0; col < COL; col++)
		{
			if (g_board[row][col] == ' ')
			{
				return ' ';
				break;
			}
		}
	}
	if (row == col)
		return 'Q';

}

int main()
{
	//���̳�ʼ��
	Init();
	char winner;
	while (1)
	{
		//��ӡһ������
		Print();
		//�������
		PlayerMove();
		winner = CheakWinner();
		//��� 'X' ��һ�ʤ
		//����� ��ʤ��δ�ּ�����Ϸ
		//��� 'Q' ��ʾ����
		if (winner != ' ')
		{
			Print();
			break;
		}
		ComputerMove();
		//��� 'O' ���Ի�ʤ
		//����� ��ʤ��δ�ּ�����Ϸ
		//��� 'Q' ��ʾ����
		winner = CheakWinner();
		if (winner != ' ')
		{
			Print();
			break;
		}
	}
	if (winner == 'X')
		printf("��һ�ʤ\n");
	if (winner == 'Q')
		printf("ƽ��\n");
	if (winner == 'O')
		printf("���Ի�ʤ\n");
	system("pause");
}