#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#if 0

void Swap(int x,int y)
{	
	int m;
	m = x;
	x = y;
	y = m;
	printf("a=%d,b=%d", x, y);
}
int main()
{
	int a, b, c;
	scanf("%d %d", &a, &b);
	Swap(a, b);
}
#endif