#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#if 1 
void Dayin(int a)
{
	if (a > 9)
	{
		Dayin(a / 10);
	}
	printf("%d ", a % 10);
}

int main()
{
	int a = 1235;
	Dayin(a);
}
#endif