#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>



#if 0
//·ÇµÝ¹é
int MyStrlen(char *str)
{
	int count = 0;
	while (*str != '\0')
	{
		count++;
		*str++;
	}
	return count;
}

//µÝ¹é
int MyStrlen(char *str)
{
	int count=0;
	if (*str=='\0')
	{
		return 0
	}
	if (*str != '\0')
	{
		
		*str++;
		count=1+MyStrlen(str);
	}
	return count;
}

int main()
{
	char str[] = "asdfeqw";
	int a = MyStrlen(str);
	printf("%d\n", a);
}
#endif

