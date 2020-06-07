
#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

#if 0
int main()
{
	int a = 2;
	int n = 0;
	int sum = 0;
	int b = 0;
	int tmp = 0;//2  22  222
	scanf("%d", &n);
	for (b = 0; b < n; b++)
	{
		tmp = tmp * 10 + a;
		sum = sum + tmp;
	}
	printf("%d", sum);
}


int main()
{
	int a, b, c;
	int d = 0;
	int sum = 0;
	printf("计算多少的前n项和");
	scanf("%d", &a);
	printf("计算多少次");
	scanf("%d", &b);
	for (c = 1; c <= b; c++)
	{
		d = d*10 + a;
		sum = d + sum;
	}
	printf("%d\n", sum);
}
#endif