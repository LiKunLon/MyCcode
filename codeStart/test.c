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


1-100打印3的倍数
#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{

	for (int i = 1; i <= 100; i++)
	{
		if (i % 3 == 0)//一个数除以3没有余数就是3的倍数
			printf("%d\n", i);
	}
	return 0;
}


指针大小
#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int main()
{
	printf("%d\n", sizeof(char*));
	printf("%d\n", sizeof(short*));
	printf("%d\n", sizeof(int*));
	printf("%d\n", sizeof(long*));
	return 0;

}

结构体	
#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
struct stu
{
	char name[30];
	int age;
	char sex[3];
};

int main()
{
	struct stu s1 = { "一", 10, 'n' };
	struct stu s2 = { "二", 120, 'v' };
	printf("%s %d %s\n", s1.name, s1.age, s1.sex);//.也有访问功能
	struct stu *p = &s2;
	printf("%s %d %s\n", (*p).name, (*p).age, (*p).sex);//.的优先级高于指针
	printf("%s %d %s\n", p->name, p->age, p->sex);//指向符自带解引用功能
	return 0;
}


三目运算符
#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int main()
{
	int a = 1;
	int b = 0;
	int c = 1;
	int d = a ? (b == 1 ? c : a) : c;
	printf("%d\n", d);
	return 0;
}



计算n的阶乘
#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	int n;
	int ret = 1;
	scanf("%d", &n);
	for (int i = 1; i <= n; i++)
	{
		ret *= i;
	}
	printf("%d\n", ret);
	return 0;
}

计算1!+2!+3!+...+10!
#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	int i = 1;
	int ret = 1;
	int sum = 0;
	for (int n = 1; n <= 10; n++)
	{
		for (int i = 1; i <= n; i++)
		{
			ret = ret*i;
		}
		sum = sum + ret;
		ret = 1;
	}
	printf("%d\n", sum);
	return 0;
		
}

最大公约数(辗转相除法)
#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	int a, b,c;
	printf("请输入两个待比较数:\n");
	scanf("%d %d", &a, &b);
	while (b != 0)
	{
		c = a % b;
		a = b;
		b = c;
	}
	printf("%d\n", a);
	return 0;
}

二分查找	
#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int main()
{
	int arr[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	int key = 8;
	int len = sizeof(arr) / sizeof(arr[0]);//求数组长度
	int left = 0;//0是下标
	int right = len - 1;//代表最后一个元素
	int mid = 0;
	while (left <= right)
	{
		mid = (left + right) / 2;
		if (arr[mid] > key)//如果中间元素大于所找数字
		{
			right = mid - 1;//mid之前一个元素就是新的right
		}
		else if (arr[mid] < key)//如果中间元素小于所找数字
		{
			left = mid + 1;//mid之后一个元素就是新的left
		}
		else
		{
			break;
		}
		//两种情况退出:1.因为break退出 2.因为循环条件不满足退出(left>right)
	}
	if (left <= right)//如果因为break退出,就是找到了
	{
		printf("找到了,下标是:%d\n", mid);
	}
	else
	{
		printf("找不到");
	}
	return 0;
}

编写代码，演示多个字符从两端移动，向中间汇聚
#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
#include<windows.h>
int main()
{
	char arr1[] = "******************";
	char arr2[] = "LiLan is my honey!";
	int left = 0;
	int right = strlen(arr1) - 1;
	printf("%s\n", arr2);
	while (left <= right)
	{
		Sleep(1000);
		arr1[left] = arr2[left];
		arr1[right] = arr2[right];
		left++;
		right--;
		printf("%s\n", arr1);
	}
	return 0;
}

模拟用户登录场景
#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
int main()
{
	char passward[20] = { 0 };
	int i = 0;
	for (i = 1; i <= 3; i++)
	{
		printf("请输入密码:");
		scanf("%s", passward);
		if (strcmp(passward, "1234") == 0)
			printf("登陆成功!\n");
		else
		{
			printf("密码有误,你还有%d次机会\n",3-i);
		}
	}
	return 0;
}


最大公约数(常规法)
#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	int a, b;
	int i = 0;
	printf("请输入两个数:\n");
	scanf("%d%d", &a, &b);
	for ( i = a; i <= a; i--)
	{
		if (a % i == 0 && b % i == 0)
			break;
	}
	printf("%d\n", i);
	return 0;
}

