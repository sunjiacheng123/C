#define _CRT_SECURE_NO_WARNINGS 1
/*
0x12 34 56 78
大端：低地址存放高数据 （存放形式0x12 34 56 78）
小端：低地址存放低数据 （存放形式0x78 56 34 12）

指针变量里面存放的就是地址
int *p=&a;  地址为十六进制的数字  任何类型的指针大小在32位平台是4个字节，64位平台是8个字节。
int **pp=&p;  大小也是四个字节
结构体：一种类型 聚合类型  数组
特征：对他进行整体初始化，只能在定义的时候
*/
#include <stdio.h>
#if 0
struct Stu
{
	char name[20];//名字
	int age; //年龄
	char sex[5];//性别
	char id[15];//学号
}stu2;//全局变量
int main()
{
	struct Stu stu1 = { "zhangsan",18,"男","123456" };//一个汉字是两个字节
	stu2 = { "zhangsan", 18, "男", "123456" };//error，只能在定义的时候初始化
}



void Swap(int *p, int *q)
{
	int tmp = *p;
	*p = *q;
	*q = tmp;
}

//void Swap2(int *p,int *q)
//{
//	int *tmp = p;
//	p =q;
//	q = tmp;
//}

int main()
{
	int a = 10;
	int b = 20;
	printf("%d,%d\n",a,b);
	Swap(&a,&b);
	//Swap2(&a,&b);
	printf("%d,%d\n",a,b);
	return 0;
}

//windows+r-->cals  启动程序员计算器
int main()
{
	int a = 10;
	int *p = &a;//地址存放在对应类型的指针当中
	*p = 88;//这时的*是间接访问符--》解引用
	int **pp = &p;
	**pp = 99;
	printf("%p\n", &a);//打印变量的地址，十六进制
	printf("%d\n", &a);//每次运行程序，变量的地址是不确定的、
	return 0;
}
#define SIZE 10//定义了一个标识符常量
#define STR "hello"
#define LOOP for(;;){pringtf("gaobo");}
#define LOOP for(;;)\
{\
	printf("gaobo\n");\
}//续行符
#define ADD(x,y) x+y
//定义一个宏--》宏是有参数的 是有副作用的？？
//注意问题：尽可能多的用（）

int main()
{
	int result =ADD(10+5, 20);
	printf("%d\n",result);
}
#endif