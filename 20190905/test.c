#define _CRT_SECURE_NO_WARNINGS 1
#if 0
#include<stdio.h>
int main()
{
	char *str[3] = {"hello","da","boge"};
	int len = sizeof(str)/sizeof(str[0]);
	int i = 0;
	for(i = 0;i < len;i++)
	{
		printf("%s\n",str[i]);
	}

	return 0;
}


int main()
{
	//int a = 10;
	//int b = 20;
	//int c = 30;
	//int* arr[3] = {&a,&b,&c};
	int arr1[3] = {1,2,3};
	int arr2[3] = {4,5,6};
	int arr3[3] = {7,8,9};
	int *p[3] = {arr1,arr2,arr3};
	int i = 0;
	for(i = 0;i < 3;i++)
	{
		int j = 0;
		for(j = 0;j < 3;j++)
		{
			//printf("%d ",*(p[i] + j));
			//printf("%d ",*( *(p+i) + j));
			//                        p[i][j]
			printf("%d ",p[i][j]);
			//
		}
		printf("\n");
	}

	/*printf("%d\n",*(p[0] + 1));
	printf("%d\n",*(p[1] + 2));*/

	

	return 0;
}


void Show(int *p,int len)
{
	int i = 0;
	//int len = sizeof(p)/sizeof(p[0]);//1
	for(i = 0;i < len;i++)
	{
		//printf("%d ",p[i]);
		printf("%d ",*(p+i));
	}
	printf("\n");
}
/*
数组名在两种情况下，表示整个数组
1、sizeof(arr)-->整个数组的字节大小
2、&arr; &数组名 -->整个数组的地址
3、区分
     arr+1;   --> 4  arr-->int *
	 &arr+1; -->整个数组--》 整个数组的大小 
4、指针-指针：两个指针同时指向同一块内存
5、
*/

int main()
{
	int arr[5];
	int *p;
	for(p = &arr[4]; p >= &arr[0];p--)
	{
		*p = 0;
	}

	return 0;
}


int main()
{
	int arr[] = {1,2,3,4,5,6};
	//int arr2[] = {1,2,3,4,5,6,7};
	int *p = arr;
	int *p2 = arr+4;
	printf("%d\n",p2-p);
	printf("%d\n",p-p2);

	/*int i = 0;
	int (*p)[6] = &arr;
	for(i = 0;i < 6;i++)
	{
		printf("%d\n",*(  (*p)  +i  ));
	}*/

	//printf("%d\n",arr);
	//printf("%d\n",&arr[0]);

	//printf("%d\n",&arr);//整个数组的地址
	/*printf("%d\n",arr);
	printf("%d\n",arr+1);
	printf("%d\n",&arr+1);*/
	//int len = sizeof(arr)/sizeof(arr[0]);
	//int *p = arr;
	//Show(arr,len);
	return 0;
}


int main()
{
	int n = 0x11223344;
	char *pc = (char *)&n;
	char *pi = (char *)&n;
	*pc = 0x55;//重点在调试的过程中观察内存的变化。
	*pi = 0; //重点在调试的过程中观察内存的变化。
	printf("%x\n",n);
	return 0;
}

//指针的加法：+ 或者 -  整数   加几个字节？
//取决于指针的类型。什么类型的指针就加几个字节
int main()
{
	//char c = 10;
	//char *pc = &c;
	//printf("%d,%d\n",&c,pc);
	//printf("%d\n",pc+1);//指针的加法
	int a = 10;
	int *p = &a;
	printf("%d,%d\n",&a,p);
	printf("%d\n",p-1);//指针的加法
	return 0;
}


/*
任何类型的指针 大小都是4个字节  32位
64位  8个字节
*/
int main()
{
	int a = 0;
	int *p = NULL;//  0  '\0'  NULL      '0'-->48
	printf("%d\n",sizeof(char *));//4
	printf("%d\n",sizeof(short *));//4
	printf("%d\n",sizeof(int *));
	printf("%d\n",sizeof(float *));
	printf("%d\n",sizeof(double *));
	printf("%d\n",sizeof(long *));
	return 0;
}



int main()
{
	short a = 10;
	//不能进行解引用--》void 没有具体的大小
	//可以接收任何类型的地址
	void *p = &a;
	//printf("%d\n",*p);
	return 0;
}


//如果是小端返回1  否则返回0
int IsLittle()
{
	//int a = 0x12345678;
	int a = 1;//0000000000000000....01
	char *pc = (char *)&a;
	if(*pc == 1)
	{
		return 1;
	}
	return 0;
}

int main()
{
	int ret = IsLittle();
	if(ret == 1)
	{
		printf("is little\n");
	}
	else
	{
		printf("is not little\n");
	}

	//int *p = &a;
	//char c = 10; //
	//char *pc = &c;
	//printf("%d\n",*pc);
	return 0;
}


//机器语言：二进制  0  1    
//汇编语言：字母  串号 
//高级语言--》人类的语言  C   Java
int main()
{
	int a = 10;//0000 0000 0000 1010   0x00 00 00 0a
	int *p = &a;
	int **p2 = NULL;
	printf("%d\n",*p); //间接访问  解引用 
	*p = 99;
	printf("%d\n",*p); 
	p2 = &p;
	//p2 = &a;
	**p2 = 999;
	printf("%d\n",*p); 
	//p  int *p;//定义一个指针变量
	return 0;
}
#endif