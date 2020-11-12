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