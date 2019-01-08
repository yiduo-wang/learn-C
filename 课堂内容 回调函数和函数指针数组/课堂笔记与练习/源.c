#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

//����ָ���������Խ���Ȧ���Ӷ�
int add(int x, int y)
{
	return x + y;
}

int sub(int x, int y)
{
	return x - y;
}

int mul(int x, int y)
{
	return x * y;
}

int dav(int x, int y)
{
	return x / y;
}

void Strcat(char* str1, char* str2)
{
	char* start1 = str1;
	while (*start1)
		++start1;
	char* start2 = str2;
	while (*start2)
	{
		*start1 = *start2;
		++start1;
		++start2;
	}
	*start1 = '\0';
}

void Strcpy(char* str1, char* str2)
{
	char* start1 = str1;
	char* start2 = str2;
	char* end = str2 + strlen(str2) - 1;
	while (start2 <= end)
	{
		*start1 = *start2;
		++start1;
		++start2;
	}
	*start1 = '\0';
}

//int main()
//{
//	int choice = 2;
//	char str1[20];
//	char str2[20];
//	while (choice)
//	{	
//		void (*arr[2])(char*str1, char*str2) = { Strcat,Strcpy };
//		gets(str1);
//		gets(str2);
//		printf("choice=%d\n",choice);
//		(*arr[choice-1])(str1 , str2);
//		puts(str1);
//	}
//	system("pause");
//}

//����ָ�����Իص�����,�ص�����������ʹ�ö���ж���ʽ���еķ���,���ж���ʽ��дΪ����.

void Swap(int* x, int* y)
{
	int tmp = *x;
	*x = *y;
	*y = tmp;
}

void BubbleSort(int* arr, int size,int(*cmp)(int,int))
{
	int i = 0, j = 0;
	for (i = 0; i < size ; ++i)
	{
		for (j = size - 1; j > i; --j)
		{
			if (cmp(arr[j],arr[j-1])==1)
				Swap(&arr[j], &arr[j - 1]);
		}
	}
}

int Asc(int x, int y)
{
	return x < y ? 1 : 0;
}

int Desc(int x, int y)
{
	return x > y ? 1 : 0;
}

int main()
{
	int arr[10] = { 1,3,5,7,9,2,4,6,8,0 };
	int size = sizeof(arr) / sizeof(arr[0]);
	BubbleSort(arr, size, Asc);
	for (int i = 0; i < size; ++i)
		printf("%d ", arr[i]);
	BubbleSort(arr, size,Desc);
	printf("\n");
	system("pause");
}
