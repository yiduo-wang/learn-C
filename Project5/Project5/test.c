#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<windows.h>
#include<string.h>

int Odd(int i)
{
	if (i % 2 != 0)
		return 1;
	return 0;
}

int factorial(int n)
{
	int i = 1,result=1;
	for (i = 1; i <=n; i++)
		result *= i;
	return result;
}

int Binarysearch(int* arr, int to_find, int left, int right)
{
	int mid = 0;
	while (left <= right)
	{
		mid = (left + right) / 2;
		if ( to_find<arr[mid] )
			right = mid - 1;
		else if (to_find>arr[mid])
			left = mid + 1;
		else
		{
			return mid;
			break;
		}
	}
	return -1;
}

int Menu()
{
	int choice = 0;
	while (1)
	{
		printf("��ѡ���Ƿ�ʼ������Ϸ��1.��ʼ 0.����\n");
		scanf("%d", &choice);
		if (choice == 1)
		{
			return 1;
			break;
		}
		else if (choice == 0)
		{
			return 0;
			break;
		}
		else
			printf("���������룬ֻ������1��0!\n");
	}
}

void Game()
{	
	int gusse = 0;
	int cpt_rand_num = 0;
	srand((unsigned)time(0));
	cpt_rand_num = rand() % 100 + 1;
	while (1)
	{
		printf("���һ�����֣�\n");
		scanf("%d", &gusse);
		if (gusse > cpt_rand_num)
			printf("����\n");
		else if (gusse<cpt_rand_num)
			printf("����\n");
		else
		{
			printf("congratulations �¶���\n");
			break;
		}
	}
}

int main()
{
	int choice = 0;
	while (1)
	{
		choice = Menu();
		if (choice == 0)
		{
			printf("��Ϸ���� goodbye\n");
			break;
		}
		if (choice == 1)
		{
			printf("��ʼ��Ϸ welcome\n");
			Game();
		}
	}
	//char arr[100] = { "������" };
	//system("shutdown -s -t 60");
	//printf("��ĵ��Խ���1���Ӻ�ػ���������룺������������ȡ���ػ���");
	//while (1)
	//{
	//	printf("�����������룺\n");
	//	scanf("%s", &arr);
	//	if (strcmp(arr, "������") == 0)
	//	{
	//		printf("лл�������ĺ��������Թػ���ȡ��\n");
	//		system("shutdown -a");
	//		break;
	//	}
	//	 
	//}
	//int arr[] = { 1, 3, 4, 5, 6, 7, 8, 9 };
	//int left = 0;
	//int right = sizeof(arr) / sizeof(arr[0])-1;
	//printf("%d\n", Binarysearch(arr, 7, left, right));
	//int sum = 0;
	//for (int i = 1; i <= 10; i++)
	//	sum += factorial(i);
	//printf("%d\n",sum);
	//char psw[] = { "123456" };
	//int i = 0;
	//for (i = 0; i < 3; i++)
	//{
	//	printf("����������\n");
	//	scanf("%s", &psw);
	//	if (strcmp(psw, "123456") == 0)
	//	{
	//		printf("��½�ɹ�\n");
	//		break;
	//	}
	//}
	//if (i==3)
	//	printf("��½ʧ��\n");
	//char arr1[] = { "welcome to bit" };
	//char arr2[] = { "**************" };
	//{
	//	int left= 0,right=0;
	//	for (left = 0, right = strlen(arr2)-1; left <= right; left++, right--)
	//	{
	//		Sleep(500);
	//		arr2[left] = arr1[left];
	//		arr2[right] = arr1[right];
	//		printf("%s\n", &arr2);
	//	}
	//}
	//int ch = 0;
	//while ((ch = getchar()) != EOF)
	//{
	//	if (ch<'0' || ch>'9')
	//		break;
	//	else
	//		putchar(ch);
	//}


	//for (int i = 1; i <= 100; i++)
	//{
	//	if (Odd(i))
	//		printf("%d\t", i);
	//}
	system("pause");
}