#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>

#define ROW 3
#define COL 3

char g_map[ROW][COL];

void Game()
{

}

void Mnue()
{
	int choice = 0;
	printf("===============\n");
	printf("1.��ʼ��Ϸ\n");
	printf("0.������Ϸ\n");
	printf("===============\n");
	printf("\n");
	printf("-------------\n");
	for (int row = 0; row < ROW; ++row)
	{
		printf("| %c | %c | %c |\n", g_map[row][0], g_map[row][1], g_map[row][2]);
		printf("-------------\n");
	}
	while (1)
	{
		printf("\n���������ѡ��\n");
		scanf("%d", &choice);
		if (choice == 1)
			Game();
		else if (choice == 0)
		{
			printf("�˳���Ϸ\n");
			break;
		}
		else
			printf("��������������������룬ֻ������0(�˳���Ϸ����1����ʼ��Ϸ��\n");
	}
}

void Init()
{
	for (int row = 0; row < ROW; ++row)
	{
		for (int col = 0; col <= COL; ++col)
			g_map[row][col] = ' ';
	}
}

int main()
{
	Init();
	Mnue();
	system("pause");
}