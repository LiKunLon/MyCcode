//#include <stdio.h>
//
//int main()
//{
//    printf("hello world\n");
//	return 0;
//	
//}

//#include <stdio.h>
//#include <string.h>
//int main()
//{
//	printf("%d\n", strlen("c:\test\121"));//�ַ�������(ת���ַ�����Ϊ1)
//	printf("%d\n", sizeof("c:\test\121"));//�ֽ���=�ַ�������+1
//		return 0;
//}

//#define _CRT_SECURE_NO_WARNINGS 1
//#include <stdio.h>
//int main()
//{
//	int coding = 0;
//	printf("���ȥ�ô����𣿣�ѡ��1 or 0��\n");
//	scanf("%d", &coding);
//	if (coding == 1)
//	{
//		printf("��֣�����к�offer\n");
//	}
//	else
//	{
//		printf("�������ؼ�������\n");
//	}
//	return 0;
//}
//


//����������,����ϴ��
/*#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int main()
{
	int a=0;
	int b=0;
	printf("��������������\n");
	scanf("%d%d",&a,&b);
	if (a > b)
	{
		printf("%d\n", a);
	}
	else if (a==b)
	{
		printf("���������\n");
	}
	else
	{
		printf("%d\n",b);
	}
	
	return 0;
}*/

/*
#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int Add(int x, int y)
{
	int z = x + y;
	return z;
}
int main()
{
	int a = 0;
	int b = 0;
	int sum = 0;
	printf("��������������:>");
	scanf("%d %d", &a, &b);
	sum = Add(a, b);
	printf("sum = %d\n", sum);
	return 0;
}
*/



//ȡ������ַ
//#define _CRT_SECURE_NO_WARNINGS 1
//#include<stdio.h>
//int main()
//{
//	int num = 0;
//	&num;//ȡ��num�ĵ�ַ
//	printf("%p\n", &num);//��ӡ��ַ��%p--�Ե�ַ����ʽ��ӡ
//	return 0;
//}


//#include <stdio.h>
//void test()
//{
//	static int i = 0;
//	i++;
//	printf("%d ", i);
//}
//int main()
//{
//	 int i = 0;
//	for (i = 0; i<10; i++)
//	{
//		test();
//	}
//	return 0;
//}


/*#include <stdio.h>
int main()
{
	printf("%d\n", sizeof(char *));
	printf("%d\n", sizeof(short *));
	printf("%d\n", sizeof(int *));
	printf("%d\n", sizeof(double *));
	return 0;
}*/


//���������ɴ�С���
//#define _CRT_SECURE_NO_WARNINGS 1
//#include <stdio.h>
//#include <windows.h>
//int main()
//{
//	int a;
//	int b;
//	int c;
//	int t;
//	printf("��������������\n");
//	scanf("%d %d %d", &a, &b, &c);
//	if (a < b)//��a,b�нϴ������a
//	{
//		t = a;
//		a = b;
//		b = t;
//	}
//	if (a < c)//��a,c�нϴ������a
//	{
//		t = a;
//		a = c;
//		c = t;
//	}
//	if (b < c)
//	{
//		t = b;
//		b = c;
//		c = t;
//	}
//	printf("%d %d %d\n", a, b, c);
//	system("pause");
//	return 0;
//}


//��ӡ3�ı���
//#define _CRT_SECURE_NO_WARNINGS 1
//#include <stdio.h>
//int main()
//{
//	int i;
//	for (i = 1; i<=100; i++)
//	{
//		if (i % 3 == 0)
//			printf("%d\n", i);
//	}
//	return 0;
//}
//
//��ӡ1000-2000�������
///*#define _CRT_SECURE_NO_WARNINGS 1
//#include<stdio.h>
//int main()
//{
//	int i;
//	for (i = 1000; i <= 2000; i++)
//	{
//		if (i % 4 == 0 && i % 100 != 0 || i % 400 == 0)
//			printf("%d\n", i);
//	}
//	return 0;
//}*/
//
//
//��ӡ100-200֮�������
//#define _CRT_SECURE_NO_WARNINGS 1
//#include <stdio.h>
//int main()
//{
//	int i,j;
//	for (i = 100; i <= 200; i++)
//	{
//		for (j=2; j <=i; j++)//��2��ʼѭ��
//		{
//			if (i%j == 0)//���ϵĻ�,˵����������
//				break;//ѭ����ֹ
//		}
//		if (j >= i)//ѭ����i����û���ܳ�����,������,���
//			printf("%d\n", i);
//	}
//	return 0;
//}


//1-100����9�Ĵ���
//#define _CRT_SECURE_NO_WARNINGS 1
//#include<stdio.h>
//int main()
//{
//	int n;
//	scanf("%d", &n);
//	int i;
//	int j = 0;//j�����ƴ�
//	for (i = 1; i <= 100; i++)//1-100ѭ��
//	{
//		if (i % 10 == 9)//��λ����9��
//			j++;//����һ��,j��+1
//		if (i / 10 == 9)//ʮλ����9��
//			j++;
//	}
//	printf("%d\n", j);
//}
//	
//	
//n�����г���9�Ĵ���
//#define _CRT_SECURE_NO_WARNINGS 1
//#include<stdio.h>
//	int main()
//	{
//		for (int i = 1; i <= n; i++)
//		{
//			int ink = i;
//			while (1)
//			{
//				if (ink % 10 == 0 || ink == 0)
//				{
//					break;
//				}
//				if (ink % 10 == 9)
//				{
//					j++;
//					break;
//				}
//				ink = ink / 10;
//			}
//		}
//		printf("%d", j);
//		return 0;
//	}
//
//
//��10����������
//#define _CRT_SECURE_NO_WARNINGS 1
//#include<stdio.h>
//int main()
//{
//	int i=0;
//	int max=0;
//	int arr[10];
//	printf("������ʮ����:\n");
//	for (i; i < 10; i++)//ѭ������ʮ����
//	{
//		scanf("%d",&arr[i]);
//	}
//	max = arr[0];//�ѵ�һ������max
//	for (i = 1; i < 10; i++)
//	{
//		if (arr[i]>max)//�����һ������max��
//		{
//			max = arr[i];//�Ͱ��������max
//		}
//	}
//	printf("�����Ϊ:%d", max);
//	return 0;
//}

//���99�˷���
//#include<stdio.h>
//int main()
//{
//	int i, j;
//	for (i = 1; i < 10; i++)//1=10ѭ��
//	{
//		for (j = 1; j < 10; j++)//1-10ѭ��
//			printf("%d*%d=%d ", i, j, i*j);//�����ʽ,ע���пո�(����)
//		printf("\n");//����(����)
//	}
//	
//	return 0;
//}
//
//
//дһ���������������ϴ�ֵ
//#define _CRT_SECURE_NO_WARNINGS 1
//#include<stdio.h>
//int Max(int a,int b)
//{
//	if (a > b)//���a>b,���ؽϴ�ֵa
//		return a;
//	else
//	{
//		return b;
//	}
//}
//int main()
//{
//	int a = 0;
//	int	b = 0;
//	printf("�������������Ƚ���:\n");
//	scanf("%d%d", &a,&b);
//	int ret = Max(a, b);//�����������,ret�������շ���ֵ
//	printf("�ϴ���Ϊ:%d\n", ret);//ֱ�ӵ���Max����
//	return 0;
//}

//#define _CRT_SECURE_NO_WARNINGS 1
//#include<stdio.h>
//int main()
//{
//	int i = 0;
//	while (i <= 5)
//	{
//		i++;
//		printf("%s\n","����");
//	}
//	if (i > 5)
//	{
//		printf("%s\n","ţ��");
//	}
//	return 0;
//}


//�������
//#define _CRT_SECURE_NO_WARNINGS 1
//#include<stdio.h>
//int main()
//{
//	int n;
//	float i = 1.0;//ע�����ﶨ����Ƿ��ӵ�1,������float��
//	int j = 1;
//	float sum = 0;
//	for (n = 1; n <= 100; n++)//ѭ��100��������
//	{
//		sum = sum + (i/ n)*j;//��ѧ���ʽ
//		j = -j;//����������ת��
//		
//	}
//	printf("%f\n", sum);
//	return 0;
//}
//
//д��һ�����򣬽���һ����������ֵ���������ֵ�Ľ�������ֵ�����С�������ֵ���ڵ���5, ����ȡ����С��5��������ȡ����
//#define _CRT_SECURE_NO_WARNINGS 1
//#include <stdio.h>
//int main()
//{
//	float i;
//	printf("������һ��������:\n");
//	scanf("%f", &i);
//	int num = (int)i;//ǿ�Ʊ������
//	float a = i - num;
//	int b = 10 * a;
//	if (b >= 5)
//	{
//		printf("�ø���������ȡ��:%d\n", num + 1);
//	}
//	else
//	{
//		printf("�ø���������ȡ��:%d\n", num);
//	}
//	return 0;
//}
//
//����������ʱ����,����������
//#define _CRT_SECURE_NO_WARNINGS 1
//#include <stdio.h>
//int main()
//{
//	int a, b;
//	scanf("%d %d", &a, &b);
//	a = a + b;
//	b = a - b;
//	a = a - b;
//	printf("%d %d", a, b);
//}
//
//�����������α���,���н���
//#define _CRT_SECURE_NO_WARNINGS 1
//#include <stdio.h>
//int main()
//{
//	int a;
//	int b;
//	int t = 0;
//	scanf("%d %d", &a, &b);
//	t = a;
//	a = b;
//	b = t;
//	printf("%d %d\n", a, b);
//	return 0;
//}




//дһ���������������ϴ�ֵ
//#define _CRT_SECURE_NO_WARNINGS 1
//#include<stdio.h>
//int Max(int a, int b){
//	return (a > b) ? a : b;//��Ŀ�����:���a>b,����a;���a<b,����b
//}
//
//int main()
//{
//	int a;
//	int b;
//	scanf("%d %d",&a,&b);
//	int ret = Max(a, b);
//	printf("%d\n", ret);
//	return 0;
//}


//������Ԫ�ظ���������
//#pragma warning (disable 4996)
//#include<stdio.h>
//int main()
//{
//	int i = 0;
//	int arr[] = { 1, 2, 3, 4, 5};
//	int num = sizeof(arr) / sizeof(arr[0]);//������Ԫ�ظ���
//	printf("%d\n", num);
//	//����(���η���һ����ֻ����һ��)
//	int sum = 0;
//	for (; i < num; i++)
//	{
//		printf("arr[%d]=%d\n", i, arr[i]);
//		sum = sum + arr[i];	//��������Ԫ��֮��
//	}
//	printf("%d\n", sum);
//	return 0;
//}
//



//��������,�ɴ�С���
//#define _CRT_SECURE_NO_WARNINGS 1
//#include <stdio.h>
//int main()
//{
//	int a, b, c,t;
//	printf("�������������Ƚϵ�����:\n");
//	scanf("%d %d %d", &a, &b, &c);
//	if (a < b)
//	{
//		t = a;
//		a = b;
//		b = t;
//	}
//	if (a < c)
//	{
//		t = a;
//		a = c;
//		c = t;
//	}
//	if (b < c)
//	{
//		t = b;
//		b = c;
//		c = t;
//	}
//	printf("���������ɴ�С��˳��Ϊ:%d %d %d\n", a, b, c);
//	return 0;
//}



//1-100��ӡ3�ı���
//#define _CRT_SECURE_NO_WARNINGS 1
//#include<stdio.h>
//int main()
//{
//
//	for (int i = 1; i <= 100; i++)
//	{
//		if (i % 3 == 0)//һ��������3û����������3�ı���
//			printf("%d\n", i);
//	}
//	return 0;
//}
//
//
//ָ���С
//#define _CRT_SECURE_NO_WARNINGS 1
//#include <stdio.h>
//int main()
//{
//	printf("%d\n", sizeof(char*));
//	printf("%d\n", sizeof(short*));
//	printf("%d\n", sizeof(int*));
//	printf("%d\n", sizeof(long*));
//	return 0;
//
//}
//
//�ṹ��	
//#define _CRT_SECURE_NO_WARNINGS 1
//#include <stdio.h>
//struct stu
//{
//	char name[30];
//	int age;
//	char sex[3];
//};
//
//int main()
//{
//	struct stu s1 = { "һ", 10, 'n' };
//	struct stu s2 = { "��", 120, 'v' };
//	printf("%s %d %s\n", s1.name, s1.age, s1.sex);//.Ҳ�з��ʹ���
//	struct stu *p = &s2;
//	printf("%s %d %s\n", (*p).name, (*p).age, (*p).sex);//.�����ȼ�����ָ��
//	printf("%s %d %s\n", p->name, p->age, p->sex);//ָ����Դ������ù���
//	return 0;
//}

//��Ŀ�����
//#define _CRT_SECURE_NO_WARNINGS 1
//#include <stdio.h>
//int main()
//{
//	int a = 1;
//	int b = 0;
//	int c = 1;
//	int d = a ? (b == 1 ? c : a) : c;
//	printf("%d\n", d);
//	return 0;
//}
//
//
//
//����n�Ľ׳�
//#define _CRT_SECURE_NO_WARNINGS 1
//#include<stdio.h>
//int main()
//{
//	int n;
//	int ret = 1;
//	scanf("%d", &n);
//	for (int i = 1; i <= n; i++)
//	{
//		ret *= i;
//	}
//	printf("%d\n", ret);
//	return 0;
//}
//
//����1!+2!+3!+...+10!
//#define _CRT_SECURE_NO_WARNINGS 1
//#include<stdio.h>
//int main()
//{
//	int i = 1;
//	int ret = 1;
//	int sum = 0;
//	for (int n = 1; n <= 10; n++)
//	{
//		for (int i = 1; i <= n; i++)
//		{
//			ret = ret*i;
//		}
//		sum = sum + ret;
//		ret = 1;
//	}
//	printf("%d\n", sum);
//	return 0;
//		
//}
//
//���Լ��(շת�����)
//#define _CRT_SECURE_NO_WARNINGS 1
//#include<stdio.h>
//int main()
//{
//	int a, b,c;
//	printf("�������������Ƚ���:\n");
//	scanf("%d %d", &a, &b);
//	while (b != 0)
//	{
//		c = a % b;
//		a = b;
//		b = c;
//	}
//	printf("%d\n", a);
//	return 0;
//}

