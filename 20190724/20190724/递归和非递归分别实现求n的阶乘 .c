#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#if 0
//µÝ¹é
int Fac(int n)
{
	if (n == 1)
	{
		return 1;
	}
	else
	{
		return n * Fac(n - 1);
	}
}

//·ÇµÝ¹é
int Fac(int n)
{
	int sum = 1;
	for (int i = 1; i <= n; i++)
	{
		sum = sum*i;
	}
	return sum;
}

int main()
{
	int n;
	scanf("%d", &n);
	int a = Fac(n);
	printf("%d", a);
}
#endif