#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
/*
������switch�Ĳ�����������ʲô��
switch�Ĳ��������ͣ����ε�     �����ǣ�float double��Java��long�����ԣ�
*/
#if 0
int main()
{
	int a = 1;
	int sum = 0;
	do
	{
		sum = sum + a;
		a = a + 2;
	} while (a <= 100);
	printf("%d", sum);
}

int main()
{
	int i;
	int sum = 0;
	for (i = 1; i <= 100; i = i + 2)
	{

		sum=sum+i;
	}
	printf("%d", sum);
}


int main()
{
	int a = 1;
	int sum=0;
	while (a<100)
	{
		sum = sum + a;
		a = a + 2;
	}
	printf("%d", sum);
}


int main()
{
	char a;
	scanf("%s", &a);
	if (a >= 65 && a < 97)
		printf("Ϊ��д�ַ�\n");
	else
		printf("���Ǵ�д�ַ�\n");
}


int main()

{
	int i;
	for (i = 1; i <= 100; i++)
	{
		if (i % 2 != 0)
		{
			printf("%d", i);
		}
	}
}
#endif