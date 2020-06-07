#define _CRT_SECURE_NO_WARNINGS 1
#if 0
#include <stdio.h>
#include <math.h> 

int main()
{
	int a, b,c,d,e,f,g;
	int n = 0;
	for (a = 1; a <999999; a++)
	{	
		if (a>0 && a <= 9)
		{
			if (a == pow(a,1))
				printf("%d\n", a);
		}
		if (a > 9 && a <= 99)
		{
			b = a % 10;
			c = a / 10;
			if (a ==( pow(b, 2)+pow(c,2)))
				printf("%d\n", a);
		}
		if (a > 99 && a <= 999)
		{
			b = a % 10;
			c = (a % 100)/10;
			d = a / 100;
			if (a == (pow(b, 3) + pow(c, 3) + pow(d, 3)))
				printf("%d\n", a);
		}
		if (a > 999 && a <= 9999)
		{
			b = a % 10;
			c = (a % 100) / 10;
			d = (a % 1000)/ 100;
			e = a / 1000;
			if (a ==( pow(b, 4) + pow(c, 4) + pow(d, 4) + pow(e, 4)))
				printf("%d\n", a);
		}
		if (a > 9999 && a <= 99999)
		{
			b = a % 10;
			c = a % 100 / 10;
			d = a % 1000 / 100;
			e = a % 10000/1000;
			f = a / 10000;
			if (a == (pow(b, 5) + pow(c, 5) + pow(d, 5) + pow(e, 5) + pow(f, 5)))
				printf("%d\n", a);
		}
		if (a > 99999 && a <= 999999)
		{
			b = a % 10;
			c = a % 100 / 10;
			d = a % 1000 / 100;
			e = a % 10000 / 1000;
			f = a % 100000 / 10000;
			g = a / 100000;
			if (a == (pow(b, 6) + pow(c, 6) + pow(d, 6) + pow(e, 6) + pow(f, 6) + pow(g, 6)))
				printf("%d\n", a);
		}
	}
}
#endif