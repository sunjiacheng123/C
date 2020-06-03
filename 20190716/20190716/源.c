//c语言中没有字符串类型   使用 char *p="hello"
//计算机不能计算减法
//计算机当中储存数据的时候储存补码
// sizeof（求字节大小，以字节为单位）：不是函数 是关键字，也是标识符
/*标识符：字母 数字  下划线（不能以数字开头）
常量：使用关键字const，之后不能被改变，定义的同时需要进行初始化
调试；
1.打断点 f9 或者；
2.快捷键f5
3.黄色箭头所指的是还没有被执行的
4.F10逐过程  F11逐语句
scanf语句中注意换行符
*/


#include<stdio.h>
#define π 3.1416926 //标识符常量
extern int b;//声明外部符号  （在源1.c中）
int age = 99;//全局变量，如果没有赋初值，默认为0

int main()
{

	unsigned i;
	for (i = 9; i >= 0; i--)
	{
		printf("%d\n", i);//i=-1 i为无符号 看为1
	}
	
}

#if 0
int main()
{
	int a=5;//局部变量，定义之后，需要在使用之前进行初始化。
	//如果没有初始化，那么默认为随机值（0xcccccc）
	signed char ch1 = -10;//有符号的字符型
	unsigned char ch2 = 20;//无符号的字符型
	char ch = -1;//-1的补码为1111 1111   -128的补码为1000 0000
	//有符号字符型取值范围 -128--127 （计算机中127+1=-128）  无符号字符型取值范围 0--255
	printf("%d\n", ch);//以有符号的整形打印
	printf("%u\n", ch);//以无符号的整形打印  
	printf("%d\n", a);
	printf("%d\n", b);
}
#endif

//int main()
//{
//	int a = 10;
//	printf("#d\n", sizeof(int));
//	printf("#d\n", sizeof int);//错的
//	printf("#d\n", sizeof a);
//	printf("#d\n", sizeof(a));
//}