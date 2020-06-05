#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
/*
break放在循环体内
getchar()：从键盘读取一个字符
putchar()：输出一个字符
int getchar （void）：//函数原型  
EOF:END OF FILE   ctr+z
ctr+c:中断程序
表达式1||表达式2
表达式1为真，则表达式2不执行。
表达式1为假，则执行表达式2。
system函数：发送一个DOS命令
shutdown-a　取消关机
shutdown -s 关机
shutdown -f　强行关闭应用程序
shutdown -m \\计算机名　控制远程计算机
shutdown -i　显示“远程关机”图形用户界面，但必须是Shutdown的第一个参数 　
shutdown -l　注销当前用户
shutdown -r　关机并重启
shutdown -s -t 时间　设置关机倒计时
shutdown -h 休眠
*/



#if 0
int main()
{
		int i = 0;
		int k = 0;
		for (i = 0, k = 0; k = 0; i++, k++)//一次都不执行，k=0为假（判断语句）
			k++;
		return 0;
}


int main()
{
	int ch = 0;
	while ((ch = getchar()) != EOF)//EOF是一个标识符 -1
	{
		putchar(ch);
	}
}
#endif