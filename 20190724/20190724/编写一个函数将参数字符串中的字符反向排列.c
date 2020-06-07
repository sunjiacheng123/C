#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#if 0
void Reverse_string(char arr[],int left,int right)
{
	if (left < right)
	{
		int temp = arr[left];
		arr[left] = arr[right];
		arr[right] = temp;
		left++; right--;
		Reverse_string(arr, left, right);	
	}
}
int main()
{
	char arr[] = { "hello student!" };
	int len = sizeof(arr) / sizeof(arr[0]);
	int left = 0, right = len - 2;
	Reverse_string(arr, left,right);
	printf("%s", arr);
}



void Reverse_string(char *str)
{
	int len = strlen(str);
	char tmp = *str;
	*str = *(str + len-1);
	*(str + len - 1) = '\0';
	if (strlen(str + 1) >= 2)
	{
		Reverse_string(str + 1);
	}
	*(str + len - 1) = tmp;
}

int main()
{
	char str[] = "sdffgg";
	Reverse_string(str);
	printf("%s", str);
}
#endif