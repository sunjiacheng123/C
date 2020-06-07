#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
/*结构体与数字一样  属于聚合类型  进行整体初始化

c:弱类型语言--》
java：强类型
malloc ：动态开辟内存

vc中哨兵位有2个
lunix中哨兵位有1个

*/
#if 0
int GetLength(Plist plist)
{
	Node *pCur = plist->next;
	int count = 0;
	while (pCur != NULL)
	{
		count++;
		pCur = pCur->next;
	}
	return count;
}

void InsertTail(Plist plist, int val)
{
	Node *pCur = plist;
	while (pCur->nest != NULL)
	{
		pCur = pCur->next;
	}
	Node *pGet = GetNode(val);
	pCur->nest = pGet;

}



typedef struct student//给类型起别名
{
	char name[10];
	int age;
	//struct student stu3;       自引用，只能以指针的方式
	struct student *p;
}student;//别名;//stu = {"hello",66};

void show(student arr[], int len)
{
	int i;
	for (i = 0; i < len; i++)
	{
		printf("%d,%s", arr[i].age, arr[i].name);
		printf("%d,%s", (*(arr + i)).age, (*(arr + i)).name);
		printf("%d,%s", (arr + i)->age, (arr + i)->name);
		
	}
}
/*
		.:变量
		->：指针->
*/

void main()
{
	struct student stu1 = { "caocao", 18 };
	student stu2 = { "sad", 28 };
	student stu[3] = { { "asd", 22 },{ "aw", 30 },{"awww", 21} };
	int len = sizeof(stu) / sizeof(stu[1]);
	//stu = { "hello", 99 };
	strcpy(stu2.name, "sada");//数组类型用strcpy

}
#endif

struct A
{
	int a;
	int b;
};

struct B
{
	int c;
	struct A *pa;
	struct A AA;
};

void main()
{
	struct B bb = { 20, NULL,{20,2} };
	bb.AA.a = 1;
	bb.pa->b = 3;
}