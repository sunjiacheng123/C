#define _CRT_SECURE_NO_WARNINGS 1
/*
������
	1.����ƥ��
	2.����������
����ֵ��
	����з���ֵ�����뷵��һ��ֵ��������о��棬����ֵ������Ҳ��Ҫƥ�䡣
	���û�з���ֵ void
��������
	���飺��������ѭ�շ�ʽ����FirstName
	�βεĸı䲻��Ӱ��ʵ�εĸı䣨��ֵ���ݣ�


*/
#if 0
#include <stdio.h>

Add(int *p)
{
	*p=*p+1;
}

int main()
{
	int num=0;
	Add(&num);
	printf("%d", num);
}

void RunNin(int m)
{
	if (m % 4 == 0)
	{
		if (m % 100 != 0)
			printf("%d����ͨ����\n", m);
	}
	else if (m % 400 == 0)
	{
		printf("%d����������\n", m);
	}
	else
		printf("%d��������\n", m);
}

int main()
{
	int a;
	scanf("%d", &a);
	RunNin(a);
}

void PanDuan(int x)
{
	int i = 0;
	for ( i = 2; i < x; i++)
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