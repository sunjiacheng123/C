#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#if 0
int main()
{
	int arr[7] = { 1, 2, 3, 1, 2, 3, 4 };
	int i = 0;
	int sz = sizeof(arr) / sizeof(arr[0]);//sz==7
	int ret = 0;
	for (i = 0; i < sz; i++)
	{
		ret = ret ^ arr[i];
	}
	printf("����һ�ε����ǣ�%d\n", ret);
	return 0;
}
#endif
