//1.ʵ��һ�����������������ַ����е�k���ַ��� 
//ABCD����һ���ַ��õ�BCDA
//ABCD���������ַ��õ�CDAB
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

void Rotation(char str[], int k)
{
	int i = 0, j = 0;
	int end = strlen(str) - 1;
	for (i = 0; i < k; ++i)
	{
		char tmp = str[0];
		for (j = 0; j < end; ++j)
			str[j] = str[j + 1];
		str[end] = tmp;
	}
}

int main()
{
	int k = 3;
	printf("\n��������Ҫ��ת���ַ���:\n");
	char str[10];
	gets(str);
	Rotation(str,k);
	puts(str);
	system("pause");
}

//2.�ж�һ���ַ����Ƿ�Ϊ����һ���ַ�����ת֮����ַ�����
//���磺����s1 = AABCD��s2 = BCDAA������1������s1 = abcd��s2 = ACBD������0.
//
//AABCD����һ���ַ��õ�ABCDA
//AABCD���������ַ��õ�BCDAA
//
//AABCD����һ���ַ��õ�DAABC
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int IsRotation(char str1[], char* str2)
{
	int i = 0,j=0;
	int k = strlen(str1);
	int end = k -1;
	for (i = 1; i <= k; ++i)
	{
		char tmp = str1[0];
		for (j = 0; j < end; ++j)
			str1[j] = str1[j+1];
		str1[end] = tmp;
		if (strcmp(str1, str2) == 0)
			return 1;
	}
	return 0;
}
int main()
{
	char str1[10];
	char str2[10];
	printf("����������ַ���:\n");
	gets(str1);
	gets(str2);
	printf("%d\n", IsRotation(str1, str2));
	system("pause");
}