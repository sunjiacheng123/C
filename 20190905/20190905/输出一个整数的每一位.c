#define _CRT_SECURE_NO_WARNINGS 1
#if 0
#include<stdio.h>
void main()
{
	int a;
	int i = 0;
	int arr[10];
	printf("������һ������");
	scanf("%d", &a);
	while (a > 0)
	{
		arr[i] = a % 10;
		i=i+1;
		a = a / 10;
	}
	printf("�������ÿһλ��");
	for (i=i-1; i >= 0; i--)
	{
		printf("%d ", arr[i]);
	}
}
#endif