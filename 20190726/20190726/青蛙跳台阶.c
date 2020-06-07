#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

//与求斐波那契数差不多！！

#if 0
int Jump(int n)
{
	if (n == 1)
	{
		return 1;
	}
	else if (n == 2)
	{
		return 2;
	}
	else
	{
		return Jump(n - 1) + Jump(n - 2);
	}
}

int Jump(int n)
{
	int j1 = 1, j2 = 2;
	int j = 0;
	for (int i = 3; i <= n; i++)
	{
		j = j1 + j2;
		j1 = j2;
		j2 = j;
	}
	return j;
}

int main()
{
	int n = 0;
	scanf("%d", &n);
	int sum = Jump(n);
	printf("%d", sum);
}
#endif