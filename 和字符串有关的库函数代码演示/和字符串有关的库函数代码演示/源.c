#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include<stdlib.h>
#include<assert.h>
#include <string.h>

int my_strlen1(char* str)
{
	//���õݹ�
	if (*str == '\0')
		return 0;
	return 1 + my_strlen1(str + 1);
}

int my_strlen2(char* str)
{
	//����ָ�����
	char* p = str;
	while(*str != '\0')
		++str;
	return str - p;
}

char* my_strcpy(char* destination, const char* source)
{
	char* start1 = destination;
	while (*source != '\0')
	{
		*start1 = *source;
		++start1;
		++source;
	}
	*start1 = '\0';
	return destination;
}

int my_strcmp(const char* str1, const char* str2)
{
	while (*str1 == *str2)
	{
		++str1;
		++str2;
	}
	if (*str1 > *str2)
		return 1;
	else if (*str1 == *str2)
		return 0;
	else
		return -1;
}

char* my_strcat(char* destination, const char* source)
{
	char* start = destination;
	while (*destination != '\0')
		++destination;
	while (*source != '\0')
	{
		*destination = *source;
		++destination;
		++source;
	}
	*destination = '\0';
	return start;
}

char* my_strstr(const char* str1, const char* str2)
{
	const char* p1 = str1;
	const char* p2 = str2;
	while (*p1 != '\0')
	{
		while (*str1 == *str2)
		{
			++str1;
			++str2;
		}
		if (*str2 == '\0')
			return p1;	
		++p1;
		str1 = p1;
		str2 = p2;
	}
	return NULL;
}

void* my_memcpy(void* destination, const void* source, size_t num)
{
	while (num > 0)
	{
		*(char*)destination = *(char*)source;
		--num;
		++(char*)destination;
		++(char*)source;
	}
}

void* my_memmove(void* destination, const void* source,size_t num)
{
	//�������غ�
	if ((char*)source < (char*)destination&&(char*)destination <= (char*)source + num)
	{
		(char*)destination = (char*)destination + num - 1;
		(char*)source = (char*)source + num - 1;
		while (num > 0)
		{
			*(char*)destination = *(char*)source;
			--num;
			--(char*)destination;
			--(char*)source;
		}
	}
	//������û�غ�
	else
	{
		while (num > 0)
		{
			*(char*)destination = *(char*)source;
			--num;
			++(char*)destination;
			++(char*)source;
		}
	}
}

char* my_strtok(char* str1, const char* str2)
{
	assert(str2 != NULL);
	static char* str1_tmp;
	if (str1 == NULL)
		str1 = str1_tmp;
	else//��ʼ��ֵ
		str1_tmp = str1;
	int cnt = 0;
	const char* str2_tmp = str2;
	while (*str1)
	{
		while (*str1_tmp != '\0' && *str2 != '\0' && *str1_tmp != *str2)//�ж��Ƿ�Ϊ�ָ���
			++str2;
		if (*str1_tmp == '\0')//��д����str1_tmp+1�����Ч�ַ���,ʹ��ָ��\0�ĺ���
		{
			*(str1 + cnt) = '\0';//����str1�еķָ������'\0'
			return str1;
		}

		if (*str1_tmp == *str2 && cnt != 0)//�����ָ���,����Ҫ��֤�����ַ�������ʼλ��
		{
			++str1_tmp;
			*(str1 + cnt) = '\0';
			return str1;
		}
		if (*str1_tmp == *str2 && cnt == 0)//�������ַ�����ʼλ�õķָ���
		{
			++str1_tmp;
			++str1;
			str2 = str2_tmp;
		}
		if (*str2 == '\0')//û�����ָ���
		{
			++str1_tmp;
			++cnt;//������str1����ʼλ�õ��ָ�����λ��,�൱�ڷָ������ڵ��±�
			str2 = str2_tmp;
		}
	}
	return NULL;
}


int main()
{

	char str[] = "= :hello>,wo?rd";
	char *p;
	printf("Ҫ�ָ���ַ�תΪ:\"%s\"\n�ָ�õ��ַ���Ϊ:\n", str);
	p = my_strtok(str, "= :>?");
	while (p != NULL)
	{
		printf("%s\n", p);
		p = my_strtok(NULL, "= :>?");
	}


	//char str[] = "123456";
	//memmove(str+1, str,7);
	//my_memmove(str + 1, str, 7);
	//puts(str+1);

	//char str1[] = "1455456789";
	//char str2[] = "456";
	//char str3[] = "457";
	//printf("%s\n", my_strstr(str1, str2));
	//printf("%s\n", my_strstr(str1, str3));

	//char str1[100];
	//char str2[40];
	//gets(str1);
	//gets(str2);
	//my_strcat(str1, str2);
	//puts(str1);

	//char str1[] = "123";
	//char str2[] = "24";
	//printf("%d\n", strcmp(str1, str2));
	//printf("%d\n", my_strcmp(str1, str2));

	//char str1[] = "Sample string";
	//char str2[40];
	//strcpy(str2, str1);
	//printf("str1: %s\nstr2: %s\n", str1,my_strcpy(str2, str1));

	//char str[256];
	//printf("��������Ҫ���㳤�ȵ��ַ���: ");
	//gets(str);
	//printf("������ַ���%s�ĳ���Ϊ:%lu\n", str,(unsigned)strlen(str));
	//printf("������ַ���%s�ĳ���Ϊ:%d\n", str, my_strlen1(str));
	//printf("������ַ���%s�ĳ���Ϊ:%d\n", str,my_strlen2(str));
	system("pause");
}
