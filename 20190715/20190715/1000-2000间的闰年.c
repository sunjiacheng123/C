#include <stdio.h>
int main()
{
	int m;
	for (m = 1000; m <= 2000; m++)
	{
		if (m % 4 == 0)
		{
			if (m % 100 != 0)
				printf("%d����ͨ����\n",m);
		}
		if (m%400==0)
		{
			printf("%d����������\n", m);
		}
	}
	return 0;
}