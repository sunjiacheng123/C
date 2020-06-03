#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#if 0
int main()
{
	int a[4] = { 7, 6, 9 ,3};
	int b,c,d;
	for (c = 1; c < 4; c++)
	{
		for (b = 0; b<c; b++)
			if (a[c] > a[b])
			{
				d = a[b];
				a[b] = a[c];
				a[c] = d;
			}
	}
	for (c = 0; c < 4; c++)
	{
		printf("%d,", a[c]);
	}
}
#endif