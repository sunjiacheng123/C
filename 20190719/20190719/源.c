#define _CRT_SECURE_NO_WARNINGS 1
/*
break:结束所有的循环
continue：代表结束本趟循环
goto：跳转到某一条标签标示的语句
register：寄存器
typedef:类型重命名  复杂的类型
面试问题一：
typedef和#define 的区别是什么？
加上typedef 就会由变量变为对应的类型
static:
	修饰局部变量--》提升局部变量的生产周期
	修饰全局变量--》作用于被限制--》被限制到当前的源文件中
	修饰函数--》作用于被限制--》被限制到当前的源文件中
面试问题二：
static和extern的区别和联系？






*/
 
#include<stdio.h>





#if 1
typedef int Arr[10];//加上typedef 就会由变量变为对应的类型
int main()
{
	Arr arr = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
}

int main()
{
	int a = 10;
bit://标签
	printf("hello");
	goto bit;//跳转
	register int b = 20;//建议把b放入寄存器中
}

int main()
{
	auto a = 10;
	auto b = 10.9;
	auto c = 'asdd';
}
#endif