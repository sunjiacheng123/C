#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<math.h>



#if 0
//优化版
int main()
{
	int a, b = 0;
	for (a = 1; a < 999999; a++)
	{
		int len=0;
		int k = a;
		int c = 0;//数组下标
		int d[10];
		int i = 0;//a的位数
		int num=0;
		while (k>0)
		{	
			d[c] = k % 10;
			k = k / 10;
			i++;
			c++;
		}//循环得到a的位数，并把每一位放入数组d中
		for (c = 0; c <i; c++)
		{
			num = pow(d[c], i)+num;//取出存入数组中的每一位，进行pow运算，并加起来
		}
		if (num == a)
		{
			printf("%d\n", a);
		}

	}
}
#endif