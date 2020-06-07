#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#if 0
void RunNin(int m)
{
	if (m % 4 == 0)
	{
		if (m % 100 != 0)
			printf("%d是普通闰年\n", m);
	}
	else if (m % 400 == 0)
	{
		printf("%d是世纪闰年\n", m);
	}
	else
		printf("%d不是闰年\n", m);
}

int main()
{
	int year;
	scanf("%d", &year);
	RunNin(year);
}
#endif