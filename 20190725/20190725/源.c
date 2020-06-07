#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
/*
1.add.h-->防止头文件重复引入（#ifndef __ADD_H__   #define __ADD_H__）  函数的声明    #endif //__ADD_H__
          或者 #pragma once  函数的声明
2.add.c-->函数的实现
3.test.c-->#include "add.h"    
递归满足两个条件：
	1.调用自己本身。
	2.有一个趋近于终止的条件。
思考问题：横向思考    代码执行：纵向执行
所有函数的执行，都是发生在栈上。
栈的特性：先进后出

strcat(arr,"bit")  将"bit"拼接到arr当中
*/

#if 0

int main()
{
	char dest[20]={0};
	char *src = "hello";
	char *p = strcpy(dest,src);
	printf("%s\n",dest);
	printf("%s\n",p);
	printf("%d\n",strlen(strcpy(dest,src)));
	//char arr[20] = "hello";
	//int ret = strlen(strcat(arr,"bit"));//这里介绍一下strlen函数
	//printf("%d\n", ret);
	return 0;
}

void Fun(int a[],int i,int j)
{
	int temp=0;
	if (i < j)
	{
		temp = a[i];
		a[i] = a[j];
		a[j] = temp;
		i++;j--;
		Fun(a, i, j);
	}
}

int main()
{
	int a[6] = { 1, 2, 3, 4, 5, 6 };
	int i = 0, j = 5;
	Fun(a,i,j);
}


void print(int a)
{
	if (a > 9)
	{
		print(a / 10);
	}
	printf("%d ", a % 10);
}

int main()
{
	int a = 1234;
	print(1234);
}



int Di(int x)
{
	if (x == 1)
	{
		return 10;
	}
	else
		return 2 + Di(x - 1);
}

int main()
{
	int a = 10;
	a = Di(5);
	printf("%d", a);
}

 
int main()
{
	int a=10;
	for (int i = 1; i < 5; i++)
	{
		a = a + 2;
	}
	printf("%d", a);
}
#endif
