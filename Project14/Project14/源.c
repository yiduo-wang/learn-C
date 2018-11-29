#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<time.h>
#include<string.h>

void Print(int blank, int start)
{
	for (int i = 1; i <= blank; i++)
		printf(" ");
	for (int i = 1; i <= start; ++i)
		printf("*");
}

int Narc_num(int x)
{
	if (x >= 100)
	{
		int single = x % 10;
		int decade = (x / 10)%10;
		int hundreds = x / 100;
		if (x == (single*single*single) + (decade*decade*decade) + (hundreds*hundreds*hundreds))
			return 1;
		return 0;
	}
	
}

int CreateNum(int a, int n)
{
	if (a > 9 || a < 1 || n < 1)
		return 0;
	int num = 0;
	for (int i = 0; i < n; ++i)
	{
		num += a *(int) pow(10, i);
	}
	return num;
}

int Mnue()
{
	int choice = 0;
	printf("================\n");
	printf("1.��ʼ��Ϸ\n");
	printf("0.������Ϸ\n");
	printf("================\n");
	printf("���������ѡ�����ѡ��Ϊ1��ʼ��Ϸ\n                ���ѡ��Ϊ0�������Ϸ\n");
	while (1)
	{
		scanf("%d", &choice);
		if (choice != 1 && choice != 0)
		{
			printf("������������������������룬ֻ������1��0\n");
			continue;
		}
		else
			break;
	}
	return choice;
}

void Game()
{
	int cpt = rand()%100+1;
	int num = 0;
	while (1)
	{
		printf("��������µ�����\n");
		scanf("%d", &num);
		if (num > cpt)
			printf("�¸���\n");
		if (num == cpt)
		{
			printf("��ϲ�㣬�¶���\n");
			break;
		}
		if (num < cpt)
			printf("�µ���\n");
	}
}

void Start()
{
	srand((unsigned)time(0));
	while (1)
	{
		int choice = Mnue();
		if (choice == 0)
		{
			printf("��Ϸ����\n"); 
			break;
		}
		else
			Game();
	}
}

int BinarySearch(int* arr,int i,int num)
{
	int left = 0, right = i - 1;
	while (left <= right)
	{
		int mid = (left + right) / 2;
		if (arr[mid] < num)
		{
			left = mid + 1;
			continue;
		}
		if (arr[mid] == num)
			return mid;
		if (arr[mid] > num)
		{
			right = mid - 1;
			continue;
		}
	}
	return -1;
}

int main()
{
	char world = 0;
	while ((world = getchar()) != EOF)
	{
		if ('a' <= world && world <= 'z')
			putchar(world - ('a' - 'A'));
		else if ('A' <= world && world <= 'Z')
			putchar(world + ('a' - 'A'));
		else
			continue;
	}
	//int i = 0;
	//char psw[6] = "123456";
	//for (i = 0; i < 3; ++i)
	//{
	//	printf("����������\n");
	//	scanf("%s", &psw);
	//	if (strcmp(psw, "123456") == 0)
	//	{
	//		printf("��½�ɹ�\n");
	//		break;
	//	}
	//	else
	//		continue;

	//}
	//if (i == 3)
	//	printf("��¼ʧ��\n");

	//int num = 7;
	//int arr[9] = { 1,2,3,4,5,6,7,8,9 };
	//int i = sizeof(arr) / sizeof(arr[0]);
	//printf("%d\n", BinarySearch(arr, i,num));

	//Start();
	
	//int a = 1,sum=0;
	//for (int i = 1; i <= 5; i++)
	//{
	//		sum += CreateNum(a, i);
	//}
	//printf("%d\n", sum);


	//for (int i = 0; i <= 999; ++i)
	//{
	//	if (i < 100)
	//		continue;
	//	if(Narc_num(i))
	//		printf("%d\t",i);
	//}

	//int height = 7;
	//for (int row = 1; row <=height-1 ; ++row)
	//{
	//	Print(height - row, 2 * row - 1);
	//	printf("\n");
	//}
	//for (int i = 1; i <= 2 * height - 1; ++i)
	//{
	//	printf("*");
	//}
	//printf("\n");
	//for (int row = height-1; row >= 1; --row)
	//{
	//	Print(height - row, 2 * row - 1);
	//	printf("\n");
	//}
	system("pause");
}