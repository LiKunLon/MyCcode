#pragma warning(disable:4996)
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<memory.h>
#include<assert.h>
#define MAX_SIZE 10
typedef struct PersonInfor
{
	char name[10];
	char sex[5];
	int age;
	char tel[11];
	char address[20];
}information;
typedef struct Contact
{
	int usedSize;
	information per[MAX_SIZE];
}Contact;
void menu()
{
	printf("**********这个b的通讯录******\n");
	printf("*************1.add***********\n");
	printf("*************2.search********\n");
	printf("*************3.delete********\n");
	printf("*************4.show**********\n");
	printf("*************5.clear*********\n");
	printf("*************0.quit**********\n");
	printf("*****************************\n");
}
void InitContact(Contact *p)
{
	assert(p != NULL);
	p->usedSize = 0;
	memset(p->per, 0, sizeof(p->per));
}
void AddContact(Contact *p)
{
	if (p->usedSize == MAX_SIZE)
	{
		printf("这个b的通讯录满了!\n");
		return;
	}
	printf("请输入姓名:\n");
	scanf("%s", p->per[p->usedSize].name);
	printf("请输入性别:\n");
	scanf("%s", p->per[p->usedSize].sex);
	printf("请输入年龄:\n");
	scanf("%d", &(p->per[p->usedSize].age));
	printf("请输入电话号码:\n");
	scanf("%s", p->per[p->usedSize].tel);
	printf("请输入你的住址:\n");
	scanf("%s", p->per[p->usedSize].address);
	p->usedSize++;
	printf("添加成功!\n");
}
//找不到返回-1,找到返回下标
int SearchContact(Contact *p)
{
	int i = 0;
	char name[20];
	if (p->usedSize == 0)
	{
		printf("这个b的通讯录是空的,别查了!\n");
		return -1;
	}
	printf("请输入姓名:\n");
	scanf("%s", name);
	for (; i < p->usedSize; i++)
	{
		if ((strcmp(p->per[i].name, name)) == 0)
		{
			return i;
		}
	}
	return -1;
}
void DeleteContact(Contact *p)
{
	int index = SearchContact(p);
	if (index == -1)
	{
		printf("查无此人!\n");
		return;
	}
	int i = 0;
	for (; i < p->usedSize - 1; i++)
	{
		p->per[i] = p->per[i + 1];
	}
	p->usedSize--;
	printf("删除成功!\n");
}
void ShowContact(Contact *p)
{
	int i = 0;
	printf("%-10s %-10s %-10s %-10s %-10s\n", "姓名" "性别" "年龄" "电话" "住址");
	for (i = 0; i < p->usedSize; i++)
	{
		printf("%-10s %-10s %-10s %-10s %-10s\n", p->per[i].name, p->per[i].sex, p->per[i].age, p->per[i].tel, p->per[i].address);
	}
}
void ClearContact(Contact *p)
{
	p->usedSize = 0;
}
int main()
{
	int quit = 0;
	Contact con;
	InitContact(&con);
	while (!quit)
	{
		int input = 0;
		menu();
		printf("请输入你的操作:\n");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			AddContact(&con);
			break;
		case 2:
			SearchContact(&con);
			break;
		case 3:
			DeleteContact(&con);
			break;
		case 4:
			ShowContact(&con);
			break;
		case 5:
			ClearContact(&con);
			break;
		case 0:
			quit = 1;
			printf("退出这个b的通讯录!\n");
			break;
		default:
			break;
		}
	}
	return 0;
}