//��ӡ1000-2000������
//#define _CRT_SECURE_NO_WARNINGS 1
//#include<stdio.h>
//int main()
//{
//	int i;
//	for (i = 1000; i <= 2000; i++)
//	{
//		if (i % 4 == 0 &&i % 100 != 0 || i % 400 == 0)
//			printf("%d\n", i);
//	}
//	return 0;
//}

//��ӡ100-200֮�������
//#define _CRT_SECURE_NO_WARNINGS 1
//#include<stdio.h>
//int main()
//{
//	int i,j;
//	for (i = 100; i <= 200; i++)
//	{
//		for (j = 2; j <= i; j++)
//		{
//			if (i%j == 0)
//				break;
//		}
//		if (j == i)
//			printf("%d\n", i);
//	}
//	return 0;
//}

//1-100����9�Ĵ���
//#define _CRT_SECURE_NO_WARNINGS 1
//#include<stdio.h>
//int main()
//{
//	int j;
//	for (int i = 1; i <= 100; i++)
//	{
//		if (i / 10 == 9)//�ж�ʮλ��Ϊ9��
//			j++;
//		else if (i % 10 == 9)//�жϸ�λ��Ϊ9��
//			j++;
//	}
//	printf("%d\n", j);
//	return 0;
//}

//����1/1-1/2+1/3-1/4+1/5 ���� + 1/99 - 1/100 ��ֵ����ӡ�����
//#define _CRT_SECURE_NO_WARNINGS 1
//#include <stdio.h>
//int main()
//{
//	float n=1.0 ;//����ķ���1������float��
//	int j = 1;
//	float sum = 0;
//	for (int i = 1; i <= 100; i++)
//	{
//		sum = sum + (n / i)*j;//��ѧ���ʽ
//		j = -j;//����������ת��
//	}
//	printf("%f\n", sum);
//	return 0;
//}

//��ʮ�������е����ֵ
//#define _CRT_SECURE_NO_WARNINGS 1
//#include<stdio.h>
//int main()
//{
//	int arr[10] = {0};
//	int i = 0;
//	int max = 0;
//	for (i; i < 10; i++)//ѭ������ʮ������
//	{
//		scanf("%d", &arr[i]);
//	}
//	max = arr[0];//�������һ��Ԫ�ظ�max
//	for (i = 0; i <= 9; i++)
//	{
//		if (arr[i]>max)//����Ԫ�������max�Ƚ�
//			max = arr[i];//�ϴ�ĸ�max
//	}
//	printf("%d\n", max);
//	return 0;
//}
	
//���99�˷���
//#define _CRT_SECURE_NO_WARNINGS 1
//#include<stdio.h>
//int main()
//{
//	int i = 1;
//	int j = 1;
//	for (i = 1; i <= 9; i++)
//	{
//		for (j = 1; j <= 9; j++)
//		{
//			printf("%d*%d=%2d\t", i,j ,i*j);//�Ʊ��
//		}
//		printf(" \n");//����(����)
//		
//	}
//	
//	return 0;
//}

//���ֲ���	
//#define _CRT_SECURE_NO_WARNINGS 1
//#include <stdio.h>
//int main()
//{
//	int arr[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	int key = 8;
//	int len = sizeof(arr) / sizeof(arr[0]);//�����鳤��
//	int left = 0;//0���±�
//	int right = len - 1;//�������һ��Ԫ��
//	int mid = 0;
//	while (left <= right)
//	{
//		mid = (left + right) / 2;
//		if (arr[mid] > key)//����м�Ԫ�ش�����������
//		{
//			right = mid - 1;//mid֮ǰһ��Ԫ�ؾ����µ�right
//		}
//		else if (arr[mid] < key)//����м�Ԫ��С����������
//		{
//			left = mid + 1;//mid֮��һ��Ԫ�ؾ����µ�left
//		}
//		else
//		{
//			break;
//		}
//		//��������˳�:1.��Ϊbreak�˳� 2.��Ϊѭ�������������˳�(left>right)
//	}
//	if (left <= right)//�����Ϊbreak�˳�,�����ҵ���
//	{
//		printf("�ҵ���,�±���:%d\n", mid);
//	}
//	else
//	{
//		printf("�Ҳ���");
//	}
//	return 0;
//}


//��������Ϸ
//#define _CRT_SECURE_NO_WARNINGS 1
//#include<stdio.h>
//#include<stdlib.h>
//#include<time.h>
//#include<string.h>
//void menu()
//{
//	printf("---------------------\n");
//	printf("----------1.��ʼ-----\n");
//	printf("----------2.����-----\n");
//	printf("---------------------\n");
//}
//void game()
//{
//	srand((unsigned int)time(NULL));
//	int ret = rand() % 100 + 1;//�������һ��1-100������
//	int num = 0;
//	while (1)
//	{
//		printf("����������:");
//		scanf("%d", &num);
//		if (num > ret)
//		{
//			printf("�´���\n");
//		}
//		else if (num < ret)
//		{
//			printf("��С��\n");
//		}
//		else 
//		{
//			printf("��ϲ��,�¶���\n");
//			break;
//		}		
//	}
//}
//
//
//int main()
//{
//	int quit = 0;
//	while (!quit)
//	{
//		menu();
//		printf("������:");
//		int select = 0;
//		scanf("%d", &select);
//		switch (select)
//		{
//
//		case 1:
//			game();
//			printf("����һ�Ѳ�?\n");
//			break;
//		case 2:
//			quit = 1;
//			printf("��Ϸ����\n");
//			break;
//		default:
//			printf("��������\n");
//			break;
//		}
//	}
//}


//��д���룬��ʾ����ַ��������ƶ������м���
//#define _CRT_SECURE_NO_WARNINGS 1
//#include<stdio.h>
//#include<string.h>
//#include<windows.h>
//int main()
//{
//	char arr1[] = "******************";
//	char arr2[] = "LiLan is my honey!";
//	int left = 0;
//	int right = strlen(arr1) - 1;
//	printf("%s\n", arr2);
//	while (left <= right)
//	{
//		Sleep(1000);
//		arr1[left] = arr2[left];
//		arr1[right] = arr2[right];
//		left++;
//		right--;
//		printf("%s\n", arr1);
//	}
//	return 0;
//}




//ģ���û���¼����
//#define _CRT_SECURE_NO_WARNINGS 1
//#include<stdio.h>
//#include<string.h>
//int main()
//{
//	char passward[20] = { 0 };
//	int i = 0;
//	for (i = 1; i <= 3; i++)
//	{
//		printf("����������:");
//		scanf("%s", passward);
//		if (strcmp(passward, "1234") == 0)
//			printf("��½�ɹ�!\n");
//		else
//		{
//			printf("��������,�㻹��%d�λ���\n",3-i);
//		}
//	}
//	return 0;
//}

//����1/1-1/2+1/3-1/4+1/5 ���� + 1/99 - 1/100 ��ֵ����ӡ�����
//#define _CRT_SECURE_NO_WARNINGS 1
//#include<stdio.h>
//int main()
//{
//	float j = 1.0;
//	double sum = 0;
//	for (int i = 1; i <= 100; i++)
//	{
//		sum = sum + (1.0/ i)*j;
//		j = -j;
//	}
//	printf("%f\n", sum);
//	return 0;
//}

//���ֲ���
//#define _CRT_SECURE_NO_WARNINGS 1
//#include<stdio.h>
//int main()
//{
//	char arr[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	int len = sizeof(arr) / sizeof(arr[0]);
//	int left = 0;
//	int key = 8;
//	int right = len - 1;
//	int mid = 0;
//	while (left <= right)
//	{
//		mid = (left + right) / 2;
//		if (arr[mid] < key)
//		{
//			left = mid + 1;
//		}
//		else if (arr[mid]>key)
//		{
//			right = mid - 1;
//		}
//		else
//		{
//			break;
//		}
//	}
//	if (left <= right)
//		printf("�ҵ���,�±���%d\n", mid);
//	else
//	{
//		printf("û�ҵ�!\n");
//	}
//	return 0;
//}



//���Լ��(���淨)
//#define _CRT_SECURE_NO_WARNINGS 1
//#include<stdio.h>
//int main()
//{
//	int a, b;
//	int i = 0;
//	printf("������������:\n");
//	scanf("%d%d", &a, &b);
//	for ( i = a; i <= a; i--)
//	{
//		if (a % i == 0 && b % i == 0)
//			break;
//	}
//	printf("%d\n", i);
//	return 0;
//}
//
//�ж�һ�����Ƿ�������(���淨)
//#define _CRT_SECURE_NO_WARNINGS 1
//#include<stdio.h>
//int main()
//{
//	int a;
//	int i = 0;
//	printf("������һ������:\n");
//	scanf("%d", &a);
//	for ( i = 2; i < a; i++)
//	{
//		if (a%i == 0)//������Գ���,��������
//			break;
//	}
//	//��������˳�:����Ϊbreak�ڲ�����ѭ������i<=a
//	if (i <a)//����ѭ������,��Ϊbreak�˳�.
//	{
//		printf("��������\n");
//	}
//	else
//	{
//		printf("������\n");
//	}
//	return 0;
//}
//
////дһ�����ж�һ�����Ƿ�������(n/2��)
//#define _CRT_SECURE_NO_WARNINGS 1
//#include<stdio.h>
//int isPrime(int n)
//{
//	int i = 0;
//	for (i = 2; i <= (n/2); i++)
//	{
//		if (n%i == 0)
//			return 1;
//	}
//	return 0;
//}
//
//int main()
//{
//	int num = 0;
//	printf("������һ������:\n");
//	scanf("%d", &num);
//	int ret = isPrime(num);
//	if (ret == 1)
//	{
//		printf("%d��������\n", num);
//	}
//	else
//	{
//		printf("%d������", num);
//	}
//	return 0;
//}
//
////дһ�����ж�һ�����Ƿ�������(sqrt��)
//#define _CRT_SECURE_NO_WARNINGS 1
//#include<stdio.h>
//#include<math.h>
//int isPrime(int n)
//{
//	int i = 0;
//	for (i = 2; i <= sqrt(n); i++)
//	{
//		if (n%i == 0)
//			return -1;
//	}
//	return 0;
//}
//
//
//int main()
//{
//	int a = 0;
//	printf("������һ����:\n");
//	scanf("%d", &a);
//	int ret = isPrime(a);
//	if (ret == -1)
//		printf("%d��������\n", a);
//	else
//	{
//		printf("%d������\n", a);
//	}
//	return 0;
//}


//дһ�����ж�һ�����Ƿ�������,���øú������100-200�������
//#define _CRT_SECURE_NO_WARNINGS 1
//#include<stdio.h>
//int isPrime(int n)
//{
//	int i = 0;
//	for (i = 2; i < n; i++)
//	{
//		if (n%i == 0)
//			return -1;
//	}
//	return 0;
//
//}
//int main()
//{
//	int n = 0;
//	for (n = 100; n <= 200; n++)
//	{
//		isPrime(n);
//		int ret = isPrime(n);
//		if (ret == -1)
//			printf("%d��������\n",n);
//		else
//			printf("%d������\n",n);
//	}
//	return 0;
//}
//
//�����ж�year�ǲ�������
//#define _CRT_SECURE_NO_WARNINGS 1
//#include<stdio.h>
//int isLeapYear(int n)
//{
//	if (n % 4 == 0 && n % 100 != 0 || n % 400 == 0)
//	{
//		return 0;
//	}
//	return -1;
//}
//
//
//int main()
//{
//	int year = 0;
//	printf("������һ�����:\n");
//	scanf("%d", &year);
//	int ret = isLeapYear(year);
//	if (ret == 0)
//	{
//		printf("%d��������\n", year);
//	}
//	else
//	{
//		printf("%d��������\n", year);
//	}
//	return 0;
//}
//
//
//printf��������ֵ����(����ֵ��������ַ��������������֣���ĸ�������ţ��ո��)
///*#define _CRT_SECURE_NO_WARNINGS 1
//#include<stdio.h>
//int main()
//{
//	int A = 43;
//	printf("%d", printf("%d", printf("%d", A)));
//	return 0;
//}     */       //���4321

//дһ����������������������(��ַ����)
//#define _CRT_SECURE_NO_WARNINGS 1
//#include<stdio.h>
//int Swap(int* a, int* b)
//{
//	int t = *a;
//	*a = *b;
//	*b = t;
//}
//
//int main()
//{
//	int a = 10;
//	int b = 20;
//	Swap(&a, &b);
//	printf("%d %d\n", a, b);
//	return 0;
//}
//
//
//
//ʵ��һ����������ӡ�˷��ھ����ھ���������������Լ�ָ��.�磺����9�����9 * 9�ھ������12�����12 * 12�ĳ˷��ھ���
//#define _CRT_SECURE_NO_WARNINGS 1
//#include<stdio.h>
//void chart(int n)
//{
//	for (int i = 1; i <= n; i++)
//	{
//		for (int j = 1; j <= i; j++)
//			printf("%d*%d=%2d\t ", i, j, i*j);
//	}
//	printf("\n ");
//}
//
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	chart(n);
//	return 0;
//}


//��������Ϸ
//#define _CRT_SECURE_NO_WARNINGS 1
//#include<stdio.h>
//#include<stdlib.h>
//#include<string.h>
//#include<time.h>
//void menu()
//{
//	printf("*****��ӭ������������Ϸ****\n");
//	printf("***************************\n");
//	printf("*********1.��ʼ��Ϸ********\n");
//	printf("*********2.������Ϸ********\n");
//	printf("***************************\n");
//}
//
//void game()
//{
//	srand((unsigned)time(NULL));
//	int ret = rand() % 100 + 1;
//	int num = 0;
//	printf("��������������:\n");
//	while (1)
//	{
//		//printf("��������������:\n");
//		scanf("%d",&num);
//		if (num > ret)
//			printf("�´���\n");
//		else if (num < ret)
//			printf("��С��\n");
//		else
//		{
//			printf("�ҵ���!\n");
//			break;
//		}
//	}
//}
//int main()
//{
//	int quit = 0;
//	while (!quit)
//	{
//		menu();
//		int input = 0;
//		printf("�����������Ƿ�ʼ��Ϸ:");
//		scanf("%d", &input);
//		switch (input)
//		{
//		case 1:
//			game();
//			printf("����һ�Ѳ�?\n");
//			break;		
//		case 2:
//			quit = 1;
//			printf("��Ϸ����\n");
//			break;
//		default:
//			printf("��������!\n");
//		}
//	}
//	return 0;
//}


