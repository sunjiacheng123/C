#define _CRT_SECURE_NO_WARNINGS 1
/*
0x12 34 56 78
��ˣ��͵�ַ��Ÿ����� �������ʽ0x12 34 56 78��
С�ˣ��͵�ַ��ŵ����� �������ʽ0x78 56 34 12��

ָ����������ŵľ��ǵ�ַ
int *p=&a;  ��ַΪʮ�����Ƶ�����  �κ����͵�ָ���С��32λƽ̨��4���ֽڣ�64λƽ̨��8���ֽڡ�
int **pp=&p;  ��СҲ���ĸ��ֽ�
�ṹ�壺һ������ �ۺ�����  ����
�������������������ʼ����ֻ���ڶ����ʱ��
*/
#include <stdio.h>
#if 0
struct Stu
{
	char name[20];//����
	int age; //����
	char sex[5];//�Ա�
	char id[15];//ѧ��
}stu2;//ȫ�ֱ���
int main()
{
	struct Stu stu1 = { "zhangsan",18,"��","123456" };//һ�������������ֽ�
	stu2 = { "zhangsan", 18, "��", "123456" };//error��ֻ���ڶ����ʱ���ʼ��
}



void Swap(int *p, int *q)
{
	int tmp = *p;
	*p = *q;
	*q = tmp;
}

//void Swap2(int *p,int *q)
//{
//	int *tmp = p;
//	p =q;
//	q = tmp;
//}

int main()
{
	int a = 10;
	int b = 20;
	printf("%d,%d\n",a,b);
	Swap(&a,&b);
	//Swap2(&a,&b);
	printf("%d,%d\n",a,b);
	return 0;
}

//windows+r-->cals  ��������Ա������
int main()
{
	int a = 10;
	int *p = &a;//��ַ����ڶ�Ӧ���͵�ָ�뵱��
	*p = 88;//��ʱ��*�Ǽ�ӷ��ʷ�--��������
	int **pp = &p;
	**pp = 99;
	printf("%p\n", &a);//��ӡ�����ĵ�ַ��ʮ������
	printf("%d\n", &a);//ÿ�����г��򣬱����ĵ�ַ�ǲ�ȷ���ġ�
	return 0;
}
#define SIZE 10//������һ����ʶ������
#define STR "hello"
#define LOOP for(;;){pringtf("gaobo");}
#define LOOP for(;;)\
{\
	printf("gaobo\n");\
}//���з�
#define ADD(x,y) x+y
//����һ����--�������в����� ���и����õģ���
//ע�����⣺�����ܶ���ã���

int main()
{
	int result =ADD(10+5, 20);
	printf("%d\n",result);
}
#endif