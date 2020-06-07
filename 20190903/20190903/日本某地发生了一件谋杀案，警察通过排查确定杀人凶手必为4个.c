#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#if 0
int main()
{
	int a, b, c, d;
	for (a = 0; a < 2; a++)
	{
		for (b = 0; b < 2; b++)
		{
			for (c = 0; c < 2; c++)
			{
				for (d = 0; d < 2; d++)
				{
					if (((a == 1) && (c == 1) && (d == 1) && (d != 1)) ||
						(a != 1) && (c != 1) && (d == 1) && (d != 1) ||
						(a != 1) && (c == 1) && (d != 1) ||
						(a != 1) && (c == 1) && (d == 1))
					{
						if (((a != b) && (a != c) && (a != d)&&(b!=1))
							|| ((c != b) && (c != a) && (c != d )&& (b != 1))
							|| ((b != a) && (b != c) && (b != d) && (a != 1))
							|| ((d != a) && (d != c) && (d != b) && (a != 1)))
						{
							printf("a=%d,b=%d,c=%d,d=%d\n", a, b, c, d);
						}
					}
				}
			}
		}
	}
}
#endif