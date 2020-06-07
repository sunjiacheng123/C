#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
/*
机器语言：二进制 0 1
汇编语言：字母 串号
高级语言：贴近人类的语言  c java
小端：低地址存放低数据（权小）（默认）
大端：低地址存放高数据
1.不同类型的指针，解引用所访问的内存字节大小不一样。
2.char *  int *   
3.void * 泛型 

任何类型的指针 大小都是4个字节 （32位）
                       8个字节 （64位）
指针的加减法： p+（-）整数  加（减）几个字节？
取决于指针的类型，什么类型的指针就加（减）几个字节。

数组名在两种情况下，标示整个数组
1.sizeof(arr)-->整个数组字节的 大小
2.&arr，&数组名--》整个数组的地址
3.区分
  arr+1；--》4  arr--》int *
  &arr+1;--> 整个数组--》 整个数组的大小 
4.指针减指针；两个指针指向同一块内存

 int （*p）[3]=&arr;  数组指针   指向数组的指针
 []自带解引用
*/




#if 0
int main()
{
	int a = 0;
	int *p = NULL;// 0 '0' '\0' NULL 

}

//如果是小端返回1
int IsLittle()
{
	int a = 0x12345678;
	char *p = (char *)&a;
	if (*p = 0x78)
	{
		return 1;
	}
	else
		return 0;
}


int main()
{
	int a = 10;
	void *p = &a;
	//不能进行解引用--》void 没有具体大小
	//可以接受任何类型的地址
	printf("%d", *p);
}

void main()
{
	int a = 10;
	int *p = &a;
	*p;//间接访问  解引用
}
#endif