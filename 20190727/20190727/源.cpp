#define _CRT_SECURE_NO_WARNINGS 1

/*
数组名：意义——》代表数组首元素的地址
		两种情况下代表整个数组：
		1.sizeof（arr）：代表整个数组的字节大小
		2.&arr+1：

sizeof():编译期间看表达式的结果会是什么类型	
int arr[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
int len=sizeof(arr) / sizeof(arr[0]);
数组在哪里定义，公式就在哪使用
一维数组使用：
冒牌排序：
选择排序：
直接插入排序：
shell排序：
快速排序：
堆排序：
归并排序：
*/
#include<stdio.h>
#include <string.h>

#if 0
void BubbleSort(int arr[], int len)
{
	int i = 0,j = 0;
	int a = len - 1;
	for (i = 0; i < len - 1; i++)
	{
		a--;
		int temp = 0;
		for (j = 0; j <= a;j++)
		{
			if (arr[j]>arr[j + 1])
			{
				temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
			}
		}
		if (temp == 0)
		{
			break;
		}
	}
}
int main()
{
	int arr[5] = { 5, 2,3, 4,1 };
	int len = sizeof(arr) / sizeof(arr[0]);
	BubbleSort(arr, len);
}

//数组的传参，如果传数组名过来，那么就会退化为指针。
//void Show(int *arr, int len)
//{
//	int len = sizeof(arr) / sizeof(arr[0]);//error
//}
int main()
{
	int arr[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	int a = 10;
	printf("%d %d\n", sizeof(arr[++a]),a);//  4   10   编译的时候看一下arr[++a]  但并不执行++a
	//printf("%d\n", sizeof(arr[4]));
	//printf("%d\n", sizeof(arr[10]));
	//int len=sizeof(arr) / sizeof(arr[0]);
	//Show(arr, len);
	//char arr[] = "asnd";//长度为5  默认有\0
	//char *p = "asd";
	//printf("%s", p);//  打印字符串——》遇到\0停止。
}
#endif
int main()
{
	char str1[100] = "abcdef";
	char str2[] = "abcdef";
	char *str3 = "abcdef";
	char str4[100] = "abcdef\0xyz";
	char str5[] = "abcdef\0xyz";
	char *str6 = "abcdef\0xyz";
	char str7[100] = "abcdef\n\0xyz";
	char str8[] = "abcdef\n\0xyz";
	char *str9 = "abcdef\n\0xyz";
	printf("%s\n", str1);
	printf("%s\n", str2);
	printf("%d,%d\n", sizeof(str1), strlen(str1));
	printf("%d,%d\n", sizeof(str2), strlen(str2));
	printf("%d,%d\n", sizeof(str3), strlen(str3));
	printf("%d,%d\n", sizeof(str4), strlen(str4));
	printf("%d,%d\n", sizeof(str5), strlen(str5));
	printf("%d,%d\n", sizeof(str6), strlen(str6));
	printf("%d,%d\n", sizeof(str7), strlen(str7));
	printf("%d,%d\n", sizeof(str8), strlen(str8));
	printf("%d,%d\n", sizeof(str9), strlen(str9));
}
