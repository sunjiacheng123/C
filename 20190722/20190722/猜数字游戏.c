#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>






#if 0
int main()
{
	int a,b;
	printf("第一个人输入一个数\n");
	scanf("%d", &a);
	printf("第二个人猜的数字为：\n");
	scanf("%d", &b);
	while (b != a)
	{
		if (b > a)
		{
			printf("猜的大了,请重新猜\n");
			scanf("%d", &b);
		}
		if (b < a)
		{
			printf("猜的小了，请重新猜\n");
			scanf("%d", &b);
		}
	}
	if (b == a)
	{
		printf("恭喜，猜对了\n");
	}
}
#endif