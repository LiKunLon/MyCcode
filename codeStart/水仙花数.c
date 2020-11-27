#pragma warning(disable:4996)
#include<stdio.h>
#include<math.h>
void Flower()
{
	int i = 0;
	
	for (; i < 100000; i++)
	{
		int n = i;
		int num = 0;
		int sum = 0;
		while (n)
		{
			n = n/10;
			num++;//确定次方数;
		}
		n = i;
		while (n)
		{
			sum = sum + (int)pow(n % 10, num);
			n = n / 10;
		}
		if (sum == i)
		{
			printf("%d\n", i);
		}
	}
}
int main()
{
	Flower();
	return 0;
}