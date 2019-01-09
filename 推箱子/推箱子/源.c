#include <stdio.h>  
#include <conio.h>
#include<stdlib.h> 

int map[9][11] = {
	{0,1,1,1,1,1,1,1,1,1,0},  //0����յ�
	{0,1,0,0,0,1,0,0,0,1,0},  //1����ǽ
	{0,1,0,4,4,4,4,4,0,1,0},  //3����Ŀ�ĵ�
	{0,1,0,4,0,4,0,4,0,1,1},  //4��������
	{0,1,0,0,0,0,0,0,4,0,1},  //5������ 
	{1,1,0,1,1,1,1,0,4,0,1},
	{1,0,8,3,3,3,3,1,0,0,1},  //2 3 4 5 6 7 8 9 1 0
	{1,0,3,3,3,3,3,0,0,1,1},
	{1,1,1,1,1,1,1,1,1,1,0} };

//���Ƶ�ͼ  //��ά����+switch()
void DrawMap()
{
	//������ά����  //0 ��ӡ�ո�  //1 ǽ   //3 Ŀ�ĵ�  //ʲô�ṹ?
	for (int i = 0; i < 9; i++)
	{
		for (int j = 0; j < 11; j++)
		{
			//if  else  switch
			switch (map[i][j])
			{
			case 0:
				printf("  ");
				break;
			case 1:
				printf("��");
				break;
			case 3:
				printf("��");
				break;
			case 4:
				printf("��");
				break;
			case 5:
				printf("��");  //5��
				break;
			case 7:     //4 + 3  ������Ŀ�ĵ���
				printf("��");
				break;
			case 8:     // 5 + 3  ����Ŀ�ĵص���   ��?
				printf("��");
				break;
			}
		}
		printf("\n");
	}
}


void PlayGame()
{
	int r, c;  //�˵��±�  //
	for (int i = 0; i < 9; i++)
	{
		for (int j = 0; j < 11; j++)
		{
			if (map[i][j] == 5 || map[i][j] == 8)   //i j �˵��±�?
			{
				r = i;
				c = j;
			}
		}
	}

	char ch;  //�ַ�����
	ch = getch();  //���̵����뱣�浽�ַ���
	// getch()     getchar()  ���ռ����ַ�
	// getch()ֱ�ӽ��� ����ʾ����   getchar()��ʾ���Ŀ����޸� enter������

	//���ݲ�ͬ�İ���  �ı䲻ͬ��ֵ. ��֧.
	switch (ch)
	{
	case 'W':  //W A S D����   72  80  75  77 �����ֵ ascii  windowVK_UP VK_TAB VK_RETUNE
	case 'w':
	case 72:
		if (map[r - 1][c] == 0 || map[r - 1][c] == 3)
		{
			map[r - 1][c] += 5;
			map[r][c] -= 5;
		}
		else if (map[r - 1][c] == 4 || map[r - 1][c] == 7)
		{
			if (map[r - 2][c] == 0 || map[r - 2][c] == 3)
			{
				map[r - 2][c] += 4;
				map[r - 1][c] += 1;
				map[r][c] -= 5;
			}
		}



		break;

	case 'S':  //enter����������  ȷ�� ����
	case 's':
	case 80:
		if (map[r + 1][c] == 0 || map[r + 1][c] == 3)
		{
			map[r + 1][c] += 5;
			map[r][c] -= 5;
		}
		else if (map[r + 1][c] == 4 || map[r + 1][c] == 7)
		{
			if (map[r + 2][c] == 0 || map[r + 2][c] == 3)
			{
				map[r + 2][c] += 4;
				map[r + 1][c] += 1;
				map[r][c] -= 5;
			}
		}
		break;

	case 'A':
	case 'a':
	case 75:
		if (map[r][c - 1] == 0 || map[r][c - 1] == 3)
		{
			map[r][c - 1] += 5;
			map[r][c] -= 5;
		}
		else if (map[r][c - 1] == 4 || map[r][c - 1] == 7)
		{
			if (map[r][c - 2] == 0 || map[r][c - 2] == 3)
			{
				map[r][c - 2] += 4;
				map[r][c - 1] += 1;
				map[r][c] -= 5;
			}
		}
		break;

	case 'D':
	case 'd':
	case 77:
		if (map[r][c + 1] == 0 || map[r][c + 1] == 3)
		{
			map[r][c + 1] += 5;
			map[r][c] -= 5;
		}
		else if (map[r][c + 1] == 4 || map[r][c + 1] == 7)
		{
			if (map[r][c + 2] == 0 || map[r][c + 2] == 3)
			{
				map[r][c + 2] += 4;
				map[r][c + 1] += 1;
				map[r][c] -= 5;
			}
		}
		break;
	}
}

//
int main()  //������
{
	while (1)
	{
		system("cls");
		DrawMap();
		PlayGame();
	}

	return 0;
}