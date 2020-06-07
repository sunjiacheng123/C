/*
选择语句：if（表达式）
		｛
		   语句块；//不止可以写1条语句，可以写多条语句
   		 ｝
	注意：
		 1.如果不写大括号，那么她会默认执行当前if下面的一条语句
		 2.注意else的匹配，只会和最近的一条if语句匹配
		 3.什么时候去执行语句块，当表达式为真的时候，只有0为假，任何非零的数字都为真
循环语句：while（）  do｛｝while（）；   for（）；
		 while（表达式）   do{							for（表达式1；表达式2；表达式3）；
		 ｛                 语句块（至少执行一次）；		｛
		 语句块；			 ｝while（表达式）；				语句块；
		 ｝													 ｝
		 for 表达式1：初始化  表达式2：判断语句  表达式3：步进
		 注意：
		 1.for循环的执行顺序：
		 表达式1（只执行一次）-》表达式2-》语句块-》表达式3
		 2.do｛｝while（）执行顺序：
		 先执行语句块，然后进行判断
函数：功能
	 函数名：首字母大写 Add  多个单词；每个单词首字母大写  AddTwoNum
	         Add_Two_Num
			 Add(int a,int b)  函数列表   a,b为形参
			 ｛函数体｝
数组：存放一组相同数据类型的集合，如果没有被初始化，默认值为随机值（0xccccccc）。（也是一个局部变量）
      局部变量都存放在栈中，随机值为0xccccc，堆上的随机值为0xcdcdcd。
	  下标从零开始，注意数组访问不要越界。
	  sizeof（数组名）/sizeof（a[0]）//a[0]数组的首元素大小
	  << 左移运算符    >>  右移运算符 
	  15>>1    15右移1位：左边补符号位
	  15<<1    15左移1位：右边统一补零
	  &：按位与    ^:按位异或    |：按位   ~:二进制按位取反
	  a+=1; 相当于 a=a+1;和 a++；
	  if(15<=10<=20)--->if(0<=20)
	  exp1 ? exp2 : exp3  条件操作符
	  如果表达式1为真，那么结果为表达式2，否则为表达式3；
	  exp1, exp2, exp3, …expN  逗号表达式
	  整个表达式的结果是最后一个表达式。

*/


#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#if 0
int Max(int x, int y)
{
	return x > y ? x : y;
}
int main()
{
	int a = 10;
	int b = 20;
	int max = Max(a, b);
	printf("%d", max);
}


void show(int a[], int len)
{
	int i;
	for (i = 0; i < len; i++)
		printf("%d", a[i]);
}
int main()
{
	
	int a[10];
	int len = sizeof(a) / sizeof(a[0]);//sizeof(a)-->代表整个数组的字节大小   sizeof(a[0])-->一个的字节大小
	show(a, len);
	printf("%d", a[2]);
}

//int Add_Two_Num(int a, int b);//函数定义
int Add_Two_Num(int a, int b)
{
	int sum = a + b;
	return sum;
}
int main()
{
	int m = 10;
	int n = 3;
	int sum = Add_Two_Num(m, n);
}
#endif