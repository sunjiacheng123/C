#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>






#if 0
int main()
{
	int a,b;
	printf("��һ��������һ����\n");
	scanf("%d", &a);
	printf("�ڶ����˲µ�����Ϊ��\n");
	scanf("%d", &b);
	while (b != a)
	{
		if (b > a)
		{
			printf("�µĴ���,�����²�\n");
			scanf("%d", &b);
		}
		if (b < a)
		{
			printf("�µ�С�ˣ������²�\n");
			scanf("%d", &b);
		}
	}
	if (b == a)
	{
		printf("��ϲ���¶���\n");
	}
}
#endif