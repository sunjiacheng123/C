#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#if 0
int main()
{
	int c[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9 ,10};
	int a;//�����±�
	int b;
	printf("�����Ҫ���ҵ�����");
	scanf("%d", &b);
	for (int i = 0; i < 10; i++)
	{	

		if (b == c[i])
		{
			printf("���ص������±�Ϊ%d\n", i);
			break;
		}

		if(b != c[i]&&i==9)
		{
			printf("%d\n", -1);

		}
	}

}
#endif