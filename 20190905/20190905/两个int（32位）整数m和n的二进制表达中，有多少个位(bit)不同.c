#define _CRT_SECURE_NO_WARNINGS 1
#if 1
#include <stdio.h>

void count_bit(int a, int b)
{
	int count = 0;
	for (int i = 0; i < 32; i++)
	{
		if (((a >> i) & 1) != ((b >> i) & 1))
		{
			count++;
		}
	}
	printf("二进制中有%d位不同\n", count);
}

void main()
{
	int a, b;
	int count = 0;
	printf("请输入第一个数：");
	scanf("%d", &a);
	printf("请输入第二个数：");
	scanf("%d", &b);
	count_bit(a, b);
	//for (int i = 0; i < 32; i++)
	//{
	//	if (((a >> i) & 1) != ((b >> i) & 1))
	//	{
	//		count++;
	//	}
	//}
	//printf("二进制中有%d位不同\n", count);
}
#endif