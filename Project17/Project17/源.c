#include<stdio.h>
#include<stdlib.h>
#include<time.h>

void test1(int* arr)
{
	printf("%d\n", sizeof(arr));//������������ʱ��ʱ����ʽת��Ϊָ�룬ָ����������Ԫ�أ����������sizeof(ch)�ȼ���sizeof��0��
}

void test2(char* ch)
{
	printf("%d\n", sizeof(ch));//������������ʱ��ʱ����ʽת��Ϊָ�룬ָ����������Ԫ��,���������sizeof(ch)�ȼ���sizeof��0��
}

int Max(int x, int y)
{
	return x > y ? x : y;
}

struct student
{
	char name[1024];
	int score;
};

int main()
{
	//.���ṹ�����ʹ��
	//->���ṹ��ָ��ʹ��,->Ҳ�൱�ڶ�ָ����н����ã�����Ҫ��֤�����õ�ָ������Ч��
	struct student stu;
	stu.score = 100;
	printf("%d\n", stu.score);

	struct student* p = &stu;
	p->score = 100;//�ȼ���(*p).score=100


	//int arr[10] = { 0 };
	//int* p = arr;//�ȼ���int* p=&arr[0]
	//printf("%d\n", p[5]);

	//int a = 1, b = 2;
	//int c = (a > b, a = b + 10, a, b = a + 1);
	//printf("%d\n", c);

	//int a = 10, b = 20;
	//printf("%d\n", Max(a, b));

	//int a = 4,b=0;
	//b = a > 5 ? 3 : -3;
	//printf("%d\n", b);

	 //��Ŀ����������ȼ��Ƚϵͣ�ʹ��ʱҪע��
	//int a = 10, b = 20,max=0;
	//max = (a > b) ? (a) : (b);
	//printf("%d\n", max);
	//if(a>b)
	//	max=a;
	//else
	//	max=b;
		
	//��·��ֵ
	//��&&����������ʽΪ�٣����Ҳ����б��ʽ���������κ�����
	//��||����������ʽΪ�棬���Ҳ����б��ʽ���������κ�����
	//int i = 0, a = 0, b = 2,d = 4;
	//i = a++&&++b&&d++;//a++�ķ���ֵΪ0������Ϊ��
	//printf("a=%d b=%d d=%d\n", a, b, d);//a=1,b=2,d=4
	//i = a++ || ++b || d++;//++bΪ��
	//printf("a=%d b=%d d=%d\n", a, b, d);//a=1,b=3,d=4

	//int a = 1;
	//int b = 2;
	//printf("%d\n", a&b);
	//printf("%d\n", a&&b);
	//printf("%d\n", a | b);
	//printf("%d\n", a || b);

	//int a = 10;
	//int x = ++a;
	//int y = --a;
	//printf("%d\t%d\n", x, y);//x=11,y=10
	//a = 10;
	//int i = a++;//��ʱa++�ķ���ֵΪ10������i==10,����a����1�����Դ�ʱa==11
	//int j = a--;//��ʱa--�ķ���ֵΪa��ֵ������j=11������a����1�����Դ�ʱa==10
	//printf("%d\t%d\n", i, j);//i=10,j=11

	//int arr[10] = { 0 };
	//char ch[10] = { 0 };
	//printf("%d\n", sizeof(arr));
	//printf("%d\n", sizeof(ch));
	//test1(arr);
	//test2(ch);

	//int a = -10;
	//int* p = NULL;
	//printf("%d\n", !2);
	//printf("%d\n", !0);
	//a = -a;
	//p = &a;
	//printf("%d\n", sizeof(a));

	//srand((unsigned)time(0));ǿ������ת��

	//int num = 10;
	//int count = 0;
	//while (num)
	//{
	//	if (num % 2 == 1)
	//		++count;
	//	num /= 2;
	//}

	//int count = 0;
	//int num = -3;
	//for (int i = 0; i < 32; i++)
	//{
	//	if ((num >> i) & 1)
	//		++count;
	//}

	//int num = 1;
	//printf("%d\n", num++);

	//int num = 1;
	//printf("%d\n", num++);
	//printf("%d\n", num);

	//����++�������Ϊ���´���,����˵���Զ�����һ��int�͵ĺ���++���������Ƿ���ֵΪ��һ������tmp��
	//Ҫ�󷵻�ֵʱ��ǰ��++�ͺ���++�Ų�һ��
	//int tmp = num;
	//num += 1;
	//return tmp;
	system("pause");
}