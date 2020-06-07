#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#if 0

//µÝ¹é
int Shu(int a)
{
	if (a <= 2)
	{
		return 1;
	}
	else
	{
		return Shu(a - 1) + Shu(a - 2);
	}
}

int main()
{
	int a = 0;
	scanf("%d", &a);
	int b = 0;
	b=Shu(a);
	printf("%d", b);
}

//·ÇµÝ¹é
int Shu(int a)
{
	int b = 0;
	int b1 = 1, b2 = 1;
	if (a <= 2)
	{
		b = 1;
	}
	else
	{
		for (int i = 3; i <= a; i++)
		{
			b = b1 + b2;
			b1 = b2;
			b2 = b;
		}
	}
	return b;
}

int main()
{
	int a = 0;
	scanf("%d", &a);
	int b = Shu(a);
	printf("%d", b);
}
#endif