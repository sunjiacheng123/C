#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
#if 0
int main()
{
	char a[5] = {'1','2','3','c'};
	char b[5];
	int n = 3;
	printf("����������");	
	scanf("%s", b);
	while (n)
	{
		if (strcmp(a, b) == 0)
		{
			printf("������ȷ");
				break;
		}
		else
		{
			printf("�����������������");	
			scanf("%s", &b);
		}
		n--;
	}
}
#endif