#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#if 0
void ChengFaBiao(int x)
{
	int i, j;
	for (j = 1; j <= x; j++)
	{
		for (i = 1; i <= j; i++)
		{
			printf("%d*%d=%d ", j, i, j*i);
		}
		printf("\n");
	}
}

int main()
{
	int a;
	printf("请输入多少的乘法表：");
	scanf("%d", &a);
	ChengFaBiao(a);
	return 0;
}
#endif