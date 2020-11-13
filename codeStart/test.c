#include <stdio.h>
int main()
{
   printf("第一次提交代码!!\n");
   return 0;
}


#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int main()
{
	int coding = 0;
	printf("你会去敲代码吗？（选择1 or 0）\n");
	scanf("%d", &coding);
	if (coding == 1)
	{
		printf("坚持，你会有好offer\n");
	}
	else
	{
		printf("放弃，回家卖红薯\n");
	}
	return 0;
}


#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int main()
{
	int a=0;
	int b=0;
	printf("请输入两个数字\n");
	scanf("%d%d",&a,&b);
	if (a > b)
	{
		printf("%d\n", a);
	}
	else if (a==b)
	{
		printf("两个数相等\n");
	}
	else
	{
		printf("%d\n",b);
	}
	
	return 0;
}

1-100出现9的次数
#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	int n;
	scanf("%d", &n);
	int i;
	int j = 0;//j用来计次
	for (i = 1; i <= 100; i++)//1-100循环
	{
		if (i % 10 == 9)//个位数是9的
			j++;//符合一次,j就+1
		if (i / 10 == 9)//十位数是9的
			j++;
	}
	printf("%d\n", j);
}
	
	
n个数中出现9的次数
#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
	int main()
	{
		for (int i = 1; i <= n; i++)
		{
			int ink = i;
			while (1)
			{
				if (ink % 10 == 0 || ink == 0)
				{
					break;
				}
				if (ink % 10 == 9)
				{
					j++;
					break;
				}
				ink = ink / 10;
			}
		}
		printf("%d", j);
		return 0;
	}


求10个数中最大的
#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	int i=0;
	int max=0;
	int arr[10];
	printf("请输入十个数:\n");
	for (i; i < 10; i++)//循环输入十个数
	{
		scanf("%d",&arr[i]);
	}
	max = arr[0];//把第一个数给max
	for (i = 1; i < 10; i++)
	{
		if (arr[i]>max)//如果下一个数比max大
		{
			max = arr[i];//就把这个数给max
		}
	}
	printf("最大数为:%d", max);
	return 0;
}


输出99乘法表
#include<stdio.h>
int main()
{
	int i, j;
	for (i = 1; i < 10; i++)//1=10循环
	{
		for (j = 1; j < 10; j++)//1-10循环
			printf("%d*%d=%d ", i, j, i*j);//输出格式,注意有空格(美化)
		printf("\n");//换行(美化)
	}
	
	return 0;
}


写一个函数求两个数较大值
#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int Max(int a,int b)
{
	if (a > b)//如果a>b,返回较大值a
		return a;
	else
	{
		return b;
	}
}
int main()
{
	int a = 0;
	int	b = 0;
	printf("请输入两个待比较数:\n");
	scanf("%d%d", &a,&b);
	int ret = Max(a, b);//方法调用完毕,ret用来接收返回值
	printf("较大数为:%d\n", ret);//直接调用Max函数
	return 0;
}

分数求和
#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	int n;
	float i = 1.0;//注意这里定义的是分子的1,必须是float型
	int j = 1;
	float sum = 0;
	for (n = 1; n <= 100; n++)//循环100个数出来
	{
		sum = sum + (i/ n)*j;//数学表达式
		j = -j;//用于正负号转换
		
	}
	printf("%f\n", sum);
	return 0;
}

写出一个程序，接受一个正浮点数值，输出该数值的近似整数值。如果小数点后数值大于等于5, 向上取整；小于5，则向下取整。
#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int main()
{
	float i;
	printf("请输入一个浮点数:\n");
	scanf("%f", &i);
	int num = (int)i;//强制变成整数
	float a = i - num;
	int b = 10 * a;
	if (b >= 5)
	{
		printf("该浮点数向上取整:%d\n", num + 1);
	}
	else
	{
		printf("该浮点数向下取整:%d\n", num);
	}
	return 0;
}
不引入新临时变量,交换两个数
#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int main()
{
	int a, b;
	scanf("%d %d", &a, &b);
	a = a + b;
	b = a - b;
	a = a - b;
	printf("%d %d", a, b);
}

给定两个整形变量,进行交换
#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int main()
{
	int a;
	int b;
	int t = 0;
	scanf("%d %d", &a, &b);
	t = a;
	a = b;
	b = t;
	printf("%d %d\n", a, b);
	return 0;
}

求数组元素个数并遍历
#pragma warning (disable 4996)
#include<stdio.h>
int main()
{
	int i = 0;
	int arr[] = { 1, 2, 3, 4, 5};
	int num = sizeof(arr) / sizeof(arr[0]);//求数组元素个数
	printf("%d\n", num);
	//遍历(依次访问一遍且只访问一次)
	int sum = 0;
	for (; i < num; i++)
	{
		printf("arr[%d]=%d\n", i, arr[i]);
		sum = sum + arr[i];	//数组所有元素之和
	}
	printf("%d\n", sum);
	return 0;
}