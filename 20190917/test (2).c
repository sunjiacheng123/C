#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<assert.h>
#include<string.h>



#if 0
int main()
{
	int a = 10;
	return 0;
}


//char *strcpy( char *strDestination, const char *strSource );
char *MyStrcpy( char *dest, const char *src )
{
	char *p = dest;
	assert(src != NULL && dest != NULL);
	/*while(*src != '\0')
	{
		*dest = *src;
		src++;
		dest++;
	}*/
	while(*dest++ = *src++)
	{}
	return p;
}
int main()
{
	char dest[5] = {0};
	char *src = "hello";
	char *p = MyStrcpy(dest,src);
	printf("%s\n",p);


	/*int a = 10;
	int b = 20;*/
	//const int *  p = &a;//不能进行解引用
	//int * const p = &a;//p的指向不能发生改变
	/*p = &b;
	*p = 99;*/


	//char dest[30] = {0};
	////char *dest = NULL;
	//char *src = "hello";
	//strcpy(dest,src);
	//printf("%s\n",dest);
	return 0;
}


void test3()
{
	printf("hhh\n");
}

void test2()
{
	test3();
}

void test()
{
	test2();
}

void Fun(int *p)
{
	int a = 0;
	assert(p != NULL);//断言
	a = *p;
	printf("%d\n",a);
}
/*
如何预防野指针？？
malloc();
*/
int main()
{
	//int *p ;    野指针  
	int *p = NULL;  
	int a = 10;
	p = &a;
	printf("%d\n",*p);

	//char *str = "hello";
	//char *str2 = "hello";

	//if(str == str2)
	//{
	//	printf("hhhhh\n");
	//}
	//else
	//{
	//	printf("xxxxxxxx\n");
	//}

	//char *str = "hello";
	//*str = 'g';
	//printf("%s\n",str);

	//char str[] = "hello";
	//str[0] = 'g';
	//printf("%s\n",str);


	////int a = 10;
	//Fun(NULL);
	//int *p = NULL;// '0'  0  \0  NULL
	////test();
	return 0;
}


int main()
{
	int i = 0;
	int arr[10] = {0};

	/*printf("%p\n",&i);
	printf("%p\n",arr);*/

	for(i=0; i<=12; i++)
	{
		arr[i] = 0;
		printf("hehe\n");
	}
	//&arr[0]
	//&i
	return 0;
}
#endif
