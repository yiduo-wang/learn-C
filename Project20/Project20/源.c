#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
//////////////////////////////////////////
//������Ҫ��ѧ������ѧ��
//��ѧ��ֻ��ѧϰ�õ�ͬѧ����ֻ��ǰn��
/////////////////////////////////////////

//�Զ������ͣ�����������������ʾѧ����Ϣ
typedef struct Student
{
	char name[1024];
	//����һ����С��������ͨ��ֻ����һλС�����Ϳ���ͨ������10�ķ�ʽ����ʾ
	int score;
	struct Student* s;
}Student;
//student2��ȫ�ֱ������൱��struct Student student2;
//*p,������һ���ṹ��ָ�룬Ҳ��ȫ�ֱ���

//typedef struct School
//{
//	Student student[1000];
//}School;

	typedef struct School
	{
		Student students[1000];
		int size;
	}School;



int main()
{
	School school;
	int index = school.size - 1;
	Student* p = school.students;
	p[index].name;
	//printf("%d\n", sizeof(Student));
	//struct Student student1 = {"����",50};
	//student1.name;
	//student1.score;
	//printf("%s,%d\n", student1.name,student1.score);
	//student1.score = 100;
	//printf("%s,%d\n", student1.name, student1.score);
	//strcpy(student1.name, "����");
	//printf("%s,%d\n", student1.name, student1.score);

	//Student* p = &student1;
	//printf("%s,%d\n", p->name,p->score );
	//printf("%s,%d\n", (*p).name, p->score);

	 system("pause");
}