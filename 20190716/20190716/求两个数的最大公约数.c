#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

#if 0
int main()
{
	int a, b, c;
	scanf("%d %d", &a, &b);
	if (a<b)
	{
		c = a;
		a = b;
		b = c;
	}
	if (a>b)
	{
		c = a%b;
		if (c == 0)
			printf("%dΪ���Լ��", b);
		while (c != 0)
		{
			c = a%b;
			a = b;
			b = c;
		}
		printf("%dΪ���Լ��", a);
	}
}
#endif

