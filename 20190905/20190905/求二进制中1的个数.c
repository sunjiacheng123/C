#define _CRT_SECURE_NO_WARNINGS 1
#if 0
#include <stdio.h>
void main()
{
	int a;
	int count = 0;
	printf("请输入一个数：");
	scanf("%d", &a);
	while (a)
	{
		count++;
		a = a&(a - 1);
	}
	printf("二进制中1的个数为%d个\n", count);
}
#endif