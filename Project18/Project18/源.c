#include<stdio.h>
#include<stdlib.h>
#include<st.h>

int main()
{
	int num = 10;
	int* p = &num;
	if (p == NULL)//��ָ�룬��Чָ����������Ϊ�գ�
		          //����ȷ���Ƿ���Ч������Ϊ�գ���϶���Ч
	{

	}
	
	//char arr[] = "hehe";
	//char arr1[] = "hehe";

	//if (strcmp(arr1, arr) == 0)
	//	printf("ok\n");
	//else
	//	printf("faild\n");

	//int* p1 = arr;
	//int* p2 = arr;
	//if (arr1 == arr)
	//	printf("ok\n");
	//else
	//	printf("faild\n");

	//int* p1 = arr;
	//int* p2 = arr + 3;
	//printf("%d\n", p2-p1);

	//printf("%d\n", sizeof(arr));
	//printf("%d\n", sizeof(arr+1));

	//int a = 10;
	//double* p = 20;
	//p = p - 1;
	//printf("%p\n", p);
	//&ȡ��ַ����������ȡ��ĳ�������ĵ�ַ
	//%p�����ʽ���ַ�����ר��������ӡ��ַ��
	//printf("%p\n", p);
	//*�����ò�����(֪���ڴ淿��ţ���ȡ���ڴ�������Ӧ�ľ������ݣ�
	//printf("%d\n",*p);
	//int* p = 10;
	//printf("%d\n", *p);*p���ܴ�ӡ����

	//��ָ�룬���ܶ�Ҳ����д
	//int* p = NULL;0��NULL�ȼ�  

	system("pause");
}