判断一个数是否是素数(常规法)
#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	int a;
	int i = 0;
	printf("请输入一个整数:\n");
	scanf("%d", &a);
	for ( i = 2; i < a; i++)
	{
		if (a%i == 0)//如果可以除尽,则不是素数
			break;
	}
	//两种情况退出:①因为break②不满足循环条件i<=a
	if (i <a)//满足循环条件,因为break退出.
	{
		printf("不是素数\n");
	}
	else
	{
		printf("是素数\n");
	}
	return 0;
}

//写一函数判断一个数是否是素数(n/2法)
#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int isPrime(int n)
{
	int i = 0;
	for (i = 2; i <= (n/2); i++)
	{
		if (n%i == 0)
			return 1;
	}
	return 0;
}

int main()
{
	int num = 0;
	printf("请输入一个整数:\n");
	scanf("%d", &num);
	int ret = isPrime(num);
	if (ret == 1)
	{
		printf("%d不是素数\n", num);
	}
	else
	{
		printf("%d是素数", num);
	}
	return 0;
}

//写一函数判断一个数是否是素数(sqrt法)
#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<math.h>
int isPrime(int n)
{
	int i = 0;
	for (i = 2; i <= sqrt(n); i++)
	{
		if (n%i == 0)
			return -1;
	}
	return 0;
}


int main()
{
	int a = 0;
	printf("请输入一个数:\n");
	scanf("%d", &a);
	int ret = isPrime(a);
	if (ret == -1)
		printf("%d不是素数\n", a);
	else
	{
		printf("%d是素数\n", a);
	}
	return 0;
}


写一函数判断一个数是否是素数,并用该函数输出100-200间的素数
#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int isPrime(int n)
{
	int i = 0;
	for (i = 2; i < n; i++)
	{
		if (n%i == 0)
			return -1;
	}
	return 0;

}
int main()
{
	int n = 0;
	for (n = 100; n <= 200; n++)
	{
		isPrime(n);
		int ret = isPrime(n);
		if (ret == -1)
			printf("%d不是素数\n",n);
		else
			printf("%d是素数\n",n);
	}
	return 0;
}

函数判断year是不是闰年
#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int isLeapYear(int n)
{
	if (n % 4 == 0 && n % 100 != 0 || n % 400 == 0)
	{
		return 0;
	}
	return -1;
}


int main()
{
	int year = 0;
	printf("请输入一个年份:\n");
	scanf("%d", &year);
	int ret = isLeapYear(year);
	if (ret == 0)
	{
		printf("%d年是闰年\n", year);
	}
	else
	{
		printf("%d不是闰年\n", year);
	}
	return 0;
}


printf函数返回值类型(返回值是输出的字符数量，包括数字，字母，标点符号，空格等)
/*#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	int A = 43;
	printf("%d", printf("%d", printf("%d", A)));
	return 0;
}     */       //输出4321


写一函数交换两个整数的内容(按址传参)
#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int Swap(int* a, int* b)
{
	int t = *a;
	*a = *b;
	*b = t;
}

int main()
{
	int a = 10;
	int b = 20;
	Swap(&a, &b);
	printf("%d %d\n", a, b);
	return 0;
}



实现一个函数，打印乘法口诀表，口诀表的行数和列数自己指定.如：输入9，输出9 * 9口诀表，输出12，输出12 * 12的乘法口诀表。
#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
void chart(int n)
{
	for (int i = 1; i <= n; i++)
	{
		for (int j = 1; j <= i; j++)
			printf("%d*%d=%2d\t ", i, j, i*j);
	}
	printf("\n ");
}