//�ݹ�ʵ�ֽ׳�
//#define _CRT_SECURE_NO_WARNINGS 1
//#include<stdio.h>
//int Fac(int n)
//{
//	if (n == 1)
//	{
//		return 1;
//	}
//	return n*Fac(n - 1);	
//}
//
//int main()
//{
//	int n = 0;
//	printf("����������:\n");
//	scanf("%d", &n);
//	int ret = Fac(n);
//	printf("������ֵĽ׳�Ϊ:%d\n", ret);
//	return 0;
//}



//���Լ��
//#define _CRT_SECURE_NO_WARNINGS 1
//#include<stdio.h>
//int main()
//{
//	int a, b;
//	int c = 0;
//	printf("������������:\n");
//	scanf("%d %d", &a, &b);
//	while (b!=0)
//	{
//		c = a%b;
//		a = b;
//		b = c;
//	}
//	if (b == 0)
//	{
//		printf("�������������Լ����:%d\n", a);
//	}
//	return 0;
//}


//��һ���������������в��Ҿ����ĳ����:�ҵ��˾ʹ�ӡ�������ڵ��±꣬�Ҳ�����������Ҳ���
//#define _CRT_SECURE_NO_WARNINGS 1
//#include<stdio.h>
//#include<string.h>
//int main()
//{
//	int arr[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	int len = sizeof(arr) / sizeof(arr[0]);
//	int key = 8;
//	int mid = 0;
//	int left = 0;
//	int right = len - 1;
//	while (left <= right)
//	{
//		mid = (left + right) / 2;
//		if (arr[mid] < key)
//		{
//			left = mid + 1;
//		}
//		else if (arr[mid]>key)
//		{
//			right = mid - 1;
//		}
//		else
//		{
//			break;
//		}
//	}
//	//��������˳���:����ѭ������,break�˳�(�ҵ���)��:������ѭ������(left>right)�Ҳ���
//	if (left <= right)
//	{
//		printf("�ҵ���,�������±���:%d\n", mid);
//	}
//	else
//	{
//		printf("û�ҵ�!\n");
//	}
//	return 0;
//}

//��������Ϸ
//#define _CRT_SECURE_NO_WARNINGS 1
//#include<stdio.h>
//#include<stdlib.h>
//#include<time.h>
//void menu()
//{
//	printf("*********************************\n");
//	printf("**********��ӭ������������Ϸ*****\n");
//	printf("*************1.��ʼ��Ϸ**********\n");
//	printf("*************2.�뿪��Ϸ**********\n");
//	printf("*********************************\n");
//}
//void game()
//{
//	srand((unsigned)time(NULL));
//	int num = rand() % 100 + 1;
//	int guess = 0;
//	printf("��������������:\n");
//	while (1)
//	{
//		scanf("%d", &guess);
//		if (guess < num)
//		{
//			printf("��С��!\n");
//		}
//		else if (guess>num)
//		{
//			printf("�´���!\n");
//		}
//		else
//		{
//			printf("���ֵ�,���Ⱑ\n");
//			break;
//		}
//	}
//}
//int main()
//{
//	int quit = 0;
//	while (!quit)
//	{
//		menu();
//		int input=0;
//		printf("�����������Ƿ�ʼ��Ϸ!\n");
//		scanf("%d", &input);
//		switch (input)
//		{
//		case 1:
//			game();
//			printf("����ôţ��,����һ�Ѳ�?\n");
//			break;
//		case 2:
//			quit = 1;
//			printf("�ݰ�������\n");
//			break;
//		default:
//			printf("�����,��̱\n");
//		}
//	}
//	return 0;
//}


//����ʵ�ֶ��ֲ���
//#define _CRT_SECURE_NO_WARNINGS 1
//#include<stdio.h>
//int Find(int arr[], int key, int len)
//{
//	int mid = 0;
//	int left = 0;
//	int right = len - 1;
//	while (left <= right)
//	{
//		mid = (left + right)/2;
//		if (arr[mid] < key)
//		{
//			left = mid + 1;
//		}
//		else if (arr[mid]>key)
//		{
//			right = mid + 1;
//		}
//		else
//		{
//			return mid;
//		}
//	}
//	return -1;
//}
//int main()
//{
//	int arr[] = {1,2,3,4,5,6,7,8,9};
//	int len = sizeof(arr) / sizeof(arr[0]);
//	int ret = Find(arr,8, len);
//	if (ret == -1)
//	{
//		printf("û���������!\n");
//	}
//	else
//	{
//		printf("�ҵ���,������ֵ��±���:%d\n", ret);
//	}
//	return 0;
//}
//
//
//
//�ݹ鷽ʽʵ�ִ�ӡһ��������ÿһλ
//#define _CRT_SECURE_NO_WARNINGS 1
//#include<stdio.h>
//void print(int n)
//{
//	if (n > 9)
//	{
//		print(n / 10);
//	}
//	printf("%d ", n % 10);
//
//}
//int main()
//{
//	int num = 0;
//	printf("������һ������:\n");
//	scanf("%d", &num);
//	print(num);
//	return 0;
//}
//
//�ݹ�ʵ��n�Ľ׳�
//#define _CRT_SECURE_NO_WARNINGS 1
//#include<stdio.h>
//int fac(int n)
//{
//	if (n == 1)
//	{
//		return 1;
//	}
//	return n*fac(n - 1);
//}
//
//
//int main()
//{
//	int num = 0;
//	printf("����������׳�:\n");
//	scanf("%d",&num);
//	printf("%d", fac(num));
//	return 0;
//}
//
//
//
//�ǵݹ�ʵ�ֽ׳�
//#define _CRT_SECURE_NO_WARNINGS 1
//#include<stdio.h>
//int  fac(int n)
//{
//	int ret = 1;
//	for (int i = 1; i <= n; i++)
//	{
//		ret *= i;
//	}
//	return ret;
//}
//
//
//int main()
//{
//	int num = 0;
//	printf("����������׳���:\n");
//	scanf("%d", &num);
//	int a = fac(num);
//	printf("%d\n", a);
//	return 0;
//}
//
//
//�ݹ�ʵ��strlen
//#define _CRT_SECURE_NO_WARNINGS 1
//#include<stdio.h>
//int length(char *str)
//{
//	if (*str == '\0')
//	{
//		return 0;
//	}	
//	return 1 + length(str + 1);
//}
//int main()
//{
//	char * p= "abcde";
//	printf("%d\n", length(p));
//	return 0;
//}
//
//
//�ǵݹ�ʵ��strlen
//#define _CRT_SECURE_NO_WARNINGS 1
//#include<stdio.h>
//#include<string.h>
//int main()
//{
//	char *str = "abcde";
//	int tmp = strlen(str);
//	printf("%d\n", tmp);
//	return 0;
//}
//
//
///*��дһ������ reverse_string(char * string)���ݹ�ʵ�֣�
//ʵ�֣��������ַ����е��ַ��������С�
//Ҫ�󣺲���ʹ��C�������е��ַ�������������*/
//#define _CRT_SECURE_NO_WARNINGS 1
//#include<stdio.h>
//#include<windows.h>
//void reverse_string(char *p)
//{
//	int len = strlen(p);
//	char tmp = *p;
//	*p = *(p + len - 1);
//	*(p + len - 1) = '\0';
//	if (strlen(p + 1) > 1)
//	{
//		reverse_string(p + 1);
//	}
//	*(p + len - 1) = tmp;
//}
//int main()
//{
//	char str[] = "abcdef";
//	printf("%s\n", str);
//	reverse_string(str);
//	printf("%s\n", str);
//	return 0;
//}
//
//
//
//�ǵݹ�ʵ���ַ�������
//#include<stdio.h>
//#include<string.h>
//void  reverse_string(char* arr)
//{
//	char *left = arr;
//	char *right = arr + strlen(arr) - 1;
//	while (left < right)
//	{
//		char tmp = *left;
//		*left = *right;
//		*right = tmp;
//		left++;
//		right--;
//	}
//}
//
//int main()
//{
//	char* arr = "abcdef";
//	
//	printf("%s\n",reverse_string(arr));
//}
//
//#include <stdio.h>
//#include <string.h>
//
//void rev(char *buf, int size)
//{
//	int i = 0;
//	int temp;
//	for (; i< size/2; i++)
//	{
//
//		temp = buf[i];
//		buf[i] = buf[size - i - 1];
//		buf[size - i - 1] = temp;
//	}
//}
//
//int main()
//{
//	char str[20] = "hello world!";
//	int size;
//
//	size = strlen(str);
//
//	printf("%s\n", str);
//
//	rev(str, size);
//	printf("%s\n", str);
//
//	return 0;
//}
//
//
//�ݹ�ʵ��n��k�η�
//#define _CRT_SECURE_NO_WARNINGS 1
//#include<stdio.h>
//int fac(int n , int k)
//{
//	
//	if (k == 0)
//		return 1;
//	else if (k>=1)
//	{
//		return n*fac(n, k - 1);
//	}
//}
//
//int main()
//{
//	int a = 0;
//	int b = 0;
//	printf("����������������Ϊ�����ͳ˷�:\n");
//	scanf("%d %d", &a, &b);
//	int ret = fac(a, b);
//	printf("%d\n", ret);
//	return 0;
//}
//
//
//дһ���ݹ麯��DigitSum(n)������һ���Ǹ����������������������֮��
//#define _CRT_SECURE_NO_WARNINGS 1
//#include<stdio.h>
//int DigitSum(int n)
//{
//	if (n == 0)
//	{
//		return 0;    
//	}
//	else
//	{
//		int k = n % 10;
//		return (k + DigitSum(n / 10));  
//	}
//	
//}
//int main()
//{
//	int num = 0;
//	printf("������һ������:\n");
//	scanf("%d\n", &num);
//	printf("%d\n", DigitSum(num));
//	return 0;
//}
//
//�ݹ�ʵ��쳲���������
//#define _CRT_SECURE_NO_WARNINGS 1
//#include<stdio.h>
//int fib(int n)
//{
//	if (n <= 2)
//		return 1;
//	else
//		return fib(n - 1) + fib(n - 2);
//}
//int main()
//{
//	int num = 0;
//	printf("������ڼ���쳲�������:\n");
//	scanf("%d", &num);
//	printf("%d\n", fib(num));
//	return 0;
//}
//
//���n��쳲�������
//#define _CRT_SECURE_NO_WARNINGS 1
//#include<stdio.h>
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int  fib( n);
//	{
//	    int f1 = 1;
//		int f2 = 1;
//		int f3 = 0;
//		for (int i = 3; i <= n; i++)
//		{
//			f3 = f1 + f2;
//			f1 = f2;
//			f2 = f3;
//		}
//		printf("%d\n", f3);
//	}
//}
//
//
//�ݹ鷽ʽ��ӡһ��������ÿһλ
//#define _CRT_SECURE_NO_WARNINGS 1
//#include<stdio.h>
//void pri(int n)
//{
//	if (n > 9)
//	{
//		pri(n / 10);
//	}	
//	printf("%d ", n % 10);
//}
//
//int main()
//{
//	int num = 0;
//	scanf("%d", &num);
//	pri(num);
//	return 0;
//}

//�ݹ�ʵ�ֽ׳�
//#define _CRT_SECURE_NO_WARNINGS 1
//#include<stdio.h>
//int fac(int n)
//{
//	if (n == 1)
//	{
//		return 1;
//	}
//	return n*fac(n - 1);
//}
//
//
//int main()
//{
//	int num = 0;
//	scanf("%d", &num);
//	int ret = fac(num);
//	printf("%d\n", ret);
//	return 0;
//}

//�ݹ�ʵ��n��k�η�
//#define _CRT_SECURE_NO_WARNINGS 1
//#include<stdio.h>
//int  plus(int n,int k)
//{
//	if (k == 0)
//	
//		return 1;
//	else if (k >=1)
//	{
//		return n*plus(n,k-1);
//	}
//}
//int main()
//{
//	int num1 = 0;
//	int num2 = 0;
//	scanf("%d %d", &num1,&num2);
//	int ret = plus(num1, num2);
//	printf("%d\n", ret);
//	return 0;
//}



//�ݹ�ʵ��strlen
//#define _CRT_SECURE_NO_WARNINGS 1
//#include<stdio.h>
//int len(char* str)
//{
//	if (*str == '\0')//ע������Ҫ��*,������һ��
//		return 0;
//	return 1 + len(str + 1);//��Ϊchar����ָ���ŵ������ַ��ĵ�ַ,���Եڶ���+1����Ų���ַ�
//}
//
//int main()
//{
//	char* p = "abcdef";
//	int ret = len(p);
//	printf("%d\n", ret);
//	return 0;
//}



//ð������
//#define _CRT_SECURE_NO_WARNINGS 1
//#include<stdio.h>
//void bubbleSort(int arr[],int len)
//{
//	//i��ʾ����
//	for (int i = 0; i <= len - 1; i++)
//	{
//		//j��ʾÿ���бȽϼ���
//		for (int j = 0; j < len - 1 - i; j++)//len-1-i���ٲ���Ҫ�Ƚϴ���
//		{
//			if (arr[j]>arr[j + 1])
//			{
//				int tmp = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = tmp;
//			}
//		}
//	}
//}
//void Show(int arr[], int len)
//{
//	for (int i = 0; i < len; i++)
//		printf("%d ", arr[i]);
//	printf("\n");
//}
//int main()
//{
//	int arr1[] = { 1, 5, 4, 65, 43, 87, 54 };
//	int len = sizeof(arr1) / sizeof(arr1[0]);
//	Show(arr1,len);
//	bubbleSort(arr1, len);
//	Show(arr1,len);
//	return 0;
//}
//
//
//������A�е����ݺ�����B�е����ݽ��н�����������һ����
//#define _CRT_SECURE_NO_WARNINGS 1
//#include<stdio.h>
//int main()
//{
//	int i = 0;
//	int j = 0;
//	int arr1[] = { 1, 2, 3, 4, 5 };
//	int arr2[] = { 5, 4, 3, 2, 1 };
//	
//	for (; i <5; i++)
//	{
//		int tmp = arr1[i];
//		arr1[i] = arr2[i];
//		arr2[i] = tmp;
//	}
//	for (i = 0; i < 5; i++)
//		printf("%d ", arr1[i]);
//	printf("\n");
//	for (i = 0; i < 5; i++)
//		printf("%d ", arr2[i]);
//	printf("\n");
//	return 0;
//}
//
//��
//#define _CRT_SECURE_NO_WARNINGS 1
//#include<stdio.h>
//#include<stdlib.h>
//void swap(int arr1[10], int arr2[10])
//{
//	for (int i = 0; i < 10; i++)
//	{
//		int tmp = arr1[i];
//		arr1[i] = arr2[i];
//		arr2[i] = tmp;
//	}
//}
////void show(int arr1[10],int arr2[10])
////{
////	for (int i = 0; i < 10; i++)
////	{
////		printf("%d %d", arr1[i], arr2[i]);
////	}
////	printf("\n");
////}
//
//int main()
//{
//	int arr1[10];
//	int arr2[10];
//	printf("������1�����ֵ:\n");
//	for (int i = 0; i < 10; ++i)
//	{
//		int num;
//		scanf("%d", &num);
//		 arr1[i] = num;
//	}
//	printf("������2�����ֵ:\n");
//	for (int i = 0; i < 10; ++i)
//	{
//		int num;
//		scanf("%d", &num);
//		arr2[i] = num;
//	}
//	void swap(arr1,arr2);
//
//	printf("������1�����ֵ:\n");
//	for (int i = 0; i < 10; i++)
//	{
//		printf("%d\t", arr1[i]);
//	}
//	printf("������2�����ֵ:\n");
//	for (int i = 0; i < 10; i++)
//	{
//		printf("%d\t", arr2[i]);
//	}
//	return 0;
//}

