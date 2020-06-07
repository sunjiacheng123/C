#define _CRT_SECURE_NO_WARNINGS 1
/*
参数：
	1.个数匹配
	2.参数的类型
返回值：
	如果有返回值，必须返回一个值，否则会有警告，返回值的类型也需要匹配。
	如果没有返回值 void
函数名：
	建议：函数名遵循驼峰式命名FirstName
	形参的改变不会影响实参的改变（按值传递）


*/
#if 0
#include <stdio.h>

Add(int *p)
{
	*p=*p+1;
}

int main()
{
	int num=0;
	Add(&num);
	printf("%d", num);
}

void RunNin(int m)
{
	if (m % 4 == 0)
	{
		if (m % 100 != 0)
			printf("%d是普通闰年\n", m);
	}
	else if (m % 400 == 0)
	{
		printf("%d是世纪闰年\n", m);
	}
	else
		printf("%d不是闰年\n", m);
}

int main()
{
	int a;
	scanf("%d", &a);
	RunNin(a);
}

void PanDuan(int x)
{
	int i = 0;
	for ( i = 2; i < x; i++)
	{
		if (x%i == 0)
		{
			printf("%d不是素数", x);
			break;
		}
	}
	if (i == x)
		printf("%d是素数", x);
	
}
int main()
{
	int a;
	scanf("%d", &a);
	PanDuan(a);
}
#endif