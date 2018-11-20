#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<time.h>

#define ROW 10
#define COL 10
#define DEFAULT_MINE_COUNT 10

char g_show_map[ROW + 2][COL + 2];
char g_mine_map[ROW + 2][COL + 2];

int Menu()
{
	int choice = 0;
	printf("===============\n");
	printf("1.��ʼ��Ϸ\n");
	printf("0.������Ϸ\n");
	printf("����������ѡ��0��1����\n");
	scanf("%d", &choice);
	return choice;
}

void Init(char show_map[ROW+2][COL+2],char mine_map[ROW+2][COL+2])
{
	for (int row = 0; row <ROW+2; row++)
	{
		for (int col = 1; col <= COL+2; col++)
			g_show_map[row][col] = '*';
	}
	for (int row = 1; row <= ROW+2; row++)
	{
		for (int col = 1; col <= COL+2; col++)
			g_mine_map[row][col] = '0';
	}
	int mine_count = DEFAULT_MINE_COUNT;
	while (mine_count > 0)
	{
		int row = rand() % 10 + 1;
		int col = rand() % 10 + 1;
		if (g_mine_map[row][col] == 'M')
			continue;
		--mine_count;
	}

}

void Displaymap(char map[ROW+2][COL+2])
{
	printf("    ");
	for (int i = 1; i <= COL; ++i)
		printf("%d ", i);
	printf("\n");
	printf("   -------------------\n");
	printf("\n");
	for (int row = 1; row <= ROW; ++row)
	{
		printf("%2d| ");
		for (int col = 1; col <= COL; ++col)
			printf("%c ",map[row][col]);
	}
}

void Game()
{
	srand((unsigned)time(0));
	Init(g_show_map,g_mine_map);
	Displaymap(g_show_map);
	printf("������Ҫ�ƿ�λ�õ����꣺\n");
	while (1)
	{
		int row = 0, col = 0;
		scanf("%d %d", &row, &col);
		if ("row<=0||row>ROW||col<=0||col>COL")
		{
			printf("��������������������꣺");
			continue;
		}
		if (g_mine_map[row][col] == 'M')
		{
			Display(g_mine_map);
			printf("�����ˣ���Ϸ����\n");
			break;
		}

	}

}

void Start()
{
	while (1)
	{
		int choice = Menu();
		if (choice == 0)
		{
			printf("��Ϸ����\n");
			break;
		}
		Game();
	}
}

int main()
{
	Start();
	system("pause");
}