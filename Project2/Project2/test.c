//1-100֮�������
#include<stdio.h>
#include<stdlib.h>
int main()
{
	for (int a = 100; a <= 200; a++)
	{
		int c = 0;
		for (int b = 2; b < a; b++)
		{
			if (a%b == 0)
				c = 1;
		}
		{
			if (c == 0)
				printf("%d\t", a);
		}
	}
	system("pause");
}


//����˷��ھ���
//���ɣ�1.ÿ�е�������������
//      2.��һ������Ϊ�������е�����
//	    3.�ڶ�������Ϊ�������е�����
#include<stdio.h>
#include<stdlib.h>
int main()
{
	{
		int row = 1, col = 1;
		for (row = 1; row <= 9; row++)
		{
			for (col = 1; col <= row; col++)
			{
				printf("%d*%d=%d\t", col, row, col*row);
			}
			printf("\n");
		}
		
	}
	system("pause");
}

