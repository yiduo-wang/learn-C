//���ֲ��ҷ�
#include<stdio.h>
#include<stdlib.h>
int Binarysearch(int* arr,int key,int left,int right )
{
	int mid = 0;
	while (left <= right)
	{
		mid = (left + right) / 2;
		if (arr[mid] < key)
			left=mid+1;
		else if (arr[mid]>key)
			right = mid - 1;
		else
			return mid;
	}
	return -1;
}
int main()
{
	int arr[] = { 1, 2, 3, 4, 5, 6 };
	int left = 0;
	int right = (sizeof(arr) / sizeof(arr[0])) - 1;
	printf("%d\n",Binarysearch(arr,6,left,right));
	system("pause");
}

//�ػ�����
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<Windows.h>
int main()
{
	char input[1024] = { 0 };
	system("shutdown -s -t 120");
	while (1)
	{
		printf("��ĵ��Խ���120s��ػ���������룺����������ȡ���ػ�\n");
		scanf("%s", &input);
		if (strcmp(input, "������") == 0)
		{
			system("shutdown -a");
			break;
		}

	}
	system("pause");
	return 0;
}

//��������Ϸ
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int Menu()
{
	int choice = 0;
	printf("1.��ʼ��Ϸ     2.�˳���Ϸ\n����������ѡ��\n");
	scanf("%d", &choice);
	return choice;
}
void Game()
{
	int input = 0;
	srand((unsigned)time(0));  //������һ��ʱ�����ʹ�����������ÿ�ε�һ������ʱ���Գ�ʼ����
	int cpt_rand_num= rand() % 100 + 1;   //���Ը��������Ϊ1-100
	while (1)
	{
		printf("������һ������\n");
		scanf("%d", &input);
		if (input > cpt_rand_num)
			printf("����\n");
		else if (input < cpt_rand_num)
			printf("����\n");
		else
		{
			printf("congratulations  �¶���\n");
			break;
		}
	}
}
int main()
{
	while (1)
	{
		int choice = 0;
		choice = Menu();  //��½����
		if (choice == 1)
		{
			printf("��ʼ��Ϸ welcome\n");
			Game();   //��Ϸ��ʼ����
		}
		if (choice == 2)
		{
			printf("�˳���Ϸ goodbye\n");
			break;
		}
	}
	system("pause");
}