#include <stdio.h>//所有#开头的都叫做预处理     引用头文件
//stdio.h 头文件 C语言的库函数
//行注释
/*
块注释（不能嵌套使用）   注释：ctrl+k+c   取消注释：ctrl+k+u
解锁快捷键：FN+ESC
.c 源代码---》.exe 可执行程序
（四步：1.预编译 2.编译 3.汇编 4.链接）
ASCII值 A=65   a=97   0=48
break 跳出当前循环
*/
#if 0 //条件编译
int main()
{
	char ch = 'a';
	printf("%c\n", ch);
	char ch2 = 97;
	printf("%c\n", ch2);
	printf("hello world\n");
	return 0;
	//return 函数结束
	//main 函数 返回值0 代表的是程序正常结束
}
#endif