//26.��һ�������е�ֵ��������.����,ԭ��Ϊ8,6,5,4,1.Ҫ���Ϊ ;1,4,5,6,8
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>

int main()
{
	int arr[5],i,left,right;
	for (i = 0; i < 5; ++i)
		scanf("%d", &arr[i]);
	for (left = 0,right = ( sizeof arr / sizeof arr[0] ) - 1; left < right; ++left,--right)
	{
		int tmp = arr[left];
		arr[left] = arr[right];
		arr[right] = tmp;
	}
	for (i = 0; i < 5; i++)
		printf("%d ", arr[i]);
	printf("\n");
	system("pause");
}

//27.���10���������
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#define ROW 6
#define COL 6

int main()
{
	int arr[ROW][COL];
	int row, col;
	for (row = 0; row < ROW; ++row)
	{
		for (col = 0; col < COL; ++col)
		{
			arr[row][0] = 1;
			arr[row][row] = 1;
		}
	}
	for (row = 2; row < ROW; ++row)
	{
		for (col = 1; col < row; ++col)
			arr[row][col] = arr[row - 1][col - 1] + arr[row - 1][col];
	}
	for (row = 0; row < ROW; ++row)
	{
		for (col = 0; col <= row; ++col)
			printf("%-2d ", arr[row][col]);
		printf("\n");
	}
	system("pause");
}

//28.���1-n��ƽ������Ȼ�����ɵ�"ħ����".ħ�����ÿһ�к�ÿһ���Լ��Խ��ߵĺͶ����.
//������ħ����
//�����㷨����:
#include<stdio.h>
#include<stdlib.h>
#define ROW 11
#define COL 11

int main()
{
	int arr[ROW][COL],row, col,m;
	for (row = 0; row < ROW; ++row)
	{
		for (col = 0; col <= COL; ++col)
			arr[row][col] = 0;
	}
	row = 0;
	col = COL / 2;
	arr[row][col] = 1;
	for (m = 2; m <= ROW * COL; ++m)
	{
		if ((row == 0) && (col != COL-1))
		{
			row = ROW - 1;
			col = col + 1;
			if (arr[row][col] != 0)
			{
				row = 1; col = col - 1;
				arr[row][col] = m;
			}
			else
				arr[row][col] = m;
		}
		else if ((row != 0) && (col == COL - 1))
		{
			row = row - 1;
			col = 0;
			if (arr[row][col] != 0)
			{
				row = row + 2;
				col = COL - 1;
				arr[row][col] = m;
			}
			else
				arr[row][col] = m;
		}
		else if ((row == 0) && (col == COL - 1))
		{
			row = ROW - 1; col = 0;
			if (arr[row][col] != 0)
			{
				row = ROW - 1;
				col = 0;
				if (arr[row][col] != 0)
				{
					row = 1; col = COL - 1;
					arr[row][col] = m;
				}
				else
					arr[row][col] = m;
			}
		}
		else
		{
			row = row - 1;
			col = col + 1;
			if (arr[row][col] != 0)
			{
				row = row + 2;
				col = col - 1;
				arr[row][col] = m;
			}
			else
				arr[row][col] = m;
		}
	}
	for (row = 0; row < ROW; ++row)
	{
		for (col = 0; col < COL; ++col)
			printf("%-5d ", arr[row][col]);
		printf("\n");
	}
	system("pause");
}

//�����벻�����㷨:
#include<stdio.h>
#include<stdlib.h>
#define ROW 3
#define COL 3

int main()
{
	int arr[ROW][COL] = { 0 };
	int row, col,i;
	row = 0;
	col = COL / 2;
	arr[row][col] = 1;
	for (i = 2; i <= ROW * COL; ++i)
	{
		row = (row - 1 + ROW) % ROW;
		col = (col + 1 + COL) % COL;
		if (arr[row][col] != 0)
		{
			row = (row + 2) % ROW;
			col = (col - 1 + COL) % COL;
		}
		arr[row][col] = i;
	}
	for (row = 0; row < ROW; ++row)
	{
		for (col = 0; col < COL; ++col)
			printf("%d ", arr[row][col]);
		printf("\n");
	}
	system("pause");
}

//29.�ҳ�һ����ά����İ���,����λ���ڸ������,�ڸ�����С.Ҳ����û�а���.
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#define ROW 4
#define COL 4

int main()
{
	int arr[ROW][COL];
	int row, r, col, c,tmp1,max,count=0;
	for (row = 0; row < ROW; ++row)
	{
		for (col = 0; col < COL; ++col)
			scanf("%d", &arr[row][col]);
	}
	for (row = 0; row < ROW; ++row)
	{
		tmp1 = row;
		max = arr[row][0];
		c = 0; r = 0;
		for (col = 0; col < COL; ++col)
		{
			if (max < arr[row][col])
			{
				max = arr[row][col];
				c = col; r = row;
			}
		}
		for (row = 0; row < ROW; ++row)
		{
			if (arr[r][c] > arr[row][c])
				break;
		}
		if (row == ROW)
		{
			printf("��ά����İ���Ϊ:%d,����Ϊ:row=%d,col=%d\n", max, r, c);
			++count;
			break;
		}
		row = tmp1;
	}
	if (count == 0)
		printf("�˶�ά�����ް���\n");
	system("pause");
}
