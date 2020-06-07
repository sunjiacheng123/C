#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
#if 0
int main()
{
	char a[5] = {'1','2','3','c'};
	char b[5];
	int n = 3;
	printf("请输入密码");	
	scanf("%s", b);
	while (n)
	{
		if (strcmp(a, b) == 0)
		{
			printf("密码正确");
				break;
		}
		else
		{
			printf("密码错误，请重新输入");	
			scanf("%s", &b);
		}
		n--;
	}
}
#endif