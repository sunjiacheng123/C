#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
/*
不能做switch的参数的类型有什么？
switch的参数的类型：整形的     不能是：float double（Java中long不可以）
*/
#if 0
int main()
{
	int a = 1;
	int sum = 0;
	do
	{
		sum = sum + a;
		a = a + 2;
	} while (a <= 100);
	printf("%d", sum);
}

int main()
{
	int i;
	int sum = 0;
	for (i = 1; i <= 100; i = i + 2)
	{

		sum=sum+i;
	}
	printf("%d", sum);
}


int main()
{
	int a = 1;
	int sum=0;
	while (a<100)
	{
		sum = sum + a;
		a = a + 2;
	}
	printf("%d", sum);
}


int main()
{
	char a;
	scanf("%s", &a);
	if (a >= 65 && a < 97)
		printf("为大写字符\n");
	else
		printf("不是大写字符\n");
}


int main()

{
	int i;
	for (i = 1; i <= 100; i++)
	{
		if (i % 2 != 0)
		{
			printf("%d", i);
		}
	}
}
#endif