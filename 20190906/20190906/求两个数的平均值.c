#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#if 0 
int Avg(int a,int b)
{
	int avg=0;
	avg=(a&b)+((a^b)>>1);
	return avg;
}
void main()
{
	int a, b;
	int num = 0;
	scanf("%d%d", &a, &b);
	//num = (a + b) >> 1;
	num=Avg(a,b);
	printf("%d", num);
}
#endif