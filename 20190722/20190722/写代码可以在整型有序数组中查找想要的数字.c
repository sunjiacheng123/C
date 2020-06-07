#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#if 0
int main()
{
	int c[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9 ,10};
	int a;//数组下标
	int b;
	printf("请输出要查找的数字");
	scanf("%d", &b);
	for (int i = 0; i < 10; i++)
	{	

		if (b == c[i])
		{
			printf("返回的数组下标为%d\n", i);
			break;
		}

		if(b != c[i]&&i==9)
		{
			printf("%d\n", -1);

		}
	}

}
#endif