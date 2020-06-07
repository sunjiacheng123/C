#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#if 0
int main()
{
	int i, j;
	int n, tmp[40] = { 0 }, count = 0, sum = 0;
	scanf("%d", &n);
	for (i = 0; i < n; i++)
	{
		for (j = i; j; j /= 10)
		{
			tmp[count] = j % 10;
			count++;
		}
		for (j = 0; j < count; j++)
		{
			sum += pow(tmp[j], count);
		}
		if (sum == i)
			printf("%d\n", i);
		count = 0;
		sum = 0;
	}
	system("pause");
	return 0;
}
#endif