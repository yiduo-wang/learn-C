//#include<stdio.h>
//#include<stdlib.h>
//#include<windows.h>
//	int main()
//	{
//		char arr1[] = "welcome to xi'an";
//		char arr2[] = "****************";
//		int left = 0;//���������һ��Ԫ�ص��±�
//		int right = strlen(arr2) - 1;//����������������һ��Ԫ�ص��±�
//		for (left = 0, right = strlen(arr2) - 1; left <= right; ++left, --right)
//		{
//			arr2[left] = arr1[left];
//			arr2[right] = arr1[right];
//			printf("%s\n", arr2);
//			Sleep(1000);//�����ִ�й���1000����(1��)
//		}
//		system("pause");
//	}

//#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//#include<string.h>
//#include<stdlib.h>
//int main()
//{
//	char psw[] = "123456";
//	char arr[6] = "";
//	int i = 0;
//	printf("�������������:\n");
//	for (i = 0; i < 3; ++i)
//	{
//		scanf("%s", arr);
//		if (strcmp(arr, psw) == 0)
//			break;
//		printf("�������,����������\n");
//	}
//	if (i == 3)
//		printf("��¼ʧ��\n");
//	else
//		printf("��½�ɹ�\n");
//	system("pause");
//}

//#include<stdio.h>
//#include<stdlib.h>
//int Factorial(int x)
//{
//	if (x == 1)
//		return 1;
//	int pro = 1;
//	int i = x;
//	for (i = x; i > 0; --i)
//		pro *= i;
//	return pro;
//}
//int main()
//{
//	int i = 1;
//	int sum = 0;
//	for (i = 1; i <= 3; ++i)
//		sum += Factorial(i);
//	printf("sun=%d\n", sum);
//	system("pause");
//}

//#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//#include<stdlib.h>
//void BinarySearch(int* arr, int right, int n)
//{
//	int left = 0;
//	int mid = 0;
//	while (left <= right)
//	{
//		mid = (left + right) / 2;
//		if (arr[mid] < n)
//			left = mid + 1;
//		else if (arr[mid] > n)
//			right = mid - 1;
//		else
//			break;
//	}
//	if (left <= right)
//		printf("�ҵ���,�±�Ϊ%d\n", mid);
//	else
//		printf("û�ҵ�\n");
//}
//
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	printf("��������Ҫ��ѯ������\n");
//	int n = 0;
//	scanf("%d", &n);
//	int right = sizeof(arr) / sizeof(arr[0]) - 1;
//	BinarySearch(arr, right, n);
//	system("pause");
//}

#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
	char str[] = "0";
	system("shutdown -s -t 6000");
	again:
	printf("��ĵ��Խ���10s�к�ػ�,����\"������\"ȡ��:\n");
	scanf("%s", str);
	if (strcmp(str, "������") == 0)
	{
		printf("�ػ�ȡ��\n");
		system("shutdown -a");
	}
	else
		goto again;
	system("pause");
}