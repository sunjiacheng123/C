#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#if 0
void main()
{
	int arr[6][6] = { 0 };
	for (int i = 0; i < 6; i++)
	{
		for (int j = 0; j <= i; j++)
		{
			if (j == 0 || i == j)
			{
				arr[i][j] = 1;
			}
			else if (i>1 && j>0)
			{
				arr[i][j] = arr[i - 1][j - 1] + arr[i - 1][j];
			}
		}
	}
	for (int i = 0; i < 6; i++)
	{
		for (int j = 0; j <= i; j++)
		{
			printf("%d ", arr[i][j]);
		}
		printf("\n");
	}
}

void  main()
{
	char a = 0xb6;
	short b = 0xb600;
	int c = 0xb6000000;
	if (a == 0xb6)
		printf("a");
	if (b == 0xb600)
		printf("b");
	if (c == 0xb6000000)
		printf("c\n");
	printf("%d\n", a);
	printf("%x\n", a);
}
#endif