//������������
//#define _CRT_SECURE_NO_WARNINGS 1
//#include<stdio.h>
//int main()
//{
//	int arr1[5] = { 1, 2, 3, 4, 5 };
//	int arr2[5] = { 5, 4, 3, 2, 1 };
//	for (int i = 0; i < 5; ++i)
//	{
//		int tmp = arr1[i];
//		arr1[i] = arr2[i];
//		arr2[i] = tmp;
//	}
//	for (int i = 0; i < 5; i++)
//	{
//		printf("%d ", arr1[i]);
//	}
//	printf("\n");
//	for (int i = 0; i < 5; i++)
//	{
//		printf("%d ", arr2[i]);
//	}
//	printf("\n");
//	return 0;
//}


//#define _CRT_SECURE_NO_WARNINGS 1
//#include <stdio.h>
//int main()
//{
//	int arr1[10] = { 0 };
//	int arr2[10] = { 0 };
//	int i = 0;
//
//
//	printf("������10������:>");
//	for (i = 0; i<10; i++)
//	{
//		scanf("%d", &arr1[i]);
//	}
//	printf("������10������:>");
//	for (i = 0; i<10; i++)
//	{
//		scanf("%d", &arr2[i]);
//	}
//	//����
//	for (i = 0; i<10; i++)
//	{
//		int tmp = arr1[i];
//		arr1[i] = arr2[i];
//		arr2[i] = tmp;
//	}
//
//	return 0;
//}

//ð������
//#define _CRT_SECURE_NO_WARNINGS 1
//#include<stdio.h>
//void bubble(int arr[], int len)
//{
//	//len = sizeof(arr) / sizeof(arr[0]);//ֱ����main��������len����
//	for (int i = 0; i <= len - 1; i++)
//	{
//		for (int j = 0; j < len - 1 - i;j++)
//		{
//			if (arr[j]>arr[j + 1])
//			{
//				int tmp = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = tmp;
//			}
//		}
//	}
//}
//void show(int arr[],int len)
//{
//	for (int i = 0; i < len ; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	printf("\n");
//}
//
//int main()
//{
//	int arr1[] = { 1, 5, 3, 9, 7, 17, 12, 35, 27, 21 };
//	int len = sizeof(arr1) / sizeof(arr1[0]);
//	show(arr1, len);
//	bubble(arr1, len);
//	show(arr1, len);
//	return 0;
//}


//��������Ϸ
//#define _CRT_SECURE_NO_WARNINGS 1
//#include<stdio.h>
//#include<stdlib.h>
//#include<string.h>
//#include<windows.h>
//#include<time.h>
//void menu()
//{
//	printf("*******��ӭ������������Ϸ****\n");
//	printf("*****************************\n");
//	printf("***********1.������Ϸ********\n");
//	printf("***********2.�˳���Ϸ********\n");
//	printf("*****************************\n");
//	printf("*****************************\n");
//}
//void game()
//{
//	srand((unsigned)time(NULL));
//	int num = rand() % 100 + 1;
//	int guess;
//	printf("���¸�����һ��:\n");
//	while (1)
//	{
//		scanf("%d", &guess);
//		if (guess > num)
//		{
//			printf("�´���,ɵ��\n");
//		}
//		else if (guess < num)
//		{
//			printf("��̱,��С��\n");
//		}
//		else
//		{
//			printf("����ô��βŲ¶�,fw\n");
//			break;
//		}
//	}
//}
//
//int main()
//{
//	
//	int quit = 0;
//	while (!quit)
//	{
//		menu();
//		printf("�����������Ƿ�ʼ��Ϸ:\n");
//		int input;
//		scanf("%d", &input);
//		switch (input)
//		{
//		case 1:
//				game();
//				printf("����?�ٸ�һ��?\n");
//				break;
//		case 2:
//				quit = 1;
//				printf("�Ͻ��߿�,����Ҳ����ү����Ϸ?\n");
//				break;
//		default:
//				printf("��̱����,һ�������䲻�Զ�!\n");
//				break;
//		}
//	}
//}

//����һ����������1.ʵ�ֺ���init() ��ʼ������Ϊȫ0 
//2.ʵ��print()  ��ӡ�����ÿ��Ԫ��  
//3.ʵ��reverse()  �����������Ԫ�ص����á�
//#define _CRT_SECURE_NO_WARNINGS 1
//#include<stdio.h>
//void init(int arr[],int len)
//{
//	//��ʼ������1-10
//	for (int i = 0; i < len ; i++)
//	{
//		arr[i] = i+1;
//	}
//}
//void pri(int arr[],int len)
//{
//	//��ӡ����ÿ��Ԫ��
//	for (int i = 0; i < len; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	printf("\n");
//}
//void ling(int arr[], int len)
//{
//	//���³�ʼ������Ϊȫ0
//	int i = 0;
//	for (int i = 0; i < len; i++)
//	{
//		arr[i] = 0;
//	}
//	printf("%d ", arr[i]);
//	printf("\n");
//}
//void reverse(int arr[], int len)
//{
//	//����Ԫ������
//	int left = 0;
//	int right = len - 1;
//	while (left < right)
//	{
//		int tmp = arr[left];
//		arr[left] = arr[right];
//		arr[right] = tmp;
//		left++;
//		right--;
//	}
//}
//
//
//int main()
//{
//	int arr[10] = { 0 };
//	int len = sizeof(arr) / sizeof(arr[0]);
//	init(arr,len);
//	pri(arr, len);
//	reverse(arr, len);
//	pri(arr, len);
//	ling(arr, len);
//	return 0;
//}


//������
//#define _CRT_SECURE_NO_WARNINGS 1
//#include<stdio.h>
//#include<stdlib.h>
//#include<string.h>
//#include<windows.h>
//#include<time.h>
//#define ROW 3
//#define COL 3
////��ʼ��һ����ά���鵱������
////չʾ����---|||
////�������
////��������
////��Ӯ
////��������
////game����(�жϷ���ֵ)
////main����������Ϸ
//
//
//void initBoard(char board[][COL], int row, int col);
//void showBoard(char board[][COL], int row, int col);
//void playerMove(char board[][COL], int row, int col);
//void computerMove(char board[][COL], int row, int col);
//char isWin(char board[][COL], int row, int col);
//void menu()
//{
//	printf("******��ӭ������������Ϸ******\n");
//	printf("******************************\n");
//	printf("***********1.Ҫ��Ͻ�*********\n");
//	printf("*****************************\n");
//	printf("***********2.�������********\n");
//	printf("****************************\n");
//	printf("****************************\n");
//}
////��ʼ������ȫΪ�ո�
//void initBoard(char board[][COL], int row, int col)
//{
//	for (int i = 0; i < row; i++)
//	{
//		for (int j = 0; j < col; j++)
//		{
//			board[i][j] = ' ';
//		}
//	}
//}
////չʾ����
//void showBoard(char board[][COL], int row, int col)
//{
//	printf("*******************************\n");
//	for (int i = 0; i < row; i++)
//	{
//		for (int j = 0; j < col; j++)
//		{
//			printf(" %c ", board[i][j]);//���������ʽΪ:  ��X��(��O��)
//			if (j < col - 1)
//				printf("|");//������� |
//		}
//		printf("\n");
//		if (i < row - 1)//����---����
//		{
//			for (int j = 0; j < col; j++)//ѭ������---������
//			{
//				printf("---");//�������---
//				if (j < col - 1)
//				{
//					printf("|");
//				}
//			}
//			printf("\n");
//		}
//	}
//	printf("*******************************\n");
//}
////�������
//void playerMove(char board[][COL], int row, int col)
//{
//	int x = 0;//��������
//	int y = 0;
//	while (1)
//	{
//		printf("������1-3������:\n");
//		scanf("%d%d", &x, &y);
//		if (x >= 1 && x <= 3 && y >= 1 && y <= 3)
//		{
//			if (board[x - 1][y - 1] == ' ')
//			{
//				board[x - 1][y - 1] = 'X';
//				break;
//			}
//		}
//		else
//		{
//			printf("�������,����������!\n");
//		}
//	}
//}
////��������
//void computerMove(char board[][COL], int row, int col)
//{
//	while (1)
//	{
//		srand((unsigned)time(NULL));
//		int x = rand() % ROW;//row=3-->0,1,2
//		int y = rand() % COL;
//		if (board[x][y] == ' ')
//		{
//			board[x][y] = 'O';
//			break;
//		}
//	}
//}
////��Ӯ
//char isWin(char board[][COL], int row, int col)
//{
//	for (int i = 0; i < row; i++)
//	{
//		//��
//		if (board[i][0] == board[i][1] && board[i][1] == board[i][2] && board[i][0] != " ")
//		{
//			return board[i][0];//����������ӵ��ַ�,����˭Ӯ
//		}
//
//		//��
//		if (board[0][i] == board[1][i] && board[1][i] == board[2][i] && board[0][i] != " ")
//		{
//			return board[0][i];
//		}
//		//�Խ���(����->����)
//		if (board[0][0] == board[1][1] && board[1][1] == board[2][2] && board[0][0] != " ")
//		{
//			return board[0][0];
//		}
//		//�Խ���(����->����)
//		if (board[0][2] == board[1][1] && board[1][1] == board[2][0] && board[0][2] != " ")
//		{
//			return board[0][2];
//		}
//		//�Ƿ�ƽ��(��������û�ո�)
//		if (isFull(board, row, col) == 1)
//		{
//			return 'Q';//ƽ��
//		}
//	}
//	return ' ';//����û��Ӯ
//}
////�ж������Ƿ�����
//int isFull(char board[][COL], int row, int col)
//{
//	for (int i = 0; i < row; i++)
//	{
//		for (int j = 0; j < col; j++)
//		{
//			if (board[i][j] == ' ')
//			{
//				return 0;//����û��
//			}
//		}
//	}
//	return 1;//��������
//}
//
//
//void game()
//{
//	char board[ROW][COL] = { 0 };
//	initBoard(board, ROW, COL);
//	showBoard(board, ROW, COL);
//	int ret = 0;
//	while (1)
//	{
//		playerMove(board, ROW, COL);
//		showBoard(board, ROW, COL);
//		ret = isWin(board, ROW, COL);
//		if (ret != ' ')
//		{
//			break;//�϶��и���Ӯ��
//		}
//		computerMove(board, ROW, COL);
//		showBoard(board, ROW, COL);
//		ret = isWin(board, ROW, COL);
//		if (ret != ' ')
//		{
//			break;//�϶��и���Ӯ��
//		}
//	}
//	if (ret == 'Q')
//	{
//		printf("ƽ��\n");
//		return;
//	}
//	if (ret == 'X')
//	{
//		printf("���Ӯ\n");
//		return;
//	}
//	if (ret == 'O')
//	{
//		printf("����Ӯ\n");
//	}
//}
//
//
//int main()
//{	
//	int quit = 0;
//	while (!quit)
//	{
//		menu();
//		printf("��1����Ϸ,��2�ݰ�->\n");
//		int input = 0;
//		scanf("%d", &input);
//		switch (input)
//		{
//		case 1:
//			game();
//			printf("����?����һ��?\n");
//			break;
//		case 2:
//			quit = 1;
//			printf("�˳���Ϸ!\n");
//			break;
//		default:
//			printf("������������!\n");
//			break;
//		}
//	}
//	return 0;
//}

//#define _CRT_SECURE_NO_WARNINGS 1
//#include<stdio.h>
//int main()
//{
//	int a = sizeof(short);
//	int b = sizeof(int);
//	int c = sizeof(long);
//	int d = sizeof(long long);
//	printf("The size of short is %d bytes!\n", a);
//	printf("The size of int is %d bytes!\n", b);
//	printf("The size of long is %d bytes!\n", c);
//	printf("The size of long long is %d bytes!\n", d);
//	return 0;
//}

//printf�ķ���ֵ
//#define _CRT_SECURE_NO_WARNINGS 1
//#include<stdio.h>
//int main()
//{
//	int a = printf("Hello world!");
//	printf("\n");
//	printf("%d", a);
//	return 0;
//}

//#define _CRT_SECURE_NO_WARNINGS 1
//#include<stdio.h>
//int main()
//{
//	int a, b, c;
//	scanf("%4d%2d%2d", &a, &b, &c);
//	printf("year=%d\n", a);
//	printf("month=%02d\n", b);
//	printf("date=%02d\n", c);
//	return 0;
//}

//#define _CRT_SECURE_NO_WARNINGS 1
//#include<stdio.h>
//int main()
//{
//	int a, b;
//	scanf("%d%d", &a, &b);
//	int t = a;
//	a = b;
//	b = t;
//	printf("%d%d", a, b);
//	return 0;
//}


//#define _CRT_SECURE_NO_WARNINGS 1
//#include<stdio.h>
//int main()
//{
//	int a = 14;
//	int b = 2;
//	int c = a / b;
//	int d = a%b;
//	printf("%d %d", c, d);
//	return 0;
//}

//��һ����λ�������������
//#define _CRT_SECURE_NO_WARNINGS 1
//int main()
//{
//	int a, b[4];
//	scanf("%d", &a);
//	b[0] = a % 10;
//	b[1] = (a % 100) / 10;
//	b[2] = (a % 1000) / 100;
//	b[3] = a / 1000;
//	for (int i = 0; i < 4; i++)
//	{
//		printf("%d", b[i]);
//	}
//	return 0;
//}

