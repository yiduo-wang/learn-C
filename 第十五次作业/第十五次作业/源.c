//1.һ��������ֻ�����������ǳ���һ�Σ�
//�����������ֶ����������Ρ�
//�ҳ����������֣����ʵ�֡�
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>

int main()
{
	int i = 0,j=0,cnt=0;
	int arr[10];
	printf("������10������:\n");
	for (i = 0; i < 10; ++i)
		scanf("%d", &arr[i]);
	printf("û�гɶԳ��ֵ���������Ϊ: ");
	for (i = 0; i < 10; ++i)
	{
		for (j = 0; j < 10; ++j)
		{
			if (arr[i] - arr[j] == 0)
				++cnt;
		}
		if (cnt == 1)
			printf("%d ", arr[i]);
		cnt = 0;
	}
	printf("\n");
	system("pause");
}

//2.����ˮ��1ƿ��ˮ1Ԫ��2����ƿ���Ի�һƿ��ˮ��
//��20Ԫ�����Զ�����ˮ��
//���ʵ�֡�
#include<stdio.h>
#include<stdlib.h>

int Soda(int x)
{
	int cnt = 0, sum = 0;
	while (x >= 1)
	{
		if (x % 2 == 1)
			++cnt;
		sum += x / 2;
		x /= 2;
	}
	if (cnt >= 2)
		return sum+Soda(cnt);
	else
		return sum;
}

int main()
{
	int money = 20;
	int soda$ = 1;
	int bottle1 = money / soda$;
	printf("���Ժ�%dƿ��ˮ\n",bottle1+Soda(bottle1));
	system("pause");
}

//3.ģ��ʵ��strcpy
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

void Strcpy(char* str1, char* str2)
{
	char* start1 = str1;
	char* start2 = str2;
	char* end = str2 + strlen(str2)-1;
	while (start2 <= end)
	{
		*start1 = *start2;
		++start1;
		++start2;
	}
	*start1 = '\0';
}

int main()
{
	char str1[20];
	char str2[20];
	gets(str1);
	gets(str2);
	Strcpy(str1, str2);
	puts(str1);
	system("pause");
}

//4.ģ��ʵ��strcat
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

void Strcat(char* str1, char* str2)
{
	char* end = str1 + strlen(str1);
	char* start = str2;
	while (start < str2+strlen(str2))
	{
		*end = *start;
		++end;
		++start;
	}
	*end = '\0';
}

int main()
{
	char str1[50];
	char str2[30];
	gets(str1);
	gets(str2);
	Strcat(str1, str2);
	puts(str1);
	system("pause");
}