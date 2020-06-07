#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#if 0
int Fun(int n,int k)
{
	if (k == 1)
	{
		return n;
	}
	else if (k == 0)
	{
		return 0;
	}
	else
		return Fun(n, k - 1)*n;
}

int main()
{
	int n, k;
	scanf("%d %d", &n, &k);
	int sum=Fun(n, k);
	printf("%d", sum);
}
#endif