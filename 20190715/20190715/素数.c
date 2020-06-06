#include<stdio.h>
int main()//方法二
{
	int i, j, k;
	for (j = 100; j <= 200; j++)
	{
		for (i = 2; i <=j/2; i++)
		{
			if (j%i == 0)
				break;
		}
		if (i > j/2)
		{
			printf("%d为素数\n", j);
		}

	}
}
int main()
{
	int i, j,k;
	for (j = 100; j <= 200; j++)
	{
		for (i = 2; i < j; i++)
		{
			if (j%i == 0)
				break;
		}
		if (i == j)
		{
			printf("%d为素数\n", j);
		}
		
	}
}