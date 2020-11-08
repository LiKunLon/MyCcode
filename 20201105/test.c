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