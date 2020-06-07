#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#if 0
//方法1
unsigned int reverse_bit(unsigned int value)
{
	int count = 0;
	unsigned int n, m;
	m = 0;
	n = value;
	while (value)
	{
		count++;
		if (value & 1)
		{
			unsigned int b = n >> (count - 1);
			b = b << 31;
			b = b >> (count - 1);
			//unsigned int b = (n >> (2 * (count - 1)))<<31;
			m = b + m;
		}
		value = value >> 1;
	}
	return m;
}
//方法2
unsigned int reverse_bit(unsigned int value)
{
	int i = 0;
	unsigned number = 0;
	for (i = 0; i < 32; i++)
	{
		number = number + ((value >> i) & 1)*pow(2, 31 - i);
	}
	return number;
}

void main()
{
	int a;
	printf("请输入一个数：");
	scanf("%u", &a);
	int num=reverse_bit(a);
	printf("%u",num);
}
#endif