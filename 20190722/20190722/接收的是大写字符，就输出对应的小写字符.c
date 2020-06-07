#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>



#if 0
int main()
{
	int ch = 0;
	while ((ch = getchar()) != EOF)
	{
		if (ch >= 97 && ch <= 122)
		{
			ch = ch - 32;
			printf("%c", ch);
		}
		else if (ch >= 65 && ch <= 90)
		{
			ch = ch + 32;
			printf("%c", ch);
		}
	}
	return 0;
}


int main()
{
	char a[5];
	for (int i = 0; i < 5; i++)
	{
		a[i] = getchar();
	}
	for (int c = 0; c < 5; c++)
	{
		if (a[c] >= 'a' && a[c] <= 'z')
		{
			a[c] = a[c] - 32;
			printf("%c", a[c]);
		}
		else if (a[c] >= 'A' && a[c] <= 'Z')
		{
			a[c] = a[c] + 32;
			printf("%c", a[c]);
		}
	}

}
#endif