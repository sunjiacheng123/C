#define _CRT_SECURE_NO_WARNINGS 1
#define SIZE 10
#include<stdio.h>
#include<string.h>


int fun()
{
	static int count = 1;
	return ++count;
}
int main()
{
	int i = 1;
int ret = (++i) + (++i) + (++i);
printf("%d\n", ret);
printf("%d\n", i);
	return 0;
}




#if 0
//5   4   1 
//00000000000000000000000000000000 
int Fun(int a,int b)
{
	return (a-b) >> 31 ? -1 : (a-b) ? 1 : 0;
}
//typedef  �����������
typedef struct Student
{
	char name[10];
	int age;
} stu,*pstu2;//ȫ�ֱ���   = {"caocao",99}


//�ṹ������鶼���ھۺ�����  ����һ�����壬�����ʼ��ֻ��һ�λ��ᡣ
//.    ->  ָ���       ��ͷ
//char   int   float  double  --->   ...........
//������ת��Ϊ��ǰ���ʽ��������
int main()
{
	int i = 10;
	i = i-- - --i * ( i = -3 ) * i++ + ++i;
	printf("i = %d\n", i);

	//char ch = 9;
	//double f = 12.5;
	//int a = 10;
	//double b = ch+f+a;
	//unsigned int a = 10;
	//float f = 12.5f;

	//int b = a+f;//double


	//char c = 1;
	//printf("%u\n", sizeof(c));
	//printf("%u\n", sizeof(+c));
	//printf("%u\n", sizeof(!c));//1
	//char a = 0xb6;
	//short b = 0xb600;
	//int c = 0xb6000000;
	//if(a==0xb6)
	//printf("a");
	//if(b==0xb600)
	//printf("b");
	//if(c==0xb6000000)
	//printf("c");
	//stu s = {"gaobo",18};
	//pstu2 p = &s;

	////stu.age = 99;
	//struct Student stu2 = {"caocao",99};
	//struct Student *pstu = NULL;
	//stu2.age = 199;
	////stu2.name = "liubei";
	//strcpy(stu2.name,"liubei");
	//
	//pstu = &stu2;
	//pstu->age = 100;
	//10 = 20;
	//stu = {"caocao",99};
	//int arr[10] = {0};//[]  ��ʾ����
	//arr[1] = 10;//[]   �±�����

	//const int a = 10;
	//int arr[SIZE]  = {0};
	//int ret = Fun(10,20);
	/*int ret =(10,20,30,40);
	printf("%d\n",ret);*/
	return 0;
}
#endif