#define _CRT_SECURE_NO_WARNINGS 1
/*
break:�������е�ѭ��
continue�������������ѭ��
goto����ת��ĳһ����ǩ��ʾ�����
register���Ĵ���
typedef:����������  ���ӵ�����
��������һ��
typedef��#define ��������ʲô��
����typedef �ͻ��ɱ�����Ϊ��Ӧ������
static:
	���ξֲ�����--�������ֲ���������������
	����ȫ�ֱ���--�������ڱ�����--�������Ƶ���ǰ��Դ�ļ���
	���κ���--�������ڱ�����--�������Ƶ���ǰ��Դ�ļ���
�����������
static��extern���������ϵ��






*/
 
#include<stdio.h>





#if 1
typedef int Arr[10];//����typedef �ͻ��ɱ�����Ϊ��Ӧ������
int main()
{
	Arr arr = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
}

int main()
{
	int a = 10;
bit://��ǩ
	printf("hello");
	goto bit;//��ת
	register int b = 20;//�����b����Ĵ�����
}

int main()
{
	auto a = 10;
	auto b = 10.9;
	auto c = 'asdd';
}
#endif