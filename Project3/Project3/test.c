//����ַ��������ƶ������м���
//���ɣ�1.��Ҫ�����ַ�������
//      2.��ҪLeft��right
//	    3.ѭ���������ַ���ÿ�ζ�Ҫ����
//	    4.�������Left��1��Right��1��ֱ��Left=Right
#include<stdio.h>
#include<stdlib.h>
#include<Windows.h>
int main()
{
	int left = 0, right = 0;
	char arr1[] = "welcome to bit";
	char arr2[] = "**************";
	for (left = 0,right=strlen(arr1)-1; left <= right; left++,right--)
	{
		Sleep(500);
		arr2[left] = arr1[left];
		arr2[right] = arr1[right];
		printf("%s\n", arr2);

	}
	system("pause");
}

//�����¼�龰��ֻ�������Σ������˳�����
//���ɣ�1.��Ҫһ����������ʾ����
//      2.��forѭ������
//	  3.ÿ��ѭ����Ҫ�ж����������Ƿ���ȷ
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
	char arr[1024] = "123456";
	int i = 0; 
	for (i = 0; i < 3; i++)
	{
		printf("���������룺\n");
		scanf("%s",&arr);
		if (strcmp(arr, "123456") == 0)
			break;
	}
	if (i == 3)
		printf("exit\n");
	else
	    printf("log in\n");
	system("pause");
}

//����1!+2!+3!+...+10!�Ľ׳�
//���ɣ�1.�����׳˺�����forѭ����
//      2.���׳˺����ĵ�����ӣ�forѭ����
#include<stdio.h>
#include<stdlib.h>
int jiecheng(int n)
{
	int i = 0,result=1;
	for (i = 1; i <= n; i++)
	{
		result *= i;
	} 
	return result;
}

int main()
{
	int i = 0,sum=0;
	for (i = 1; i <= 10; i++)
	{
		sum += jiecheng(i);
	}
	printf("sum=%d\n",sum );
	system("pause");
}