int main()
{
	int n = 0;
	scanf("%d", &n);
	chart(n);
	return 0;
}



在一个整形有序数组中查找具体的某个数:找到了就打印数字所在的下标，找不到则输出：找不到
#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
int main()
{
	int arr[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	int len = sizeof(arr) / sizeof(arr[0]);
	int key = 8;
	int mid = 0;
	int left = 0;
	int right = len - 1;
	while (left <= right)
	{
		mid = (left + right) / 2;
		if (arr[mid] < key)
		{
			left = mid + 1;
		}
		else if (arr[mid]>key)
		{
			right = mid - 1;
		}
		else
		{
			break;
		}
	}
	//两种情况退出①:符合循环条件,break退出(找到了)②:不符合循环条件(left>right)找不到
	if (left <= right)
	{
		printf("找到了,该数字下标是:%d\n", mid);
	}
	else
	{
		printf("没找到!\n");
	}
	return 0;
}

函数实现二分查找
#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int Find(int arr[], int key, int len)
{
	int mid = 0;
	int left = 0;
	int right = len - 1;
	while (left <= right)
	{
		mid = (left + right)/2;
		if (arr[mid] < key)
		{
			left = mid + 1;
		}
		else if (arr[mid]>key)
		{
			right = mid + 1;
		}
		else
		{
			return mid;
		}
	}
	return -1;
}
int main()
{
	int arr[] = {1,2,3,4,5,6,7,8,9};
	int len = sizeof(arr) / sizeof(arr[0]);
	int ret = Find(arr,8, len);
	if (ret == -1)
	{
		printf("没有这个数字!\n");
	}
	else
	{
		printf("找到了,这个数字的下标是:%d\n", ret);
	}
	return 0;
}



递归方式实现打印一个整数的每一位
#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
void print(int n)
{
	if (n > 9)
	{
		print(n / 10);
	}
	printf("%d ", n % 10);

}
int main()
{
	int num = 0;
	printf("请输入一个数字:\n");
	scanf("%d", &num);
	print(num);
	return 0;
}

递归实现n的阶乘
#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int fac(int n)
{
	if (n == 1)
	{
		return 1;
	}
	return n*fac(n - 1);
}


int main()
{
	int num = 0;
	printf("请输入所求阶乘:\n");
	scanf("%d",&num);
	printf("%d", fac(num));
	return 0;
}



非递归实现阶乘
#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int  fac(int n)
{
	int ret = 1;
	for (int i = 1; i <= n; i++)
	{
		ret *= i;
	}
	return ret;
}


int main()
{
	int num = 0;
	printf("请输入所求阶乘数:\n");
	scanf("%d", &num);
	int a = fac(num);
	printf("%d\n", a);
	return 0;
}


递归实现strlen
#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int length(char *str)
{
	if (*str == '\0')
	{
		return 0;
	}	
	return 1 + length(str + 1);
}
int main()
{
	char * p= "abcde";
	printf("%d\n", length(p));
	return 0;
}


非递归实现strlen
#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
int main()
{
	char *str = "abcde";
	int tmp = strlen(str);
	printf("%d\n", tmp);
	return 0;
}


/*编写一个函数 reverse_string(char * string)（递归实现）
实现：将参数字符串中的字符反向排列。
要求：不能使用C函数库中的字符串操作函数。*/
#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<windows.h>
void reverse_string(char *p)
{
	int len = strlen(p);
	char tmp = *p;
	*p = *(p + len - 1);
	*(p + len - 1) = '\0';
	if (strlen(p + 1) > 1)
	{
		reverse_string(p + 1);
	}
	*(p + len - 1) = tmp;
}
int main()
{
	char str[] = "abcdef";
	printf("%s\n", str);
	reverse_string(str);
	printf("%s\n", str);
	return 0;
}