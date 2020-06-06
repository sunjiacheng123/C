/*
一；枚举和define定义常量有什么区别？
1.#deine定义的常量不可以进行调试
2.define定义的标识符常量不具有类型，枚举具有类型

项目；枚举会列举消息的类型

二：1.打印字符串使用格式化输出%s.需要注意：%s遇到\0才停止打印
	2.strlen:用来求字符串长度：当前字符串中字符的个数
	工作原理：遇到\0停止
二进制--》八进制--》十六进制
0000 1011   （二进制）
00 001 011
0   1   3   (八进制)
0     b    （十六进制）

*/



#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#define SIZE 10

void main()
{
	int sum = 0;
	for (int i = 1; i<100; i++){
		while (i>0){
			if(i%10==9){
				sum++;
			}
			i=i/10;
		}
	}
	printf("%d", sum);
}


#if 0
int main()
{
	printf("%d\n", '\013');//\013为三位八进制
	printf("%d\n", '\x0b');//\x0b为三位十六进制
	printf("%s\n", "c:\est");
}




enum Day //枚举类型，定义常量
{
	MON=1,
	THU=4,
	WED
	//...
};

int main()
{
	Day day = 1;
	Day day1 = MON;
}

int main()
{
	char *str1 = "hello";//字符串有双引号引起来的一串内容，并且以\0结尾
	char str2[] = "bit";//字符数组
	char str3[4] = { 'a', 'b', 'c', 'd' };
}
#endif