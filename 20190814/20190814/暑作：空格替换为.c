#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#if 0 
int main()
{
	int a = 10;
	a += a *= a -= a / 3;
	printf("%d", a);
}
int main()
{
	const char *p = "hello!";
	printf("%c\n", *p);

}

int main()
{
	char ch[] = "abc defgx yz";
	for (int i = 0; i < 11; i++)
	{
		if (ch[i] == ' ')
		{
			ch[i] = '%';
		}
	}

}


int main()
{
	int a = 5;
	if (a = 0)
	{
		printf("%d", a - 10);
	}
	else
	{
		printf("%d", a++ );
	}
	return 0;
}


int main()
{
	int x;
	int *px[10];
	x = 5 > 1 + 2 && 2 || 2 * 4 < 4 - !0;
	printf("%d", x);
}


int Fun(int a, int b)
{
	if (a > b)
		return (a + b);
	else
		return (a - b);
}
int main()
{
	int x = 3, y = 8, z = 6, r;
	r = Fun(Fun(x, y), 2 * z);
	printf("%d\n", r);
	return 0;
}

int main()
{
	char s[] = "\\123456\123456\t";
	printf("%d", strlen(s));
}
#endif
void Fun(char str_arg[2])
{
	int m = sizeof(str_arg);
	int n = strlen(str_arg);
	printf("%d", m);
	printf("%d", n);
}
int main()
{
	char str[] = "hello";
	Fun(str);
}