//����������ʱ������������������������
//��
//#define _CRT_SECURE_NO_WARNINGS 1
//#include<stdio.h>
//int main()
//{
//	int a, b;
//	scanf("%d %d", &a, &b);
//	a = a^b;
//	b = a^b;
//	a = a^b;
//	printf("%d %d\n", a, b);
//	return 0;
//}
//��
//#define _CRT_SECURE_NO_WARNINGS 1
//#include<stdio.h>
//int main()
//{
//	int a, b;
//	scanf("%d %d", &a, &b);
//	a = a + b;
//	b = a - b;
//	a = a - b;
//	printf("%d %d\n", a, b);
//	return 0;
//}


//дһ���������ز����������� 1 �ĸ�����
//��
//#define _CRT_SECURE_NO_WARNINGS 1
//#include <stdio.h>
//int main()
//{
//	int num = 10;
//	int count = 0;//����
//	while (num)
//	{
//		if (num % 2 == 1)
//			count++;
//		num = num / 2;
//	}
//	printf("��������1�ĸ��� = %d\n", count);
//	return 0;
//}
////��
//#define _CRT_SECURE_NO_WARNINGS 1
//#include <stdio.h>
//int main()
//{
//	int num = -1;
//	int i = 0;
//	int count = 0;//����
//	for (i = 0; i<32; i++)
//	{
//		if (((num >> i) & 1) == 1)
//			count++;
//	}
//	printf("��������1�ĸ��� = %d\n", count);
//	return 0;
//}
//
//
//��
//#define _CRT_SECURE_NO_WARNINGS 1
//#include <stdio.h>
//int main()
//{
//	int num;
//	scanf("%d", &num);
//	int i = 0;
//	int count = 0;//����
//	while (num)
//	{
//		count++;
//		num = num&(num - 1);
//	}
//	printf("��������1�ĸ��� = %d\n", count);
//	return 0;
//}

//����int��32λ������m��n�Ķ����Ʊ���У��ж��ٸ�λ(bit)��ͬ
//��������:1999 2299     �������:7
//#define _CRT_SECURE_NO_WARNINGS 1
//#include<stdio.h>
//int Differ(int x,int y)
//{
//	int n = x^y;
//	int count = 0;
//	while (n != 0)
//	{
//		count++;
//		n = n&(n - 1);
//
//	}
//	return count;
//}
//int main()
//{
//	int a = 1999;
//	int b = 2299;
//	printf("����������%d������λ��ͬ!\n", Differ(a, b));
//	return 0;
//}



//#define _CRT_SECURE_NO_WARNINGS 1
//#include<stdio.h>
//int main()
//{
//	int a, b;
//	scanf("%d %d", &a, &b);
//	printf("%d %d", b, a);
//	return 0;
//}

//����һ������{1,2,3,2,1},�ҵ�����һ�ε�����
//#define _CRT_SECURE_NO_WARNINGS 1
//#include<stdio.h>
//int main()
//{
//	int a = 0;
//	int arr[5] = { 1, 2, 3, 2, 1 };
//	for (int i = 0; i < 5; i++)
//	{
//		a = a ^ arr[i];	
//	}
//	printf("%d\n", a);
//	return 0;
//}

//����int��32λ������m��n�Ķ����Ʊ���У��ж��ٸ�λ(bit)��ͬ
//��������:1999 2299     �������:7
//#define _CRT_SECURE_NO_WARNINGS 1
//#include <stdio.h>
//int Differ(int x, int y)
//{
//	int a = x^y;//���֮��ͬλ����1,��ͬλ��Ϊ0
//	int count = 0;
//	while (a)
//	{
//		a = a&(a - 1);
//		count++;
//	}
//	return count;
//}
//int main()
//{
//	int x = 1999;
//	int y = 2299;
//	int ret = Differ(x, y);
//	printf("%d\n", ret);
//	return 0;
//}


//дһ��������ӡarr��������ݣ���ʹ�������±꣬ʹ��ָ�롣
//#define _CRT_SECURE_NO_WARNINGS 1
//#include<stdio.h>
//void pri(int *arr,int len)
//{
//	int *p = arr;
//	for (int i = 0; i < len; i++)
//	{
//		printf("%d ", *(p+i));
//	}
//}
//
//int main()
//{
//	int arr[5] = { 1, 2, 3, 4, 5 };
//	int len = sizeof(arr) / sizeof(arr[0]);
//	pri(arr, len);
//	return 0;
//}

//��Sn=a+aa+aaa+aaaa+aaaaa��ǰ5��֮�ͣ�����a��һ�����֣�
//���磺2 + 22 + 222 + 2222 + 22222
//#define _CRT_SECURE_NO_WARNINGS 1
//#include<stdio.h>
//int main()
//{
//	int a = 0;
//	int n = 0;
//	int sum = 0;
//	int tmp = 0;
//	scanf("%d %d", &a, &n);
//	for (int i = 0; i < n; i++)
//	{
//		tmp = tmp * 10 + a;
//		sum += tmp;
//	}
//	printf("%d\n", sum);
//	return 0;
//}




//����ʵ���ַ�������,Ҫ��ʹ��ָ��
//#define _CRT_SECURE_NO_WARNINGS 1
//#include <stdio.h>
//#include<string.h>
//void reverse(char* str)
//{
//	char* left = str;//������������Ԫ�ص�ַ
//	char* right = str + strlen(str) - 1;//str������Ԫ�ظ����������һ��Ԫ�صĵ�ַ
//	while (left < right)
//	{
//		char tmp = *left;
//		*left = *right;
//		*right = tmp;
//		++left;
//		--right;
//	}
//}
//
//int main()
//{
//	char str1[] = "woaiLiLan";
//	reverse(str1);
//	printf("%s\n", str1);
//	return 0;
//}
//
//
//ˮ�ɻ���(0-100000)
//��ˮ�ɻ�������ָһ��nλ�������λ���ֵ�n�η�֮��ȷ�õ��ڸ���������:153��1^3��5^3��3^3����153��һ����ˮ�ɻ�������
//#define _CRT_SECURE_NO_WARNINGS 1
//#include<stdio.h>
//#include<math.h>
//#include<windows.h>
//void Flower()
//{
//	for (int i = 0; i <= 100000; i++)
//	{
//		int n = i;
//		int num = 0;
//		int sum = 0;
//		while (n)//�����Ǹ���λ��
//		{
//			n = n / 10;
//			num++;//ȷ���η���
//		}
//		n = i;
//		while (n)
//		{
//			//pow(n,m)��ʾn��m�η�;
//			sum = sum + (int)pow(n % 10, num);//ÿ��n%10�õ��������һλ����;
//			n = n / 10;
//		}
//		if (sum == i)
//		{
//			printf("%d\n", i);
//		}
//	}
//}
//
//int main()
//{
//	Flower();
//	system("pause");
//	return 0;
//}


//ɨ��
//#define _CRT_SECURE_NO_WARNINGS 1
//#include<stdio.h>
//#include<stdlib.h>
//#include<math.h>
//#include<windows.h>
//#include<time.h>
//#define ROW 12
//#define COL 12
//#define NUM 20//����20����
//void  initBoard(char board[][COL], int row, int col, char elem);
//void  setMine(char mine[][COL], int row, int col);
//void  showBoard(char board[][COL], int row, int col);
//char  getNum(char mine[][COL], int x, int y);//'0','1','2'
//
//void  initBoard(char board[][COL], int row, int col, char elem)
//{
//	for (int i = 0; i < row; i++)
//	{
//		for (int j = 0; j < col; j++)
//		{
//			board[i][j] = elem;
//		}
//	}
//}
//void  setMine(char mine[][COL], int row, int col)
//{
//	int n = NUM;
//	while (n)
//	{
//		int x = rand() % (row - 2) + 1;
//		int y = rand() % (col - 2) + 1;
//		mine[x][y] = '1';
//		n--;
//	}
//}
//void  showBoard(char board[][COL], int row, int col)
//{
//	int i = 1;
//	printf("   ");
//	for (; i <= col - 2; i++)
//	{
//		printf(" %-2d|", i);
//	}
//	printf("\n");
//	for (i = 1; i <= col - 2; i++)
//	{
//		printf("%3s", "----");
//	}
//	printf("---\n");
//
//	for (i = 1; i <= row - 2; i++)
//	{
//		printf("%2d|", i);
//		int j = 1;
//		for (; j <= col - 2; j++)
//		{
//			printf(" %-2c|", board[i][j]);
//		}
//		printf("\n");
//		for (j = 1; j <= col - 2; j++)
//		{
//			printf("%3s", "----");
//		}
//		printf("---\n");
//	}
//}
//char  getNum(char mine[][COL], int x, int y)
//{
//	return mine[x - 1][y - 1] + mine[x - 1][y] + mine[x - 1][y + 1] + \
//		mine[x][y - 1] + mine[x][y + 1] + \
//		mine[x + 1][y - 1] + mine[x + 1][y] + mine[x + 1][y + 1] - 7 * '0';
//}
//void game()
//{
//	srand((unsigned)time(NULL));
//	char board[ROW][COL];
//	char mine[ROW][COL];
//	initBoard(board, ROW, COL, '*');//��ʼ�����Ϊȫ*
//	initBoard(mine, ROW, COL, '0');
//	setMine(mine, ROW, COL);//���� 
//	int count = (ROW - 2)*(COL - 2) - NUM;//û�׸�������
//	do
//	{
//		int x = 0;
//		int y = 0;
//		showBoard(board, ROW, COL);
//		printf("����Ҫɨ��λ��-> ");
//		scanf("%d %d", &x, &y);
//		if (x<1 || x>10 || y<1 || y>10)
//		{
//			printf("��������!\n");
//			continue;//��������ѭ��,�ָ����ʼ
//		}
//		if (board[x][y] != '*')
//		{
//			printf("�Ѿ���ɨ����!\n");
//			continue;
//		}
//		if (mine[x][y] == '0')
//		{
//			count--;//�ų���û�׵ĸ���
//			char num = getNum(mine, x, y);
//			board[x][y] = num;
//		}
//		else
//		{
//			printf("������(%d,%d)����,���b��ը��!\n", x, y);
//			break;
//		}
//	} while (count>0);
//	//��������˳�ѭ��:��break�ڲ�����ѭ������
//	if (count > 0)
//	{
//		printf("��ֱ�ӱ�ը��!\n");
//	}
//	else
//	{
//		printf("��ϲ���bɨ�׳ɹ�!\n");
//	}
//	showBoard(mine, ROW, COL);
//}
//void menu()
//{
//	printf("********��ӭ����ɨ����Ϸ******\n");
//	printf("*****************************\n");
//	printf("**************1.play*********\n");
//	printf("**************2.quit*********\n");
//	printf("*****************************\n");
//}
//int main()
//{
//	int quit = 0;
//	while (!quit)
//	{
//		menu();
//		int input;
//		printf("�����������Ƿ�ʼ��Ϸ:\n");
//		scanf("%d", &input);
//		switch (input)
//		{
//		case 1:
//			game();
//			printf("����?�ٸ�һ��?\n");
//			break;
//		case 2:
//			quit = 1;
//			printf("�������!\n");
//			break;
//		default:
//			printf("���������䲻��?������!\n");
//			break;
//		}
//	}
//	return 0;
//}

//ģ��ʵ�ֿ⺯��strlen
//#define _CRT_SECURE_NO_WARNINGS 1
//#include<stdio.h>
//int len(char* p)
//{
//	if (*p == '\0')
//	{
//		return 0;
//	}
//	else
//	{
//		return 1 + len(p + 1);
//	}
//}
//int main()
//{
//	char str[500] = "LiLan is my honey!";
//	printf("%d\n", len(str));
//	return 0;
//}

//ģ��ʵ�ֿ⺯��strcpy
//#define _CRT_SECURE_NO_WARNINGS 1
//#include<stdio.h>
//void copy(char* str1,char* str2)
//{
//	for (int i = 0; ; i++)
//	{
//		*(str1 + i) = *(str2 + i);
//		if (*(str2 + i) == '\0')
//			break;
//	}
//}
//
//int main()
//{
//	char str1[99999];
//	char str2[99999];
//	scanf("%s", str2);
//	copy(str1, str2);
//	printf("���ƺ�str2������Ϊ:%s\n", str1);
//	return 0;
//}


//ָ���ӡ����
//#define _CRT_SECURE_NO_WARNINGS 1
//#include<stdio.h>
//void Print(int *arr, int len)
//{
//	int *p = arr;//��������Ԫ�صĵ�ַ��p
//	for (int i = 0; i < len; i++)
//	{
//		printf("%d\t", *(p + i));//ָ���������Ų,�����ô�ӡ���洢������
//      //printf("%d\t",p[i])����һ��,[]���н����ù���
//	}
//}
//int main()
//{
//	int arr[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	int len = sizeof(arr) / sizeof(arr[0]);
//	Print(arr, len);
//	return 0;
//}

//ָ��ʵ��strcpy
//#define _CRT_SECURE_NO_WARNINGS 1
//#include<stdio.h>
//void copy(char* str1,char* str2)
//{
//	for (int i = 0;; i++)
//	{
//		*(str2 + i) = *(str1 + i);
//		if (*(str1+i) == '\0')
//			break;
//	}
//}
//int main()	
//{
//	char str1[500];
//	char str2[500];
//	scanf("%s",str1);
//	copy(str1,str2);
//	printf("���ƺ�str2������Ϊ:%s\n", str2);
//	return 0;
//}


//#define _CRT_SECURE_NO_WARNINGS 1
//#include<stdio.h>
//#include<string.h>
//int main()
//{
//	char str1[9999];
//	//char str2 = "LiLan is my honey!"
//	strcpy(str1, "LiLan is my honey!");
//	printf("%s\n", str1);
//	return 0;
//}


//ʵ�ֿ⺯��strlen
//#define _CRT_SECURE_NO_WARNINGS 1
//#include<stdio.h>
//int len(char* p)
//{
//	
//	if ( *p== '\0')
//		return 0;
//	else
//	{
//		return 1 + len(p + 1);//�õݹ�
//	}
//}
//int main()
//{
//	char str[] = "wo ai wo ma ma !";
//	printf("%d\n", len(str));
//	return 0;
//}


