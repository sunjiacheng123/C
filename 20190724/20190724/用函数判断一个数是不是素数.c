#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#if 0
int main()
{
	int a;
	scanf("%d", &a);
	RunNin(a);
}

void PanDuan(int x)
{
	int i = 0;
	for (i = 2; i < x; i++)
	{
		if (x%i == 0)
		{
			printf("%d��������", x);
			break;
		}
	}
	if (i == x)
		printf("%d������", x);
}

int main()
{
	int a;
	scanf("%d", &a);
	PanDuan(a);
}
#endif