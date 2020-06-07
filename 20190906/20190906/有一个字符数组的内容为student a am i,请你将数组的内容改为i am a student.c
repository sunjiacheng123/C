#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#if 0
void reverse(char* start, char* end)
{
	while (start < end)
	{
		char tmp = *start;
		*start = *end;
		*end = tmp;
		start++;
		end--;
	}
}

void str_reverse(char* str)
{
	int len = strlen(str);
	reverse(str, str + len - 1);  //全部逆置
	while (*str != '\0')
	{
		char* pos = str;
		while ((*str != ' ') && (*str != '\0'))
		{
			str++;
		}
		reverse(pos, str - 1);    //每个单词的逆置
		if (*str != '\0')
		{
			str++;
		}
	}
}
#endif

int MyStrlen(char *str)
{
	int len = 0;
	while (*str != '\0')
	{
		len++;
		str++;
	}
	return len;
}

void ReverseStr(char *str, char *left, char *right)
{
	while (left < right)
	{
		char tmp = *left;
		*left = *right;
		*right = tmp;
		left++;
		right--;
	}
}

void ReverseSentence(char *str)
{
	int len = MyStrlen(str);
	char *cur = str;
	char *left = str;
	char *right = str + len - 1;
	ReverseStr(str, left, right);//tned.......
	while (*cur != '\0')
	{
		char *star = cur;
		while (*cur != '\0'&&*cur != ' ')
		{
			cur++;
		}
		ReverseStr(str, star, cur-1);
		if (*cur == ' ')
		{
			cur++;
		}
		//cur++;
	}
}
int main()
{
	char str[] = "student a am i";
	printf("原字符串为：%s\n", str);
	//str_reverse(str);
	ReverseSentence(str);
	printf("翻转后的字符串为：%s\n", str);
	return 0;
}
