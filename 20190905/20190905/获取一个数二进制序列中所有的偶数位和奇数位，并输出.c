#define _CRT_SECURE_NO_WARNINGS 1
#if 0
#include <stdio.h>
void main()
{
	int a;
	int i = 0, j = 0;
	int m[16] ;
	int n[16] ;
	int count = 0;
	printf("������һ����:");
	scanf("%d", &a);
	for (i = 0; i < 32; i += 2)
	{
		m[j] = ((a >> i) & 1);  //����λ
		//printf("%d ", m[j]);
		j++;
	}
	//printf("\n");
	for (i = 1, j = 0; i < 32; i = i + 2)
	{
		n[j] = ((a >> i) & 1);//ż��λ
		//printf("%d ", n[j]);
		j++;
	}
	printf("����λ��");
	for (i = 15; i >= 0; i--)
	{
		printf("%d ", m[i]);		
	}
	printf("\n");
	printf("ż��λ��");
	for (i = 15; i >= 0; i--)
	{
		printf("%d ", n[i]);
	}
}
#endif