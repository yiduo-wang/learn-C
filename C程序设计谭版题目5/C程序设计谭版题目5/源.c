//30.�۰���ҷ�(15����)
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#define N 15

void BinarySearch(int* arr, int size, int num)
{
	int i=0,left = 0;
	int right = size - 1;
	while(left<=right)
	{
		int mid = (left + right) / 2;
		if (num < arr[mid])
			left=mid+1;
		if (num > arr[mid])
			right=mid-1;
		if (num == arr[mid])
		{
			printf("%d�������������,������ĵ�%d��Ԫ��\n", num, mid + 1);
			break;
		}
	}
	if (left > right)
		printf("�޴���\n");
}

int main()
{
	int arr[N];
	int i = 0,num=0;
	for (i = 0; i < N; ++i)
		scanf("%d", &arr[i]);
	int size = sizeof(arr)/sizeof(arr[0]);
	printf("������Ҫ��ѯ����:\n");
	scanf("%d", &num);
	BinarySearch(arr, size, num);
	system("pause");
}

//31.���5X5���Ǻ�ƽ���ı���
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
void Print(int blank,int height)
{
	int row = 0;
	for (row = 0; row < blank; ++row)
		printf(" ");
	for (row = 0; row <= height; ++row)
		printf("* ");
	printf("\n");
}

int main()
{
	int height = 5;
	int row = 0;
	for(row=0;row<height;++row)
		Print(row, height);
	system("pause");
}

//32.дһ�γ���,����1����ĸ��ɵ�26����ĸ,��i����ĸ��̵�(26-i+1)����ĸ,����ĸ����,A->Z,B->Y,a->z,b->y
#include<stdio.h>
#include<stdlib.h>

int main()
{
	char c = 0;
	while ((c = getchar()) != EOF)
	{
		if ('A' <= c && c <= 'Z')
			//'A' - putchar(c) + 26 �������putchar(c)ת������ĸ�ǵڼ�����ĸ
			//'A'+'A'-putchar(c)+26-1  �������putchar(c)ת������ĸ��˭
			putchar(2 * 'A' - c + 25);
		else if ('a' <= c && c <= 'z')
			putchar(2 * 'a' - c + 25);
		else
			continue;
	}
	system("pause");
}

//33.ʵ��strcat����,������ʹ��strcat����
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

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

int main()
{
	char str1[20]; char str2[20];
	gets(str1); gets(str2);//strlen(str1)+strlen(str2)+1<=str1��ʼ���Ĵ�С,��������[20];
	int length1 = strlen(str1);
	Strcat(str1, str2);
	puts(str1);
	system("pause");
}

//34.ʵ��strcmp����,����ֱ��ʹ��strcmp����,�ַ�����gets��������,������������߸�����ֵӦΪ�����ַ��Ĳ�ֵ
   //��'A'��'C'��Ƚ�,'A'-'C'=-2,�������-2,'E'��'D'��Ƚ�,'E'-'D'=1,�������1,���Ϊ0,�����0
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int Strcmp(char* str1, char* str2)
{
	char* start1 = str1;
	char* start2 = str2;
	while (*start1 && *start2)
	{
		if (*start1 - *start2 != 0)
			return *start1 - *start2;
		++start1; ++start2;
	}
	if(*start1)
		return *start1-'\0';
	else if(*start2)
		return '\0'-*start2;
	else
		return 0;
}

int main()
{
	char str1[20]; char str2[20];
	gets(str1); gets(str2);
	printf("%d\n",Strcmp(str1, str2));
	system("pause");
}

//35.ʵ��strcpy����,����ֱ��ʹ��strcpy����.
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

void Strcpy(char* str1, char* str2)
{
	char* start1 = str1;
	char* start2 = str2;
	while (*start2)
	{
		*start1 = *start2;
		++start1;
		++start2;
	}
	*start1 = '\0';
}

int main()
{
	char str1[20]; char str2[20];
	gets(str1);
	gets(str2);
	Strcpy(str1, str2);
	puts(str1);
	system("pause");
}

//36.������ѧ��������,������ȵ��ĸ���2��,���ĸ��ȵ�������2��,�������ȵڶ�����2��,�ڶ����ȵ�һ����2��
   //��һ��10��.
#include<stdio.h>
#include<stdlib.h>

int Age(int n)
{
	if (n == 1)
		return 10;
	else
		return 2 + Age(n - 1);
}

int main()
{
	int n = 5;
	printf("%d\n", Age(n));
	system("pause");
}

//37.�õݹ���n!
#include<stdio.h>
#include<stdlib.h>

int Factorial(int n)
{
	if (n == 1)
		return 1;
	else
		return n * Factorial(n - 1);
}

int main()
{
	int n = 5;
	printf("%d\n", Factorial(n));
	system("pause");
}