#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
/*
break����ѭ������
getchar()���Ӽ��̶�ȡһ���ַ�
putchar()�����һ���ַ�
int getchar ��void����//����ԭ��  
EOF:END OF FILE   ctr+z
ctr+c:�жϳ���
���ʽ1||���ʽ2
���ʽ1Ϊ�棬����ʽ2��ִ�С�
���ʽ1Ϊ�٣���ִ�б��ʽ2��
system����������һ��DOS����
shutdown-a��ȡ���ػ�
shutdown -s �ػ�
shutdown -f��ǿ�йر�Ӧ�ó���
shutdown -m \\�������������Զ�̼����
shutdown -i����ʾ��Զ�̹ػ���ͼ���û����棬��������Shutdown�ĵ�һ������ ��
shutdown -l��ע����ǰ�û�
shutdown -r���ػ�������
shutdown -s -t ʱ�䡡���ùػ�����ʱ
shutdown -h ����
*/



#if 0
int main()
{
		int i = 0;
		int k = 0;
		for (i = 0, k = 0; k = 0; i++, k++)//һ�ζ���ִ�У�k=0Ϊ�٣��ж���䣩
			k++;
		return 0;
}


int main()
{
	int ch = 0;
	while ((ch = getchar()) != EOF)//EOF��һ����ʶ�� -1
	{
		putchar(ch);
	}
}
#endif