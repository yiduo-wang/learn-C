#include<stdio.h>
#include<stdlib.h>
#include<string.h>


int main()
{
	//���������ָ��ĳ���������
	//int a[] = { 1,2,3,4 };
	//printf("%d\n", sizeof(a));//16       ��������Ĵ�С
	//printf("%d\n",sizeof(a + 1));//4     a+0�����ָ��
	//printf("%d\n", sizeof(*a));//4       *aΪ�������Ԫ��1
	//printf("%d\n", sizeof(a+1));//4      a+1�����ָ��
	//printf("%d\n", sizeof(a[1]));//4     ����ڶ���Ԫ�ص����ʹ�С
	//printf("%d\n", sizeof(&a));//4       ����ָ�뻹��ָ������ռ4���ֽ�
	//printf("%d\n", sizeof(*&a));//16     �������Ĵ�С
	//printf("%d\n", sizeof(&a+1));//4     ����ָ�뻹��ָ��
	//printf("%d\n", sizeof(&a[0]));//4    ������Ԫ��ȡ��ַ����Ϊָ��

	//char a[] = { 'a','b','c','d','e','f' };
	//printf("%d\n", sizeof(a));//6               ��������Ĵ�С
	//printf("%d\n", sizeof(a+0));//4             a+1�����ָ��
	//printf("%d\n", sizeof(*a));//1              ��Ԫ�صĵ�ַ������       
	//printf("%d\n", sizeof(a[1]));//1            ����ڶ���Ԫ��
	//printf("%d\n", sizeof(&a));//4              ����ָ��Ϊָ��
	//printf("%d\n", sizeof(&a+1));//4            ����ָ��Ϊָ��  
	//printf("%d\n", sizeof(&a[0]+1));//4         ����ָ��Ϊָ��
	//printf("%d\n", strlen(a));//δ������Ϊ      �Ҳ���\0,����Խ��
	//printf("%d\n", strlen(a+0));//δ������Ϊ    �Ҳ���\0,����Խ��
	//printf("%d\n", strlen(*a));//δ������Ϊ     �Ҳ���\0,����Խ��
	//printf("%d\n", strlen(a[1]));//δ������Ϊ   �Ҳ���\0,����Խ��
	//printf("%d\n", strlen(&a));//δ������Ϊ     �Ҳ���\0,����Խ��
	
	//char* p = "abcdef";
	//printf("%d\n", sizeof(p));//4         pΪָ�룬��ָ���С
	//printf("%d\n", sizeof(p+1));//4       p+1Ϊָ��
	//printf("%d\n", sizeof(*p));//1        ��Ԫ�ص�ַ�Ľ�����
	//printf("%d\n", sizeof(p[0]));//1      ��Ԫ�صĴ�С
	//printf("%d\n", sizeof(&p));//4        ����ָ��Ĵ�С
	//printf("%d\n", sizeof(&p+1));//4      ����ָ��Ĵ�С
	//printf("%d\n", sizeof(&p[0]+1));//4   bָ��ĵĴ�С
	//printf("%d\n",strlen(p));//6          �����ʵ�ʳ���
	//printf("%d\n", strlen(p+1));//5       ������ĵڶ���Ԫ�ؿ�ʼ��ʵ�ʳ���
	//printf("%d\n", strlen(*p));//δ������Ϊ    �ַ�a��\0
	//printf("%d\n", strlen(p[0]));//δ������Ϊ    �ַ�a��\0
	//printf("%d\n", strlen(&p));//δ������Ϊ    ����ָ���޷���strlen
	//printf("%d\n", strlen(&p[0]+1));//5          b��ָ��

	//char a[] = "abcdef";
	//printf("%d\n", sizeof(a));//7         sizeof����ռ���ֽ�(�ڴ棩
	//printf("%d\n", sizeof(a+0));//4       ��Ԫ�ص�ַ��ռ���ֽ�   
	//printf("%d\n", sizeof(*a));//1        ��Ԫ�ص�ַ������
	//printf("%d\n", sizeof(a[1]));//1      ����ڶ���Ԫ��
	//printf("%d\n", sizeof(&a));//4        ����ָ��Ĵ�С
	//printf("%d\n", sizeof(&a[0]+1));//4   b�ĵ�ַ��ռ���ֽ�
	//printf("%d\n", strlen(a));//6         ����a��ʵ�ʳ���
	//printf("%d\n", strlen(a+0));//6       ����a��ʵ�ʳ���
	//printf("%d\n", strlen(*a));//δ������Ϊ    �ַ�a�޷�����strlen
	//printf("%d\n", strlen(a[1]));//δ������Ϊ    �ַ�b�޷�����strlen
	//printf("%d\n", strlen(&a));//6          ����a��ʵ�ʳ��� 
	//printf("%d\n", strlen(&a+1));//δ������Ϊ   ����Խ����
    //printf("%d\n", strlen(&a[0]+1));//5       �ַ�b�Ժ��ʵ�ʳ���  

	int a[3][4] = { 0 };
	//printf("%d\n", sizeof(a));//48       4*4*3 4*4Ϊ��һ����ռ���ֽڣ���*3��ָ�����ܹ�ռ���ֽ�
	//printf("%d\n", sizeof(a[0][0]));//4    ��һ�е�һ�е�Ԫ����ռ�ֽ���
	//printf("%d\n", sizeof(a[0]));//16      ��һ�е�����Ԫ����ռ���ֽ���
	//printf("%d\n", sizeof(a[0]+1));//4       ��һ�еڶ��е�Ԫ����ռ���ֽ�
	//printf("%d\n", sizeof(*(a[0]+1)));//4    ��һ�еڶ���Ԫ�ص�ַ������
	//printf("%d\n", sizeof(a+1));//4            �ڶ�������ĵ�ַ��ռ���ֽ�
	//printf("%d\n", sizeof(*(a + 1)));//16      �ڶ��е�ַ�Ľ�����
	//printf("%d\n", sizeof(&a[0]+1));//4        �ڶ��е�ַ��ռ���ֽ�
	//printf("%d\n", sizeof(*(&a[0]+1)));//16    �ڶ���������ռ���ֽ�
	//printf("%d\n", sizeof(*a));//16           ��һ�������ַ������
	//printf("%d\n", sizeof(a[3]));//16      sizeof�ڱ�������м��㣬δ������Ϊ�������й����з��ʷǷ��ڴ����Բ�Ӱ��    


	//API  Ӧ�ó����̽ӿ�
	//ABI  Ӧ�ó�������ƽӿ�
	//size_t__cdecl strlen(const char* str);
	//__cdecl��__stdcall ����Լ��

	//ָ������VS����ָ��
	//int a[] = { 1,2,3,4 };
	//printf("%p\n", a+1);
	//printf("%p\n", &a+1);
	//printf("%p\n", a);

	//int* a[] = { 0 };//ָ������

	//int num = 10;
	//int* p = &num;
	//int** pp = &p; 

	//const int* p=>pָ������ݲ��ܸ���
	//int const*p=>pָ������ݲ��ܸ���
	//int* const p=>p��ָ���ܸ���
	//int a = 10,b=20;
	//int* const p = &a;
	//printf("%d\t%p\n", *p, p);

	//void* ����ָ�벻�ܽ�����
	//void* ����ָ�벻�ܽ��мӼ�
	//void* ����ע���ͣ��ܱ����������͵�ָ��
	//���ͱ�̣�д��һ���������Խ��ܲ�ͬ���͵Ĳ���������˵��һ���������Ը���ͬ���͵�������
	//int a = 10;
	//int* p = &a;
	//char b = 'a';
	//p = &b;
	//
	//printf("%p\n", p+1);

	//int num = 10;
	//int* p = &num;
	//if (p == NULL)//��ָ�룬��Чָ����������Ϊ�գ�
		          //����ȷ���Ƿ���Ч������Ϊ�գ���϶���Ч
	
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