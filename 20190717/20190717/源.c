/*
һ��ö�ٺ�define���峣����ʲô����
1.#deine����ĳ��������Խ��е���
2.define����ı�ʶ���������������ͣ�ö�پ�������

��Ŀ��ö�ٻ��о���Ϣ������

����1.��ӡ�ַ���ʹ�ø�ʽ�����%s.��Ҫע�⣺%s����\0��ֹͣ��ӡ
	2.strlen:�������ַ������ȣ���ǰ�ַ������ַ��ĸ���
	����ԭ������\0ֹͣ
������--���˽���--��ʮ������
0000 1011   �������ƣ�
00 001 011
0   1   3   (�˽���)
0     b    ��ʮ�����ƣ�

*/



#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#define SIZE 10

void main()
{
	int sum = 0;
	for (int i = 1; i<100; i++){
		while (i>0){
			if(i%10==9){
				sum++;
			}
			i=i/10;
		}
	}
	printf("%d", sum);
}


#if 0
int main()
{
	printf("%d\n", '\013');//\013Ϊ��λ�˽���
	printf("%d\n", '\x0b');//\x0bΪ��λʮ������
	printf("%s\n", "c:\est");
}




enum Day //ö�����ͣ����峣��
{
	MON=1,
	THU=4,
	WED
	//...
};

int main()
{
	Day day = 1;
	Day day1 = MON;
}

int main()
{
	char *str1 = "hello";//�ַ�����˫������������һ�����ݣ�������\0��β
	char str2[] = "bit";//�ַ�����
	char str3[4] = { 'a', 'b', 'c', 'd' };
}
#endif