#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int Function(int x)
{	
	int static sum=0;	
	if (x % 10 == 9)
		sum++;
	if (x / 10 == 9)
		sum++;
	return sum;
}

int main()
{
	int a = 0;
	int n=0;
	for (a = 1; a <= 100; a++)
	{
		n = Function(a);
	}
	printf("%d ", n);
}
#if 0
#include <stdio.h>
int main()
{
	int a;
	int sum = 0;
	for (a = 1; a <= 100; a++)
	{
		if (a % 10 == 9)
			sum++;
		if (a / 10 == 9)
			sum++;
	}
	printf("%d ", sum);
}
#endif