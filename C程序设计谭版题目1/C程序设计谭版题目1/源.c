//1.�����¶�ת�����¶�
#include<stdio.h>
#include<stdlib.h>

int main()
{
	int f = 1;
	for (; f <= 100; ++f)//1-100�����¶ȵ�ת��
		printf("f=%-3d c=%6.2f\n", f, 5.0 * (f - 32) / 9);
	system("pause");
}

//2.��a2+bx+c=0���̵ĸ�.b2-4ac>0.
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main()

{
	double a, b, c,p,q,x1,x2;
	scanf("%lf %lf %lf", &a, &b, &c);
	p = -b / (2 * a); q = (sqrt(b*b - 4 * a*c)) / (2 * a);
	x1 = p + q;
	x2 = p - q;
	printf("x1=%f x2=%f\n",x1,x2);
	system("pause");
}

//3.�ڼ���������һ��Сд��ĸ,���Ϊ���д��ĸ,�����д,Ϊ��Сд��ĸ
#include<stdio.h>
#include<stdlib.h>

int main()

{
	int a = 0;
	while (1)
	{
		a = getchar();
		if ('a' <= a && a <= 'z')
			putchar(a - 32);
		else if ('A' <= a && a <= 'Z')
			putchar(a + 32);
		else
			continue;
	}
	system("pause");
}

//4.������"China"�������,���������:��ԭ������ĸ������ĸ���ĸ����ԭ������ĸ.
#include<stdio.h>
#include<stdlib.h>

int main()

{
	while (1)
	{
		char a = getchar();
		if ('a' <= a && a <= 'v'||'A' <= a && a <= 'V')
			putchar(a + 4);
		if ('w' <= a && a <= 'z'||'W' <= a && a <= 'Z')
			putchar(a - 22);
		
		else
			continue;
	}
	system("pause");
}

//5.�������¾���
//     1 2 3  4  5
//     2 4 6  8  10
//     3 6 9  12 15
//     4 8 12 16 20
#include<stdio.h>
#include<stdlib.h>

int main()
{
	int row = 1;
	int col = 1;
	for (row = 1; row <= 4; ++row)
	{
		for (col = 1; col <= 5; ++col)
		{
			printf("%-2d ", row*col);
		}
		printf("\n");
	}

	system("pause");
}

//6.�æ�/4��1-1/3+1/5-1/7+...��ʽ��е�ֵ,ֱ����������ĳһ��ľ���ֵС��10��-6�η�Ϊֹ(ֹͣ�ۼ�)
#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main()
{
	double i = 1;
	double sum = 0;
	int num = 1;
	for (i = 1; fabs(num/i) >= 1e-6; i += 2)
	{
		sum += num / i;
		num = -num;
	}
	double pai = 4.0 * sum;
	printf("%10.8f", pai);
	system("pause");
}

//7.���쳲��������е�Ǯ40��
#include<stdio.h>
#include<stdlib.h>

int main()
{
	int i = 0, result = 0,pre=1,ppre=1;
	printf("%d %d ", pre, ppre);
	while (i < 40)
	{
		result = pre + ppre;
		ppre = pre;
		pre = result;
		printf("%d ", result);
		++i;
	}
	system("pause");
}

//8.��100-200֮�����������
#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int IsPrime(int x)
{
	int i = 1;
	for (i = 2; i <= sqrt(x); ++i)
	{
		if (x%i == 0)
			break;
	}
	if (i <= sqrt(x))
		return 0;
	else
		return 1;
}

int main()
{
	int i=100;
	for (i = 100; i <= 200; ++i)
	{
		if (IsPrime(i))
			printf("%d ",i);
	}
	system("pause");
}

//9.��������������m��n,�������Լ������С������
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>

void Max_yueshu(int x, int y)
{
	int i = 1,tmp=0;
	for (i = 1; i <= x; i++)
	{
		if (x%i == 0 && y%i == 0)
			tmp = i;
	}
	printf("���Լ��Ϊ:%d\n",tmp);
}

void Min_beishu(int x, int y)
{
	int i = 0,j=0,tmp1,tmp2;
	for ( i = 1; i <= x; ++i)
	{
		tmp1 = y * i;
		for (j = 1; j <= y; ++j)
		{
			tmp2 = x * j;
			if (tmp1 == tmp2)
				break;
		}
		if (tmp1 == tmp2)
			break;
	}
	printf("��С������Ϊ:%d\n",tmp1);
}

int main()
{
	int a, b;
	printf("��������������:\n");
	scanf("%d %d", &a, &b);
	if (a < b)
	{
		int tmp = a;
		a = b;
		b = tmp;
	}

	Max_yueshu(a, b);
	Min_beishu(a, b);
	system("pause");
}
