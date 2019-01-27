#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<assert.h>
#include<string.h>

#define PERSON_INTO_MAX_SIZE 200

typedef struct PersonInfo//��ϵ�˵���Ϣ
{
	char name[100];
	char sex[5];
	char age[5];
	char phone[40];
	char address[1024];
}PersonInfo;

typedef struct AddressBook//ͨѶ¼
{
	PersonInfo infos[PERSON_INTO_MAX_SIZE];
	int size;//[0,size)��Χ����Ч�Ŀռ�
}AddressBook;

AddressBook g_address_book;

void Init(AddressBook* addr_book)
{
	assert(addr_book != NULL);
	addr_book->size = 0;
	//size�����˽ṹ�������е���ЧԪ�ص����䷶Χ,ֻҪ��Ϊ0,
	//���������д�����ʲô����û�������,���ԾͲ���Ҫ�ڸ�������г�ʼ��
}

void AddPersonInfo(AddressBook* addr_book)
{
	assert(addr_book != NULL);
	printf("����һ����ϵ��\n");
	if (addr_book->size >= PERSON_INTO_MAX_SIZE)
	{
		printf("��ǰͨѶ¼����,����ʧ��");
	}
	//ÿ�ΰ�����µ���ϵ�˷ŵ���Ч��������һ��Ԫ��
	PersonInfo* p = &addr_book->infos[addr_book->size];
	printf("������������ϵ�˵�����:\n");
	scanf("%s", p->name);
	//�˴�����ȡһ���ṹ��ı���,ֻ��ȡ�ṹ��ָ��,
	//���ܴ�ֵֻ�ܴ�ַ
	printf("������������ϵ�˵��Ա�\n");
	scanf("%s", p->sex);
	printf("������������ϵ�˵�����\n");
	scanf("%s", p->age);
	printf("������������ϵ�˵ĵ绰\n");
	scanf("%s", p->phone);
	printf("������������ϵ�˵ĵ�ַ\n");
	scanf("%s", p->address);
	//������ɺ�,��Ҫ����size
	++addr_book->size;
	printf("������ϵ�˳ɹ�\n");
}

void DelPersonInfo(AddressBook* addr_book)
{
	assert(addr_book != NULL);
	printf("ɾ����ϵ��\n");
	printf("������Ҫɾ����ϵ�˵����\n");
	int id = 1;
	scanf("%d", &id);
	if (id < 1 || id > addr_book->size)
	{
		printf("�����������!ɾ��ʧ��\n");
		return;
	}
	PersonInfo* p = &addr_book->infos[id-1];
	printf("��Ҫɾ������ϵ��Ϊ[%d] %s\t%s\t%s\t%s\t%s\n",
		id, p->name, p->sex, p->age, p->phone, p->address);
	printf("ȷ���밴\"Y\"\n");
	char cmd[5] = { 0 };
	scanf("%s", cmd);
	if (strcmp(cmd, "Y") != 0)
	{
		printf("ɾ��������ȡ��\n");
		return;
	}
	PersonInfo* from = &addr_book->infos[addr_book->size];
	PersonInfo* to = p;
	*to = *from;
	--addr_book->size;
	printf("ɾ���ɹ�\n");
}

void FindPersonInfo(AddressBook* addr_book)
{

}

void ModfiyPersonInfo(AddressBook* addr_book)
{
	assert(addr_book != NULL);
	printf("�޸���ϵ����Ϣ\n");
	printf("������Ҫ�޸ĵ���ϵ�����\n");
	int id = 1;
	scanf("%d", &id);
	if (id<1 || id>addr_book->size)
	{
		printf("���������Ŵ���\n");
		return;
	}
	PersonInfo* p = &addr_book->infos[id-1];
	char input[1024] = { 0 };
	printf("��������Ҫ�޸ĵ�����\n");
	scanf("%s", &input);
	if (strcmp(input, "#") != 0)
		strcpy(p->name, input);
	printf("��������Ҫ�޸ĵ�����\n");
	scanf("%s", &input);
	if (strcmp(input, "#") != 0)
		strcpy(p->age, input);
	printf("��������Ҫ�޸ĵ��Ա�\n");
	scanf("%s", &input);
	if (strcmp(input, "#") != 0)
		strcpy(p->sex, input);
	printf("��������Ҫ�޸ĵĵ绰\n");
	scanf("%s", &input);
	if (strcmp(input, "#") != 0)
		strcpy(p->phone, input);
	printf("��������Ҫ�޸ĵ�סַ\n");
	scanf("%s", &input);
	if (strcmp(input, "#") != 0)
		strcpy(p->address, input);
	printf("�޸ĳɹ�\n");
}

void PrintAllPersonInfo(AddressBook* addr_book)
{
	assert(addr_book != NULL);
	printf("��ʾ������ϵ��\n");
	for (int i = 1; i <= addr_book->size; ++i)
	{
		PersonInfo* p = &addr_book->infos[i-1];
		printf("[%d] %s\t%s\t%s\t%s\t%s\n", i,p->name,
			p->sex,p->age,p->phone,p->address); 
	}
	printf("����ʾ��%d������\n",addr_book->size);
}

void ClearAllPersonInfo(AddressBook* addr_book)
{

}

void SortAllPersonInfo(AddressBook* addr_book)
{

}

void SaveAllPersonInfo(AddressBook* addr_book)
{

}

void LoadAllPersonInfo(AddressBook* addr_book)
{

}

int Menu()
{
	printf("================\n");
	printf("1.����\n");
	printf("2.ɾ��\n");
	printf("3.�޸�\n");
	printf("4.����\n");
	printf("5.��ʾ������ϵ��\n");
	printf("6.���������ϵ��\n");
	printf("7.����������������ϵ��\n");
	printf("8.������ϵ�˵��ļ�\n");
	printf("9.������ϵ��\n");
	printf("0.�˳�\n");
	printf("================\n");
	printf("����������ѡ��:\n");
	int choice = 0;
	scanf("%d", &choice);
	return choice;
}

int main()
{
	//1.��ͨѶ¼���г�ʼ��
	Init(&g_address_book);//��ַ���ܴ�ֵ
	typedef void(*pfounc_t)(AddressBook*);
	pfounc_t table[]=
	{
		AddPersonInfo,DelPersonInfo,ModfiyPersonInfo,
		FindPersonInfo,PrintAllPersonInfo,
		ClearAllPersonInfo,SortAllPersonInfo,
		SaveAllPersonInfo,LoadAllPersonInfo
	};
	while (1)
	{
		int choice = Menu();
		if (choice < 0 || choice>(int)(sizeof(table)/sizeof(table[0])))
		{
			printf("��������д���,����������:\n");
			continue;
		}
		if (choice == 0)
		{
			printf("goodbye\n");
			break;
		}
		table[choice - 1](&g_address_book);
	}
	system("pause");
}