#define _CRT_SECURE_NO_WARNINGS 1
#if 0
#include <stdio.h>

void Change(int a[], int b[])
{	
	int t;
	int c;
	int len = sizeof(a) / sizeof(a[1]);
	for (c = 0; c <len; c++)
	{
		t = a[c];
		a[c] = b[c];
		b[c] = t;
	}
}

void Show(int x[])
{	
	int d;
	
	for (d = 0; d < 5; d++)
	{
		printf("%d ", x[d]);
	}
}

int main()
{
	int a[5] = { 2, 3, 5, 6, 12 };
	int b[5] = { 3, 6, 44, 8, 9 };
	int len = sizeof(a) / sizeof(a[1]);
	Change(a,b);
	Show(a);
	printf("\n");
	Show(b);
}
#endif