//ָ��ʵ��strlen
//#define _CRT_SECURE_NO_WARNINGS 1
//#include<stdio.h>
//int myStrlen(char *p)
//{
//	char *s = p;
//	while (*s != '\0')
//	{
//		s++;
//	}
//	return s - p;
//}
//
//int main()
//{
//	char *z = "lilan is my girl!";
//	printf("%d\n", myStrlen(z));
//	return 0;
//}

//��������Ϸ
//#define _CRT_SECURE_NO_WARNINGS 1
//#include<stdio.h>
//#include<stdlib.h>
//#include<string.h>
//#include<time.h>
//void menu()
//{
//	printf("*******��ӭ������������Ϸ*******\n");
//	printf("*******************************\n");
//	printf("****************1.play*********\n");
//	printf("****************2.quit********\n");
//	printf("******************************\n");
//}
//void game()
//{
//	srand((unsigned)time(NULL));
//	int ret = rand() % 100 + 1;
//	int guess = 0;
//	printf("��������������:\n");
//	while (1)
//	{		
//		scanf("%d", &guess);
//		if (ret > guess)
//		{
//			printf("��С��!\n");
//		}
//		if (ret < guess)
//		{
//			printf("�´���!\n");
//		}
//		if (ret == guess)
//		{
//			printf("��ϲ��,�¶���!\n");
//			break;
//		}
//	}
//}
//int main()
//{
//	int quit = 0;
//	while (!quit)
//	{
//		menu();
//		int input;
//		printf("���������ѡ���Ƿ�ʼ��Ϸ:\n");
//		scanf("%d", &input);
//		switch (input)
//		{
//		case 1:
//			printf("��ʼ��Ϸ!\n");
//			game();
//			printf("�Ƿ��ٿ�ʼ��һ��?\n");
//			break;
//		case 2:
//			quit = 1;
//			printf("�˳���Ϸ,ף�����!\n");
//			break;
//		default:
//			printf("�����������!\n");
//			break;
//		}
//	}
//	return 0;
//}


//ˮ�ɻ���1-100000
//#define _CRT_SECURE_NO_WARNINGS 1
//#include<stdio.h>
//#include<stdlib.h>
//#include<math.h>
//void Water()
//{
//	for (int i = 0; i < 100000; i++)
//	{
//		int n = i;
//		int num = 0;
//		int sum = 0;
//		while (n)//�����Ǹ���λ��,ȷ���η���
//		{
//			n = n / 10;
//			num++;//ÿ��һ�μ�һ��
//		}
//		n = i;
//		while (n)
//		{
//			sum = sum + (int)pow(n%10,num);
//			n = n / 10;
//		}
//		if (sum == i)
//			printf("%d\n", i);
//	}
//}
//
//int main()
//{
//	Water();
//	return 0;
//}



//#include <stdio.h>
//int main()
//{
//	//int *p = NULL;
//	int arr[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 0 };
//	printf("%d", arr);
//	printf("\n");
//	printf("%d", &arr+1);
//	return 0;
//}


//qsort(������)
//void qsort(void *base, int num, int width, int( *compare)( void *elem1,  void *elem2));
//#define _CRT_SECURE_NO_WARNINGS 1
//#include<stdio.h>
//#include<stdlib.h>
//int cmp_int(const void *elem1, const void *elem2)
//{
//    return	*((int*)elem1) - *((int*)elem2);
//}
//int main()
//{
//	int arr[] = { 1, 3, 5, 7, 9, 2, 4, 6, 8, 0 };
//	int len = sizeof(arr) / sizeof(arr[0]);
//	qsort(arr, len, sizeof(int), cmp_int);
//	for (int i = 0; i < len; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}



//������(�ձ�)
//#define _CRT_SECURE_NO_WARNINGS 1
//#include<stdio.h>
//#include<stdlib.h>
//int cmp_int(const void*elem1, const void*elem2)
//{
//	return *((int *)elem1) - *((int *)elem2);
//}
////һ��Ҫ��i
//void swap(void*elem1, void*elem2, int size)
//{
//	for (int i = 0; i < size; i++)
//	{
//		//һ���ֽ�һ���ֽڽ���
//		char tmp = *((char*)elem1 + i);
//		*((char*)elem1 + i) = *((char*)elem2 + i);
//		*((char*)elem2 + i) = tmp;
//	}
//}
////lenΪ���鳤��,sizeΪ�������ʹ�С
//void MyQsort(void *base, int len, int size,int(*cmp)(void *elem1, void *elem2))
//{
//	for (int i = 0; i < len - 1; i++)
//	{
//		for (int j = 0; j < len - 1 - i; j++)
//		{
//			//if(arr[i]>arr[i+1])
//			if (cmp((char*)base + j*size, (char*)base + (j + 1)*size)>0)
//			{
//				swap((char*)base + j*size, (char*)base + (j + 1)*size,size);
//			}
//		}
//	}
//}
//int main()
//{
//	int arr[] = { 1, 3, 5, 7, 9, 2, 4, 6, 8, 0 };
//	int len = sizeof(arr) / sizeof(arr[0]);
//	MyQsort(arr, len, sizeof(int),cmp_int);
//	for (int i = 0; i < len; i++)
//	{
//		printf("%d\t", arr[i]);
//	}
//	return 0;
//}


////����ˮ��1ƿ��ˮ1Ԫ��2����ƿ���Ի�һƿ��ˮ����20Ԫ�����Զ�����ˮ�����ʵ�֣���
//#pragma warning(disable:4996)
//#include<stdio.h>
//int Juice(int num)
//{
//	int pop = num;
//	int empty = num;
//	while (empty > 1)
//	{
//		pop = pop + empty / 2;
//		empty = empty / 2 + empty % 2;
//	}
//	return pop;
//}
//
//int main()
//{
//	int num = 0;
//	printf("���������ж���Ǯ:\n");
//	scanf("%d", &num);
//	printf("���ܺȵ�%dƿ��ˮ!\n", Juice(num));
//	return 0;
//}

//����һ���������飬ʵ��һ��������
//�����������������ֵ�˳��ʹ�����������е�����λ�������ǰ�벿�֣�
//����ż��λ������ĺ�벿�֡�
//#pragma warning(disable:4996)
//#include<stdio.h>
//void SwapArr(int *arr, int len)
//{
//	int left = 0;
//	int right = len - 1;
//	for (int i = 0; i < len; i++)
//	{
//		while ((left < right) && arr[left] % 2 == 1)//�������ҵ�ż��ֹͣ
//		{
//			left++;
//		}
//		while ((left < right) && arr[right] % 2 == 0)//���������ҵ�����ֹͣ
//		{
//			right--;
//		}
//		if (left < right)
//		{
//			int tmp = arr[left];
//			arr[left] = arr[right];
//			arr[right] = tmp;
//		}
//	}
//}
//int main()
//{
//	int arr[] = { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9 };
//	int len = sizeof(arr) / sizeof(arr[0]);
//	SwapArr(arr, len);
//	for (int i = 0; i < len; i++)
//	{
//		printf("%d\t", arr[i]);
//	}
//	return 0;
//}


////��ӡ����
//#pragma warning(disable:4996)
//#include <stdio.h>
//#include <windows.h>
//#define num 7
//int main()
//{
//	//��������ϰ벿��
//	int i = 1;
//	for (; i <= num; i++)//���ø�forѭ�����޶�����
//	{
//		int j = 0;
//		for (; j < num - i; j++)//��forѭ�����޶�ÿ�еĿո���
//		{
//			printf(" ");
//		}
//		int k = 0;
//		for (; k < 2 * i - 1; k++)//��forѭ�����޶�ÿ�е�������
//		{
//			printf("*");
//		}
//		printf("\n");
//	}
//	//��������°벿��,�����ξ��жԳ��ԣ�����6�к�ǰ6���ǶԳƵģ���������Ҫnum-1
//	for (int i = num - 1; i > 0; i--)
//	{
//		int j = 0;
//		for (; j < num - i; j++)//��forѭ�����޶�ÿ�еĿո���
//		{
//			printf(" ");
//		}
//		int k = 0;
//		for (; k < 2 * i - 1; k++)//��forѭ�����޶�ÿ�е�������
//		{
//			printf("*");
//		}
//		printf("\n");
//	}
//	system("pause");
//	return 0;
//}

//�ݹ�ʵ�����쳲�������
//#pragma warning(disable:4996)
//#include<stdio.h>
//int fib(int n)
//{
//	if (n < 3)
//		return 1;
//	return fib(n - 1) + fib(n - 2);
//}
//int main()
//{
//	int num = 0; 
//	printf("������ڼ���쳲�������:\n");
//	while (scanf("%d", &num) != EOF)
//	{
//		printf("%d\n", fib(num));
//	}
//	return 0;
//}

//#pragma warning(disable:4996)
//#include<stdio.h>
//int main()
//{
//	int a[3][2] = { (0, 1), (2, 3), (4, 5) };
//	int *p;
//	p = a[0];
//	printf("%d", p[3]);
//				//*(p+3)
//	return 0;
//}

//#include<stdio.h>
//int main()
//{
//	char *c[] = { "ENTER", "NEW", "POINT", "FIRST" };
//	char**cp[] = { c + 3, c + 2, c + 1, c };
//	char***cpp = cp;
//	printf("%s\n", **++cpp);//POINT 
//	printf("%s\n", *--*++cpp + 3);//ER
//	printf("%s\n", *cpp[-2] + 3);//ST
//	printf("%s\n", cpp[-1][-1] + 1);//EW
//
//	/*char* a[] = { "work", "at", "alibaba" };
//	char**pa = a;
//	pa++;
//	printf("%s\n", *pa);*/
//	return 0;
//}


//��С������
//#pragma warning (disable:4996)
//#include<stdio.h>
//void beiShu(int a, int b)
//{
//	int c;
//	int m = a;
//	int n = b;
//	while (b)
//	{
//		c = a%b;
//		a = b;
//		b = c;
//	}
//	int i = m / a;
//	int j = n / a;
//	printf("%d\n", i*j*a);
//}
//
//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d %d", &a, &b);
//	beiShu(a, b);
//	return 0;
//}

//��������,�����ڲ�������
//#pragma warning(disable:4996)
//#include<stdio.h>
//#include<string.h>
////��������
//void nizhi(char *left,char* right)
//{
//	while (left < right)
//	{
//		char tmp = *left;
//		*left = *right;
//		*right = tmp;
//		left++;
//		right--;
//	}
//}
////�����ڲ�������
//void reverse(char *str)
//{
//	int len = strlen(str);
//	//�ų�һ����ĸ�����
//	if (len <= 1)
//		return;
//	//��������
//	nizhi(str, str + len - 1);
//	//���յ��ʽ��оֲ�����
//	char* cur = str;
//	while (*cur)
//	{
//		//���ҵ��ʱ߽�:�ո�  ��'\0'
//		char* start = cur;
//		while (*cur != ' '&&*cur != '\0')
//			++cur;
//		//��ǰ���ʵ�����[start,cur)
//		//��ת����
//		nizhi(start, cur - 1);
//		//������һ�����ʵ�����
//		//�����ո�
//		while (*cur == ' ')
//			++cur;
//	}
//}
//void test()
//{
//	char str[999] = { 0 };
//	gets(str);
//	reverse(str);
//	printf("%s\n", str);
//}
//int main()
//{
//	test();
//	return 0;
//}



////���Լ��
//#pragma warning(disable:4996)
//#include<stdio.h>
//int yueShu(int a,int b)
//{
//	int c = 0;
//	while (b)
//	{
//		c = a%b;
//		a = b;
//		b = c;
//	}
//	return a;
//}
//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d %d", &a, &b);
//	printf("%d\n", yueShu(a, b));
//	return 0;
//}

////��С������
//#pragma warning(disable:4996)
//#include<stdio.h>
//int beiShu(int a, int b)
//{
//	int m = a;
//	int n = b;
//	while (b)
//	{
//		int c = a%b;
//		a = b;
//		b = c;
//	}
//	return m*n / a;
//}
//int main()
//{
//	int a;
//	int b;
//	scanf("%d %d", &a, &b);
//	printf("%d\n", beiShu(a, b));
//	return 0;
//}



//��ת�ַ���,���ʲ�����
//#pragma warning(disable:4996)
//#include<stdio.h>
//#include<string.h>
//void reverseStr(char* left, char* right)
//{
//	while (left < right)
//	{
//		char tmp = *left;
//		*left = *right;
//		*right = tmp;
//		left++;
//		right--;
//	}
//}
//void reverse(char* str)
//{
//	int len = strlen(str);
//	if (len <= 1)
//		return;
//	reverseStr(str, str + len - 1);
//	char* cur = str;
//	while (*cur)
//	{
//		char* start = cur;
//		while (*cur != ' '&&*cur != '\0')
//			++cur;
//		//��ǰ��������[start,cur) 
//		reverseStr(start, cur - 1);
//		//������һ����������
//		while(*cur == ' ')
//		++cur;
//	}
//}
//void test()
//{
//	char str[999] = { 0 };
//	gets(str);
//	reverse(str);
//	printf("%s\n", str);
//}
//int main()
//{
//	test();
//	return 0;
//}





//���ַ�ʽģ��ʵ��strlen
//��ָ��-ָ��
//#pragma warning (disable:4996)
//#include<stdio.h>
//int MyStrlen(char* p)
//{
//	char* s = p;
//	while (*s != '\0')
//	{
//		s++;
//	}
//	return s-p;
//}
//int main()
//{
//	char* a = "Lilan is my girl!";
//	printf("%d\n", MyStrlen(a));
//	return 0;
//}
//
//�ڵݹ�
//#include<stdio.h>
//int MyStrlen(char* str)
//{
//	if (*str == '\0')
//		return 0;
//	return 1 + MyStrlen(str + 1);
//}
//int main()
//{
//	char* str1 = "lilan is cute!";
//	printf("%d\n", MyStrlen(str1));
//	return 0;
//}
//
//�ۼ�����
//#include<stdio.h>
//int MyStrlen(char* str)
//{
//	int count = 0;
//	while (*str != '\0')
//	{
//		count++;
//		str++;
//	}
//	return count;
//}
//int main()
//{
//	char *str = "Lilan is cute!";
//	printf("%d\n", MyStrlen(str));
//	return 0;
//}

//ģ��ʵ��strcpy
//#pragma warning(disable:4996)
//#include<stdio.h>
//void MyStrcpy(char *str1, char *str2)
//{
//	for (int i = 0;; i++)
//	{
//		*(str2 + i) = *(str1 + i);
//		if (*(str1+i) == '\0')
//			break;
//	}
//}
//int main()
//{
//	char str1[999];
//	char str2[999];
//	scanf("%s", str1);
//	MyStrcpy(str1,str2);
//	printf("���ƺ�str2������Ϊ:%s\n", str2);
//	return 0;
//}

