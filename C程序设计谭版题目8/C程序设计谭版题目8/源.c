//52.������a��n�������෴��˳���ŷ�
//#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//#include<stdlib.h>
//#define n 10
//
//void Reverse(int* a, int N)
//{
//	int i = 0;
//	int *left = a;
//	int *right = a + N-1;
//	while (left < right)
//	{
//		int tmp = *left;
//		*left = *right;
//		*right = tmp;
//		--right;
//		++left;
//	}
//	for (i = 0; i < N; ++i)
//		printf("%d ", a[i]);
//	printf("\n");
//}
//
//int main()
//{
//	int i=0;
//	int a[n];
//	printf("������10������:");
//	for (i = 0; i < n; ++i)
//		scanf("%d", &a[i]);
//	Reverse(a, n);
//	system("pause");
//}

//53.��ָ�뷽����10���������ɴ�С����
//#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//#include<stdlib.h>
//
//void Sort(int* p, int n)
//{
//	int i = 0; int j =0 ;
//	for (i = 0; i< n - 1 ; ++i)
//	{
//		for (j = i+1; j < n; ++j)
//		{
//			if (*(p+j) > *(p + i))
//			{
//				int tmp = *(p+i);
//				*(p+i) = *(p + j);
//				*(p + j) = tmp;
//			}
//		}
//	}
//	
//}
//
//int main()
//{
//	int i = 0;
//	int arr[10];
//	int* p = arr;
//	printf("������10������:");
//	for (i = 0; i < 10; ++i)
//		scanf("%d", p++);
//	//p++ָ�ȸ�p[0]��ֵ�ڸ�p����1;
//	//���˾�Ϊscanf("%d",++p);++pָ�ȸ�p+1�ٸ�p��ֵ;�൱���Ǵ�p[0+1]��ʼ�ü��̸�ֵ����p[8+1],��Ҫѭ��10��,���Ի�ҪԽ�縳ֵp[10]
//	p = arr;//��ʱpΪarr��ĩԪ�صĵ�ַ,����Ҫ��pˢ�³�Ϊarr��Ԫ�ص�ַ
//	Sort(p, 10);
//	for (p=arr,i = 0; i < 10; ++i)
//		printf("%d ", *(p++));
//	system("pause");
//}
//�������:��ѭ������������ʱ,������Ҫ�����������������ĺ����ǰ��ֱ��++�Լ�--,������ָ�����,Ӧ���ٽ����ŵ���һ���н���++��--;
//��������:for (.........)
//       printf("%d",--p);printf("%d",++p);
//        printf("%d",p++);printf("%d",p++);      
//��ȷ����:for (.........)
//		   {printf("%d",p);
//			--p;����p--;����}		
    
//54.Ҫ����ָ��Ԫ�ص�ָ����������3x4�Ķ�ά����ĸ�Ԫ��ֵ
//#include<stdio.h>
//#include<stdlib.h>
//
//int main()
//{
//	int a[3][4] = { 1,3,5,7,9,11,13,15,17,19,21,23 };
//	int* p = a[0];
//	for (p = a[0]; p < a[0] + 12; ++p)
//	{
//		if ((p - a[0]) % 4 == 0 && p - a[0] >=4)
//			printf("\n");
//		printf("%-3d", *p);
//	}
//	system("pause");
//}
	
//55.54��ı���,��p��ָ��a[0]����Ԫ��,��pָ��a[0]�ĵ�ֵַ(p=&a[0],������p=a[0])
//#include<stdio.h>
//#include<stdlib.h>
//
//int main()
//{
//	int row = 0;
//	int col = 0;
//	int a[3][4] = { 1,3,5,7,9,11,13,15,17,19,21,23 };
//	int(*p)[4];
//	p = a;
//	for (row = 0; row < 3; ++row)
//	{
//		for (col = 0; col < 4; ++col)
//		{
//			printf("%-3d ", *(*(p + row) + col));
//		}
//		printf("\n");
//	}
//	system("pause");
//}

//56.��һ������3��ͬѧ,��ѧ4��ѧ��,������ƽ�������Լ���n��ѧ���ĳɼ�
//#include<stdio.h>
//#include<stdlib.h>
//#include<stdint.h>
//
//float Avg(int a[3][4],int size)
//{
//	int i = 0;
//	float sum=0;
//	int* p = a[0];
//	for (i=0; i < size; ++i)
//	{
//		sum += (float)*p;
//		++p;
//	}
//	return sum / size;
//}
//
//void Search(int n,int a[3][4])
//{
//	int(*p)[4];
//	p = a; 
//	printf("��%d��ͬѧ�ĳɼ�Ϊ: ");
//	for (int i = 0; i < 4; ++i)
//		printf("%d ", *(*(p + n-1) + i));
//	printf("\n");
//}
//
//int main()
//{
//	int a[3][4] = {
//		{65,67,70,60},
//		{80,87,90,81},
//		{90,99,100,98}
//	};
//	int size = sizeof(a) / sizeof(a[0][0]);
//	printf("��ƽ����=%0.2f\n",Avg(a,size));
//	Search(2,a);
//	system("pause");
//}  

//57.
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

void GetMemory(char** p,int num)
{
	*p="hello,world";
}

int main()
{
	char* str = (char*)malloc(100);
	strcpy(str, "hello");
	free(str);
	if (str != NULL)
	{
		strcpy(str, "world");
		printf("%s\n", str);
	}
	system("pause");
}