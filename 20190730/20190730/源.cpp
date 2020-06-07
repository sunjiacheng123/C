#define _CRT_SECURE_NO_WARNINGS 1
/*

*/


#if 0
#include <stdio.h>
//求二进制中1的个数
//
//int NumberOf1(int num)//求不出-1的二进制有多少个1
//{
//	int count = 0;
//	while (num!=0)
//	{
//		if (num % 2 == 1)
//		{
//			count++;
//		}
//		num = num / 2;
//	}
//	return count;
//}

//int NumberOf1(int num)//求不出-1的二进制有多少个1
//{
//	int count = 0;
//	while (num != 0)
//	{
//		if (num & 1 == 1)
//		{
//			count++;
//		}
//		num = num >>1;
//	}
//	return count;
//}

int NumberOf1(int num)
{
	int count = 0;
	while (num != 0)
	{
		num = num &(num - 1);
		count++;
	}
	return count;
}


int main()

{
	int a = -1;
	int count=NumberOf1( a);
	printf("%d\n", count);
}

#endif
#include <stdio.h>
int main()
{
	//printf("%f\n", 5 / 2);
	//printf("%f\n", (float)5 / 2);
	//printf("%f\n", 5 / (float)2);
	//printf("%f\n", (float)(5 / 2));
	printf("%d\n", 10 % 3);
	printf("%d\n", -10% 3);
	printf("%d\n", 10 % -3);
	printf("%d\n", -10 % -3);
}
