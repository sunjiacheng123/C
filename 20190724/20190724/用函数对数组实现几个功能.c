#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#if 0
void init(int x[10])
{
	int i;
	for ( i = 0; i < 10; i++)
	{
		x[i] = i;
	}
}

void empty(int x[10])
{
	int i;
	for (i = 0; i < 10; i++)
	{
		x[i] = '\0';
	}
}

void reverse(int arr[10],int len)
{
	int i = 0, j = len-1;
	for (; i < j; i++, j--)
	{
		int temp = arr[i];
		arr[i] = arr[j];
		arr[j] = temp;
	}
}

int main()
{
	int arr[10];
	int len = sizeof(arr) / sizeof(arr[0]);
	init(arr);//初始化数组
	empty(arr);//清空数组	
	init(arr);//初始化数组
	reverse(arr,len);//逆置数组
}
#endif