//ģ��ʵ��strcmp
//#pragma warning(disable:4996)
//#include<stdio.h>
//#include<assert.h>
//int MyStrcmp(char *str1, char *str2)
//{
//	assert(str1&&str2);
//	if (str1 == NULL)
//		return -1;
//	if (str2 == NULL)
//		return 1;
//	while (*str1 == *str2)
//	{
//		if (*str1 == '\0')
//		{
//			return 0;
//		}
//		str1++;
//		str2++;
//	}
//	if (*str1 > *str2)
//		return 1;
//	else
//	{
//		return -1;
//	}
//}
//int main()
//{
//	char* str1 = "azcd";
//	char* str2 = "afcd";
//	printf("%d\n", MyStrcmp(str1, str2));
//	return 0;
//}


//ģ��ʵ��strcat(�ַ���ƴ��)
//#pragma warning(disable:4996)
//#include<stdio.h>
//char* MyStrcat(char *dest,char *src)
//{
//	char *p = dest;
//	while (*dest != '\0')
//	{
//		dest++;
//	}
//	while (*src != '\0')
//	{
//		*dest = *src;
//		dest++;
//		src++;
//	}
//	*dest = '\0';
//	return p;
//}
//int main()
//{
//	//ע�����ﲻ����ָ��,�ַ�������ֻ����,�����޸�
//	//������ʽ�Ƕ��ڴ��һ�ݿ���
//	char dest[20] = "bit";
//	char *src = "hello";
//	MyStrcat(dest, src);
//	printf("%s\n", dest);
//	return 0;
//}

//ģ��ʵ��strstr
//#pragma warning(disable:4996)
//#include<stdio.h>
//char* MyStrstr(char* str1, char* str2)
//{
//	char* start = str1;
//	while (*start != '\0')
//	{
//		char* s1 = start;//ÿ�ζ���start��ʼ
//		char* s2 = str2; //ÿ�δ�ͷ��ʼ
//		while (s1 && s2 && *s1 == *s2)
//			//�����Ӵ���ͬ,�������,��������\0
//		{
//			s1++;
//			s2++;
//		}
//		if (*s2 == '\0')
//		{
//			return start;
//		}
//		start++;//��һ��֮�����������һ��
//	}
//	return NULL;
//}
//int main()
//{
//	char *str1 = "likunlong";
//	char* str2 = "kun";
//	printf("%s\n", MyStrstr(str1, str2));
//	return 0;
//}


//memcpy
//#pragma warning(disable:4996)
//#include<stdio.h>
//#include<string.h>
//int main()
//{
//	int dest[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9 };
//	int src[] = { 1, 1, 1, 1 };
//	memcpy(dest, src, 16);
//	int len = sizeof(dest) / sizeof(dest[0]);
//	for (int i = 0; i < len; i++)
//	{
//		printf("%d ", dest[i]);
//	}
//	return 0;
//}


//ģ��ʵ��memcpy
//#pragma warning(disable:4996)
//#include<stdio.h>
//void MyMemcpy(char* dest,char* src,int size,int num)
//{
//	int i = 0;
//	int ret = size*num;
//	for (;i<ret; i++)
//	{
//		
//		*(dest +i ) = *(src + i);
//		if (*src == '\0')
//			break;
//	}
//}
//int main()
//{
//	char dest[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 0 };
//	char src[] = { 1, 1, 1, 1 };
//	MyMemcpy(dest, src, 1, 4);
//	int len = sizeof(dest) / sizeof(dest[0]);
//	for (int i = 0; i < len; i++)
//	{
//		printf("%d ", dest[i]);
//	}
//	return 0;
//}



//memcpy
//�ڴ��ص�,��׼δ����,�����ʲô����Ҫ
//#pragma warning(disable:4996)
//#include<stdio.h>
//#include<memory.h>
//int main()
//{
//	int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8 };
//	memcpy(arr + 2, arr, 16);
//	int i = 0;
//	for (; i < 8; i++)
//		printf("%d ", arr[i]);
//	return 0;
//}

//ģ��ʵ��memcpy
//#pragma warning(disable:4996)
//#include<stdio.h>
//#include<memory.h>
//void* MyMemcpy(void* dest, void* src, int count)
//{
//	void* ret = dest;
//	while (count != 0)
//	{
//		*(char*)dest = *(char*)src;
//		((char*)dest)++;//++���ȼ���,��ǰ�������
//		((char*)src)++;
//		count--;
//	}
//	return ret;
//}
//int main()
//{
//	int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8 };
//	//MyMemcpy(arr, arr + 2, 16);
//	MyMemcpy(arr+2,arr,16);
//	int i = 0;
//	for (; i < 8; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}



//ģ��ʵ��memmove
//#pragma warning(disable:4996)
//#include<stdio.h>
//void* MyMemmove(void* dest, void* src, int count)
//{
//	void* ret = dest;
//	if (src > dest)
//	{
//		while (count != 0)
//		{
//			*(char*)dest = *(char*)src;
//			((char*)dest)++;//++���ȼ���,��ǰ�������
//			((char*)src)++;
//			count--;
//		}
//	}
//	//src<dest�����,�����ڴ��ص�,�Ӻ���ǰ����
//	else
//	{
//		count--;//15��
//		while (count >= 0)
//		{
//			*((char*)dest + count) = *((char*)src + count);
//			count--;
//		}
//	}
//	return ret;
//}
//int main()
//{
//	int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8 };
//	MyMemmove(arr + 2, arr, 16);
//	int i = 0;
//	for (; i < 8; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}



//���Ͼ���
//��һ�����־��󣬾����ÿ�д������ǵ����ģ�������ϵ����ǵ����ģ����д�����������ľ����в���ĳ�������Ƿ���ڡ�
//#pragma warning(disable:4996)
//#include<stdio.h>
//int Find(int str[3][3], int key, int row, int col)
//{
//	int i = 0;
//	int j = col - 1;
//	while (i<row&&j>=0)
//	{
//		if (str[i][j] < key)
//			++i;
//		else if (str[i][j]>key)
//		{
//			--j;
//		}
//		else
//		{
//			printf("�ҵ���!\n");
//			printf("����һ�γ���λ����arr[%d][%d]\n", i, j);
//			break;
//		}
//	}
//	return 0;
//}
//int main()
//{
//	int arr[3][3] = { { 1, 2, 3 }, { 2, 3, 4 }, { 3, 4, 5, } };
//	int key = 0;
//	printf("����Ҫ�ҵ�����:\n");
//	while (scanf("%d", &key) != EOF)
//	{
//		Find(arr, key, 3, 3);
//	}
//	return 0;
//}

//strtok
//#pragma warning(disable:4996)
//#include<stdio.h>
//#include<string.h>
//int main()
//{
//	char str[] = "2000.08.01/lkl";
//	char* p = strtok(str, "./");
//	while (p != NULL)
//	{
//		printf("%s\n", p);
//		p = strtok(NULL, "./");
//	}
//	return 0;
//}

//�ձ�ĳ�ط�����һ��ıɱ��������ͨ���Ų�ȷ��ɱ�����ֱ�Ϊ4�����ɷ���һ����
//����Ϊ4�����ɷ��Ĺ���:
//A˵�������ҡ�
//B˵����C��
//C˵����D��
//D˵��C�ں�˵
//��֪3����˵���滰��1����˵���Ǽٻ�

//#pragma warning(disable:4996)
//#include<stdio.h>
//void Find()
//{
//	char killer = "A";
//	for (; killer <= 'D'; killer++)
//	{
//		if (((killer != 'A') + (killer == 'C') + (killer == 'D') + (killer != 'D') == 3))
//		{
//			printf("���־���%c!\n", killer);
//		}
//	}
//}
//int main()
//{
//	Find();
//	return 0;
//}


//������
//#pragma warning(disable:4996)
//#include<stdio.h>
//#include<time.h>
//#include<stdlib.h>
//void menu()
//{
//	printf("**��ӭ������������Ϸ*****\n");
//	printf("************************\n");
//	printf("*********1.play*********\n");
//	printf("*********2.quit*********\n");
//	printf("************************\n");
//}void game()
//{
//	srand((unsigned)time(NULL));
//	int num = rand() % 100 + 1;
//	while (1)
//	{
//		int guess = 0;
//		printf("��������µ�����:\n");
//		scanf("%d", &guess);
//		if (guess > num)
//		{
//			printf("�´���!\n");
//		}
//		else if (guess < num)
//		{
//			printf("��С��!\n");
//		}
//		else
//		{
//			printf("��ϲ���b!\n");
//			break;
//		}
//
//	}
//
//}
//int main()
//{
//	int quit = 0;
//	while (!quit)
//	{
//		menu();
//		int input = 0;
//		printf("��������Ĳ���:\n");
//		scanf("%d", &input);
//		switch (input)
//		{
//		case 1:
//			game();
//			printf("����?�ٸ�һ��?\n");
//			break;
//		case 2:
//			quit = 1;
//			printf("�˳���Ϸ!\n");
//			break;
//		default:
//			printf("��������!\n");
//			break;
//		}
//	}
//	return 0;
//}

//ˮ�ɻ���(0-100000)
//#pragma warning(disable:4996)
//#include<stdio.h>
//#include<math.h>
//void Flower()
//{
//	int i = 0;
//	
//	for (; i < 100000; i++)
//	{
//		int n = i;
//		int num = 0;
//		int sum = 0;
//		while (n)
//		{
//			n = n/10;
//			num++;//ȷ���η���;
//		}
//		n = i;
//		while (n)
//		{
//			sum = sum + (int)pow(n % 10, num);
//			n = n / 10;
//		}
//		if (sum == i)
//		{
//			printf("%d\n", i);
//		}
//	}
//}
//int main()
//{
//	Flower();
//	return 0;
//}


//ͨѶ¼
//#pragma warning(disable:4996)
//#include<stdio.h>
//#include<stdlib.h>
//#include<string.h>
//#include<memory.h>
//#include<assert.h>
//#define MAX_SIZE 10
//typedef struct PersonInfor
//{
//	char name[10];
//	char sex[5];
//	int age;
//	char tel[11];
//	char address[20];
//}information;
//typedef struct Contact
//{
//	int usedSize;
//	information per[MAX_SIZE];
//}Contact;
//void menu()
//{
//	printf("*****************************\n");
//	printf("**********���b��ͨѶ¼******\n");
//	printf("*************1.add***********\n");
//	printf("*************2.search********\n");
//	printf("*************3.delete********\n");
//	printf("*************4.show**********\n");
//	printf("*************5.clear*********\n");
//	printf("*************6.change*********\n");
//	printf("*************0.quit**********\n");
//	printf("*****************************\n");
//}
//void InitContact(Contact *p)
//{
//	assert(p != NULL);
//	p->usedSize = 0;
//	memset(p->per, 0, sizeof(p->per));
//}
//void AddContact(Contact *p)
//{
//	assert(p != NULL);
//	if (p->usedSize == MAX_SIZE)
//	{
//		printf("���b��ͨѶ¼����!\n");
//		return;
//	}
//	printf("����������:\n");
//	scanf("%s", p->per[p->usedSize].name);
//	printf("�������Ա�:\n");
//	scanf("%s", p->per[p->usedSize].sex);
//	printf("����������:\n");
//	scanf("%d", &(p->per[p->usedSize].age));
//	printf("������绰����:\n");
//	scanf("%s", p->per[p->usedSize].tel);
//	printf("���������סַ:\n");
//	scanf("%s", p->per[p->usedSize].address);
//	p->usedSize++;
//	printf("��ӳɹ�!\n");
//}
////�Ҳ�������-1,�ҵ������±�
//int SearchContact(Contact *p)
//{
//	assert(p != NULL);
//	int i = 0;
//	char name[20];
//	if (p->usedSize == 0)
//	{
//		printf("���b��ͨѶ¼�ǿյ�,�����!\n");
//		return -1;
//	}
//	printf("����������:\n");
//	scanf("%s", name);
//	for (; i < p->usedSize; i++)
//	{
//		if ((strcmp(p->per[i].name, name)) == 0)
//		{
//			return i;
//			printf("�ҵ���!\n");
//		}
//	}
//	return -1;
//}
//void DeleteContact(Contact *p)
//{
//	assert(p != NULL);
//	int index = SearchContact(p);
//	if (index == -1)
//	{
//		printf("���޴���!\n");
//		return;
//	}
//	int i = 0;
//	for (; i < p->usedSize - 1; i++)
//	{
//		p->per[i] = p->per[i + 1];
//	}
//	p->usedSize--;
//	printf("ɾ���ɹ�!\n");
//}
//void ShowContact(Contact *p)
//{
//	assert(p != NULL);
//	int i = 0;
//	printf("%-10s %-10s %-10s %-10s %-10s\n", "����" "�Ա�" "����" "�绰" "סַ");
//	for (i = 0; i < p->usedSize; i++)
//	{
//		printf("%-10s %-10s %-10s %-10s %-10s\n", p->per[i].name, p->per[i].sex, p->per[i].age, p->per[i].tel, p->per[i].address);
//	}
//}
//void ChangeContact(Contact *p)
//{
//	assert(p != NULL);
//	if (p->usedSize == 0)
//	{
//		printf("���ͨѶ¼���Ǹ��յ�,�����һ�����޸İ�!\n");
//		return;
//	}
//	printf("��ʼ�޸�!\n");
//	printf("��������Ҫ�޸���ϵ�˵�����:\n");
//	char mingzi[10];
//	scanf("%s", mingzi);
//	int i = 0;
//	for (; i < p->usedSize; i++)
//	{
//		if ((strcmp(p->per[i].name, mingzi) == 0))
//			break;
//	}
//	printf("�޸�һ���밴1,�޸�ȫ���밴5!\n");
//	int input = 0;
//	int in = 0;
//	scanf("%d", &in);
//	switch (in)
//	{
//	case 1:
//		printf("��������Ҫ�޸ĵ���Ϣ:1.���� 2.�Ա� 3.���� 4.�绰 5.סַ\n");
//		scanf("%d", &input);
//		switch (input)
//		{
//		case 1:
//			printf("�������޸ĺ������:\n");
//			scanf("%s", p->per[i].name);
//			break;
//		case 2:
//			printf("�������޸ĺ���Ա�:\n");
//			scanf("%s", p->per[i].sex);
//			break;
//		case 3:
//			printf("�������޸ĺ������:\n");
//			scanf("%s", &(p->per[i].age));
//			break;
//		case 4:
//			printf("�������޸ĺ�ĵ绰:\n");
//			scanf("%s", p->per[i].tel);
//			break;
//		case 5:
//			printf("�������޸ĺ��סַ:\n");
//			scanf("%s", p->per[i].address);
//			break;
//		default:
//			printf("������������!\n");
//			break;
//		}
//		break;
//	case 5:
//		printf("�������޸ĺ������:\n");
//		scanf("%s", p->per[i].name);
//		printf("�������޸ĺ���Ա�:\n");
//		scanf("%s", p->per[i].sex);
//		printf("�������޸ĺ������:\n");
//		scanf("%s",&( p->per[i].age));
//		printf("�������޸ĺ�ĵ绰:\n");
//		scanf("%s", p->per[i].tel);
//		printf("�������޸ĺ��סַ:\n");
//		scanf("%s", p->per[i].address);
//		break;
//		printf("�޸ĳɹ�!\n");
//	default :
//		printf("�����������!\n");
//		break;
//	}
//	
//}
//void ClearContact(Contact *p)
//{
//	assert(p != NULL);
//	p->usedSize = 0;
//	printf("����ɹ�!\n");
//}
//int main()
//{
//	int quit = 0;
//	Contact con;
//	InitContact(&con);
//	while (!quit)
//	{
//		int input = 0;
//		menu();
//		printf("��������Ĳ���:\n");
//		scanf("%d", &input);
//		switch (input)
//		{
//		case 1:
//			AddContact(&con);
//			break;
//		case 2:
//			SearchContact(&con);
//			break;
//		case 3:
//			DeleteContact(&con);
//			break;
//		case 4:
//			ShowContact(&con);
//			break;
//		case 5:
//			ClearContact(&con);
//			break;
//		case 6:
//			ChangeContact(&con);
//			break;
//		case 0:
//			quit = 1;
//			printf("�˳����b��ͨѶ¼!\n");
//			break;
//		default:
//			break;
//		}
//	}
//	return 0;
//}

