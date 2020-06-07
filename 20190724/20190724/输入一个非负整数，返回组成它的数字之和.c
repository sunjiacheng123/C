#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#if 0
int DigitSum(int n)
{
	int m=0;
	int sum = 0;
	if (n !=0)
	{
		m = n % 10;
		n = n / 10;	
		sum=m+DigitSum(n );
	}
	return sum;
}

int main()
{
	int n;
	scanf("%d", &n);
	int sum = DigitSum(n);
	printf("%d", sum);
}
#endif