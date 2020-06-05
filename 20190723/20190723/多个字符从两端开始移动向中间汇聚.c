#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#if 1
int main()
{
	char arr1[] = "welcome to bit";
	//char arr1[] = {'w','e','l','c','o','m','e',' ','t','o',' ','b','i','t'};
	char arr2[] = "##############";
	int left = 0;
	int right = sizeof(arr1) / sizeof(arr1[0])-2;
	for (; left <= right; left++, right--)
	{
		arr2[left] = arr1[left];
		arr2[right] = arr1[right];
		printf("%s\n", arr2);
	}
}
#endif