//atoi
//#pragma warning(disable:4996)
//#include<stdio.h>
//#include<stdlib.h>
//int main()
//{
//	char a[] = "-123";
//	char b[] = "100";
//	printf("%d\n", atoi(a) + atoi(b));
//	return 0;
//}


//itoa
//#include<stdio.h>
//#include<stdlib.h>
//#include<limits.h>
//#include<windows.h>
//int main()
//{
//	int num = 123456;
//	char str[25];
//	itoa(num,str,10);
//	printf("%s\n", str);
//	system("pause");
//	return 0;
//}


//strncpy
//��src��n���ֽڿ�����dest
//#pragma warning(disable:4996)
//#include<stdio.h>
//#include<string.h>
//int main()
//{
//	char dest[] = "likunlong";
//	char src[] = "verygood";
//	strncpy(dest, src, 2);
//	printf("%s\n", dest);
//	return 0;
//}

//strncat
//��src��n���ֽ�ƴ�ӵ�dest����
//#pragma warning(disable:4996)
//#include<stdio.h>
//#include<stdlib.h>
//#include<string.h>
//int main()
//{
//	char dest[20] = "To be ";
//	char src[20] = "or not to be!";
//	strncat(dest, src, 50);
//	printf("%s\n", dest);
//	return 0;
//}


//strncmp
//�Ƚ�str���n���ֽ�,�ɹ�����0
//#pragma warning (disable:4996)
//#include<stdio.h>
//#include<stdlib.h>
//#include<string.h>
//#include<limits.h>
//int main()
//{
//	char str[] = "Looking at my face!";
//	if (strncmp(str, "Lo", 2) == 0)
//		printf("�ɹ�!\n");
//	return 0;
//}

////ģ��ʵ��strncpy
//#pragma warning(disable:4996)
//#include<stdio.h>
//#include<stdlib.h>
//#include<assert.h>
//char* MyStrncpy(char *dest, char *src, int count)
//{
//	assert(dest != NULL);
//	assert(src != NULL);
//	while (count--)
//	{
//		*dest++ = *src++;
//	}
//	return dest;
//}
//int main()
//{
//	char str[20] = "lilan is my girl!";
//	MyStrncpy(str, "LILAN", 5);
//	puts(str);
//	return 0;
//}


////�ҵ���
////һ��������ֻ�����������ǳ���һ�Σ������������ֶ����������Ρ�
//#pragma warning(disable:4996)
//#include<stdio.h>
////ð������һ��
//void Sort(int arr[], int len)
//{
//	int i = 0;
//	int j = 0;
//	for (; i < len; i++)
//	{
//		//����,�Ӻ���ǰ����
//		for (j = i - 1; j >= 0;j--)
//		{
//			if (arr[j]>arr[j + 1])
//			{
//				int tmp = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = tmp;
//			}
//		}
//	}
//}
////�ҵ���
//void Single(int arr[], int len)
//{
//	int i = 0;
//	for (; i < len;)
//	{
//		if (arr[i] == arr[i + 1])
//		{
//			i = i + 2;
//		}
//		else
//		{
//			printf("%d ", arr[i]);
//			i++;
//		}
//	}
//}
//int main()
//{
//	int arr[] = { 1, 3, 2, 7, 5, 2, 1, 4, 9, 6, 3, 7 };
//	int len = sizeof(arr) / sizeof(arr[0]);
//	Sort(arr, len);
//	Single(arr, len);
//	return 0;
//}






//ģ��ʵ��atoi
//#pragma warning(disable:4996)
//#include<stdio.h>
//#include<stdlib.h>
//#include<assert.h>
//int MyAtoi(char *str)
//{
//	int tmp = 0;
//	assert(str != NULL);
//	while (*str==' ')
//	{
//		str++;
//	}
//	int s = (*str == '-') ? (-1) : 1;
//	if (*str == '+' || *str == '-')
//	{
//		str++;
//	}
//	while (*str>='0'&&*str<='9')
//	{
//		tmp = tmp * 10 + (*str - '0');
//		str++;
//	}
//	return tmp*s;
//}
//int main()
//{
//	char str[] = "-123";
//	printf("%d\n", MyAtoi(str));
//	return 0;
//}

//strncat
//#pragma warning(disable:4996)
//#include<stdio.h>
//#include<string.h>
//#include<stdlib.h>
//int main()
//{
//	char dest[20] = "hello";
//	char src[20] = "world";
//	strncat(dest, src, 5);
//	printf("%s \n", dest);
//	return 0;
//}



//ģ��ʵ��strncat
//#pragma warning(disable:4996)
//#include<stdio.h>
//#include<string.h>
//#include<assert.h>
//char* MyStrncat(char *dest,char *src, int num)
//{
//	assert(dest != NULL);
//	assert(src != NULL);
//	char *ret = dest;
//	while (*dest)
//	{
//		dest++;
//	}
//	if (strlen(src)<num)
//	{
//		num = strlen(src);
//	}
//	while (num--)
//	{
//		*dest++ = *src++;
//	}
//	*dest = '\0';
//	return ret;
//}
//int main()
//{
//	char dest[20] = "hello";
//	char src[20] = "world";
//	MyStrncat(dest, src, 5);
//	printf("%s\n", dest);
//	return 0;
//}




//�������
//#pragma warning (disable:4996)
//#include<stdio.h>
//void Triangle(int n)
//{
//	int data[30][30] = { 1 };
//	int i = 0;
//	int j = 0;
//	for (i=1; i < n; i++)
//	{
//		data[i][0] = 1;
//		for (j=1; j <= i; j++)
//		{
//			data[i][j] = data[i - 1][j] + data[i - 1][j - 1];
//		}	
//	}
//	for ( i = 0; i < n; i++)
//	{
//		for (j=0; j <= i; j++)
//		{
//			printf("%d ", data[i][j]);
//		}
//		printf("\n");
//	}
//}
//
//int main()
//{
//	Triangle(20);
//	return 0;
//}




//������
//#pragma warning (disable:4996)
//#include<stdio.h>
//#include<stdlib.h>
//#include<string.h>
//#include<windows.h>
//#include<time.h>
//#define ROW 3
//#define COL 3
////��ʼ��һ����ά���鵱������
////չʾ����---|||
////�������
////��������
////��Ӯ
////��������
////game����(�жϷ���ֵ)
////main����������Ϸ
//void InitBoard(char board[ROW][COL], int row, int col);
//void PrintBoard(char board[ROW][COL], int row, int col);
//void PlayerMove(char board[ROW][COL], int row, int col);
//void ComputerMove(char board[ROW][COL], int row, int col);
//char isWin(char board[ROW][COL], int row, int col);
//int isFull(char board[ROW][COL], int row, int col);
//
//void menu()
//{
//	printf("******************************\n");
//	printf("*******��ӭ������������Ϸ******\n");
//	printf("******************************\n");
//	printf("*************1.play***********\n");
//	printf("*************2.quit***********\n");
//	printf("******************************\n");
//}
//void InitBoard(char board[ROW][COL], int row, int col)
//{
//	int i ,j;
//	for (i=0; i < row; i++)
//	{
//		for (j=0; j < col; j++)
//		{
//			board[i][j] = ' ';
//		}
//	}
//}
//void PrintBoard(char board[ROW][COL], int row, int col)
//{
//	printf("***********************\n");
//	int i = 0;
//	int j = 0;
//	for ( i = 0; i < row; i++)
//	{
//		for ( j = 0; j < col; j++)
//		{
//			printf(" %c ", board[i][j]);
//			if (j < col - 1)
//			{
//				printf("|");
//			}
//		}
//		printf("\n");
//		if (i < row - 1)
//		{
//			for (j = 0; j < col ; j++)
//			{
//				printf("---");
//				if (j < col - 1)
//				{
//					printf("|");
//				}
//			}
//			printf("\n");
//		}
//	}
//	printf("***********************\n");
//}
//void PlayerMove(char board[ROW][COL], int row, int col)
//{
//	int x = 0;
//	int y = 0;
//	while (1)
//	{
//		printf("������1-3������!\n");
//		scanf("%d%d", &x, &y);
//		if (x >= 1 && x <= 3 && y >= 1 && y <= 3)
//		{
//			if (board[x - 1][y - 1] == ' ')
//			{
//				board[x - 1][y - 1] = 'X';
//				break;
//			}
//		}
//		else
//		{
//			printf("�����������!\n");
//		}
//	}
//}
//void ComputerMove(char board[ROW][COL], int row, int col)
//{
//	while (1)
//	{
//		srand((unsigned)time(NULL));
//		int x = rand() % ROW;
//		int y = rand() % COL;
//		if (board[x][y] == ' ')
//		{
//			board[x][y] = 'O';
//			break;
//		}
//	}
//}
//char isWin(char board[ROW][COL], int row, int col)
//{
//	int i = 0;
//	for (; i < row; i++)
//	{
//		//��
//		if ((board[i][0] == board[i][1] )&& (board[i][1] == board[i][2]) && (board[i][0] != ' '))
//		{
//			return board[i][0];
//		}
//		//��
//		if ((board[0][i] == board[1][i]) && (board[1][i] == board[2][i]) && (board[0][i] !=' '))
//		{
//			return board[0][i];
//		}
//		//�Խ���(����->����)
//		if ((board[0][0] == board[1][1] )&&( board[1][1] == board[2][2] )&&( board[0][0] !=' '))
//		{
//			return board[0][0];
//		}
//		//�Խ���(����->����)
//		if ((board[0][2]==board[1][1])&&(board[1][1]==board[2][0])&&(board[0][2]!=' '))
//		{
//			return board[0][2];
//		}
//		//�ж��Ƿ�ƽ��
//		if (isFull(board,row,col)==1)
//		{
//			return 'Q';//ƽ��
//		}
//	}
//	return ' ';//����û��Ӯ
//}
////�ж������Ƕ�����
//int isFull(char board[ROW][COL], int row, int col)
//{
//	int i = 0;
//	int j = 0;
//	for ( i = 0; i < row; i++)
//	{
//		for (; j < col; j++)
//		{
//			if (board[i][j] == ' ')
//			{
//				return 0;//����û��
//			}
//		}
//	}
//	return 1;//��������
//}
//void game()
//{
//	char board[ROW][COL] ;
//	InitBoard(board, ROW, COL);
//	PrintBoard(board, ROW, COL);
//	char ret;
//	while (1)
//	{
//		PlayerMove(board, ROW, COL);
//		PrintBoard(board, ROW, COL);
//		ret = isWin(board, ROW, COL);
//		if (ret != ' ')
//		{
//			break;
//		}
//		ComputerMove(board, ROW, COL);
//		PrintBoard(board, ROW, COL);
//		ret = isWin(board, ROW, COL);
//		if (ret != ' ')
//		{
//			break;
//		}	
//	}
//	if (ret == 'Q')
//	{
//		printf("ƽ��!\n");
//		return;
//	}
//	if (ret == 'X')
//	{
//		printf("��Ӯ��!\n");
//		return;
//	}
//	if (ret == 'O');
//	{
//		printf("����Ӯ!\n");
//		
//	}
//}
//int main()
//{
//	int quit = 0;
//	while (!quit)
//	{
//		int input = 0;
//		menu();
//		printf("��������Ĳ���->");
//		scanf("%d", &input);
//		switch (input)
//		{
//		case 1:
//			game();
//			printf("����һ��?\n");
//			break;
//		case 2:
//			quit = 1;
//			printf("�˳���Ϸ!\n");
//			break;
//		default :
//			printf("��������!\n");
//			break;
//		}
//	}
//	return 0;
//}





//#include<stdio.h>
//int main()
//{
//	int row = 3;
//	int col = 3;
//	char board[3][3] = { 0 };
//	printf("*******************************\n");
//		for (int i = 0; i < row; i++)
//		{
//			for (int j = 0; j < col; j++)
//			{
//				printf(" %c ", board[i][j]);//���������ʽΪ:  ��X��(��O��)
//				if (j < col - 1)
//					printf("|");//������� |
//			}
//			printf("\n");
//			if (i < row - 1)//����---����
//			{
//				for (int j = 0; j < col; j++)//ѭ������---������
//				{
//					printf("---");//�������---
//					if (j < col - 1)
//					{
//						printf("|");
//					}
//				}
//				printf("\n");
//			}
//		}
//		printf("*******************************\n");
//		return 0;
//}




//ɨ��
