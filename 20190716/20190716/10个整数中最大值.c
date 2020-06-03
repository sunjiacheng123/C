#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#if 0
int  main()
{
	int a[10] = { 20, 25, 12, 16, 65, 32, 42, 50, 23, 28 };
	int max = a[0];
	for (int b = 0; b < 10; b++)
	{
		if (max < a[b])
		{
			max = a[b];
		}
	}
	printf("%d ", max);

}

int  main()
{
	int a[10] = { 20, 25, 12, 16, 65, 32, 42, 50, 23, 28 };
	int max = a[0];
	int b;
	for (b = 0; b < 10; b++)
	{
		if (max < a[b])
		{
			max = a[b];
		}
	}
	printf("max=%d", max);

}
#endif