#define _CRT_SECURE_NO_WARNINGS 1
#if 0
#include <stdio.h>
void main()
{
	int a;
	int count = 0;
	printf("������һ������");
	scanf("%d", &a);
	while (a)
	{
		count++;
		a = a&(a - 1);
	}
	printf("��������1�ĸ���Ϊ%d��\n", count);
}
#endif