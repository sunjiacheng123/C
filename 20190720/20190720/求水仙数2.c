#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<math.h>



#if 0
//�Ż���
int main()
{
	int a, b = 0;
	for (a = 1; a < 999999; a++)
	{
		int len=0;
		int k = a;
		int c = 0;//�����±�
		int d[10];
		int i = 0;//a��λ��
		int num=0;
		while (k>0)
		{	
			d[c] = k % 10;
			k = k / 10;
			i++;
			c++;
		}//ѭ���õ�a��λ��������ÿһλ��������d��
		for (c = 0; c <i; c++)
		{
			num = pow(d[c], i)+num;//ȡ�����������е�ÿһλ������pow���㣬��������
		}
		if (num == a)
		{
			printf("%d\n", a);
		}

	}
}
#endif