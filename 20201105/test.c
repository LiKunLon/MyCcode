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

#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <windows.h>
int main()
{
	int a;
	int b;
	int c;
	int t;
	printf("请输入三个数字\n");
	scanf("%d %d %d", &a, &b, &c);
	if (a < b)//把a,b中较大的数给a
	{
		t = a;
		a = b;
		b = t;
	}
	if (a < c)//把a,c中较大的数给a
	{
		t = a;
		a = c;
		c = t;
	}
	if (b < c)
	{
		t = b;
		b = c;
		c = t;
	}
	printf("%d %d %d\n", a, b, c);
	system("pause");
	return 0;
}


打印3的倍数
#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int main()
{
	int i;
	for (i = 1; i<=100; i++)
	{
		if (i % 3 == 0)
			printf("%d\n", i);
	}
	return 0;
}

打印1000-2000间的闰年
/*#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	int i;
	for (i = 1000; i <= 2000; i++)
	{
		if (i % 4 == 0 && i % 100 != 0 || i % 400 == 0)
			printf("%d\n", i);
	}
	return 0;
}*/


打印100-200之间的素数
#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int main()
{
	int i,j;
	for (i = 100; i <= 200; i++)
	{
		for (j=2; j <=i; j++)//从2开始循环
		{
			if (i%j == 0)//符合的话,说明不是素数
				break;//循环终止
		}
		if (j >= i)//循环到i本身都没有能除尽的,是素数,输出
			printf("%d\n", i);
	}
	return 0;
}