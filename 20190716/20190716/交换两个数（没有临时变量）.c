#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
/*
异或：对应位如果不一样进行或，一样为0
*/
#if 0
int main()//优化
{
		int a = 6;//0000 0110
		int b = 4;//0000 0100
		a = a^b;//0000 0010-->2
		b = a^b;//0000 0110-->6
		a = a^b;//0000 0100-->4
		printf("%d,%d", a, b);
}

int main()
{
	int a = 5, b = 6;
	a = a + b;
	b = a - b;
	a = a - b;
	printf("%d,%d", a, b);
}
#endif