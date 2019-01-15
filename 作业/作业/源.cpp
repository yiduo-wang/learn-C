#include<stdio.h>
#include<string.h>
#include<conio.h>
#include<windows.h>
#include<stdlib.h>
#define MAX 100
long long int speed = 0;//���Ƶл����ٶ� 
int position_x, position_y;//�ɻ�������λ�� 
int high, width;//��ͼ�Ĵ�С 
int bullet_x, bullet_y;//�ӵ���λ�� 
int enemy_x, enemy_y;//���˵�λ�� 
int map[MAX][MAX];
/*0��ʾ�հף�1��ʾս��*������2��ʾ����ս����λ�á�
3��ʾ����Χǽ��4��ʾ����Χǽ,5��ʾ�ӵ���λ��*/
int score;
void starup()//��ʼ�����е���Ϣ 
{
	high = 20;
	width = 30;
	position_x = high / 2;
	position_y = width / 2;
	bullet_x = 0;
	bullet_y = position_y;
	enemy_x = 2;
	enemy_y = position_y - 1;
	score = 0;

}
void startMap()
{
	int i, j;
	for (i = 1; i <= high - 1; i++)
	{
		map[i][1] = 4;
		for (j = 2; j <= width - 1; j++)
			map[i][j] = 0;
		map[i][width] = 4;
	}
	//�·�Χǽ�ĳ�ʼ�� 
	i = high;
	for (j = 1; j <= width; j++)
		map[i][j] = 3;

	map[bullet_x][bullet_y] = 5;
	/*������ս����С�ĳ�ʼ����ʼ*/
	map[position_x - 1][position_y] = 1;
	i = position_x;
	for (j = position_y - 2; j <= position_y + 2; j++)
		map[i][j] = 1;
	map[position_x + 1][position_y - 1] = 1;
	map[position_x + 1][position_y + 1] = 1;
	/***      ��ʼ������         **/

	/* ����ս���ĳ�ʼ�� */
	map[enemy_x][enemy_y] = 2;
	map[enemy_x - 1][enemy_y - 1] = 2;
	map[enemy_x - 1][enemy_y + 1] = 2;
	/* ����ս����ʼ������*/
}
void HideCursor()//���ع�� 
{
	CONSOLE_CURSOR_INFO cursor_info = { 1, 0 };
	SetConsoleCursorInfo(GetStdHandle(STD_OUTPUT_HANDLE), &cursor_info);
}
void gotoxy(int x, int y)//����һ������Ļ 
{
	HANDLE handle = GetStdHandle(STD_OUTPUT_HANDLE);
	COORD pos;
	pos.X = x;
	pos.Y = y;
	SetConsoleCursorPosition(handle, pos);
}
void updateWithoutInput()//�������޹صĸ��� 
{
	if (bullet_x > 0)
		bullet_x--;
	if ((bullet_x == enemy_x) && (bullet_y == enemy_y))//�����˵ķɻ�������ʱ 
	{
		score++;
		enemy_x = 0;
		enemy_y = rand() % width;
		bullet_x = 0;
	}
	if (enemy_x > high)//���ɻ��������� 
	{
		enemy_x = 0;
		enemy_y = rand() % width;
	}
	if (speed == 1)
		for (int i = 1; i <= 10000; i++)//�������Ƶл����ٶ� 
		{
			for (int j = 1; j <= 1000; j++)
			{
				speed = 1;
			}
		}
	speed = 0;
	if (speed == 0)
	{
		enemy_x++;
		speed = 1;
	}
}
void updateWithInput()//�������йصĸ��� 
{
	char input;
	if (kbhit())//��VC6.0++�£�Ϊ_kbhit()
	{
		input = getch();//��VC6.0++��Ϊ_getch();
		if (input == 'a')
			position_y--;
		if (input == 's')
			position_x++;
		if (input == 'd')
			position_y++;
		if (input == 'w')
			position_x--;
		if (input == ' ')
		{
			bullet_x = position_x - 1;
			bullet_y = position_y;
		}
	}
}
void show()//չʾ������ 
{
	gotoxy(0, 0);
	int i, j;
	for (i = 1; i <= high; i++)
	{
		for (j = 1; j <= width; j++)
		{
			if (map[i][j] == 0)
				printf(" ");
			if (map[i][j] == 1)
				printf("*");
			if (map[i][j] == 2)
				printf("#");
			if (map[i][j] == 3)
				printf("~");
			if (map[i][j] == 4)
				printf("|");
			if (map[i][j] == 5)
				printf("|");
		}
		printf("\n");
	}
	printf("\n��ĵ÷�:%d\n\n", score);
	printf("����˵��: ASDW�ֱ���� ���������ĸ����ƶ�\n");
	printf("**�ո��Ƿ����ӵ�**\n");
}
int main()
{
	starup();
	while (1)
	{
		HideCursor();
		startMap();
		show();
		updateWithoutInput();
		updateWithInput();
	}
	return 0;
}
