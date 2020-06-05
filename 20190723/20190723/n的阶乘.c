#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>



#if 0
//1£¡+2£¡+3£¡....+n£¡
int main()
{
	int n = 0;
	scanf("%d", &n);
	int sum = 1;
	int ret=0;
	for (int i = 1; i <=n; i++)
	{
		int a = i;
		sum = 1;
		while (a >= 1)
		{
			sum = sum*a;
			a--;
		}
		ret = ret + sum;
	}
	printf("%d", ret);
}


//nµÄ ½×³Ë
int main()
{
	int n = 0;
	scanf("%d", &n);
	int sum = 1;
	while (n>=1)
	{
		sum = sum*n ;
		n--;
	}
	printf("%d", sum);
}
#endif