#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#if 0
void Change(int *p, int*q)
{
	int temp = *p;
	*p = *q;
	*q = temp;
}

int main()
{
	int a, b;
	scanf("%d%d", &a, &b);
	Change(&a, &b);
	printf("%d %d", a, b);
}
#endif