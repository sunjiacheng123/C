#define _CRT_SECURE_NO_WARNINGS 1
#if 0
//����1/1-1/2+1/3-1/4+1/5 ���� + 1/99 - 1/100 ��ֵ�� 
#include<stdio.h>
int main()
{
	int a;
	double sum = 0;
	for (a = 1; a <= 100; a++)
	{
		if (a % 2 == 0)
		{
			sum = sum - 1.0 / a;//���ֶ���
		}
		else
			sum = sum + (double)1 / a;
	}
	printf("%f", sum);
}
#endif