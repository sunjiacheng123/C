#define _CRT_SECURE_NO_WARNINGS 1

/*
�����������塪��������������Ԫ�صĵ�ַ
		��������´����������飺
		1.sizeof��arr������������������ֽڴ�С
		2.&arr+1��

sizeof():�����ڼ俴���ʽ�Ľ������ʲô����	
int arr[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
int len=sizeof(arr) / sizeof(arr[0]);
���������ﶨ�壬��ʽ������ʹ��
һά����ʹ�ã�
ð������
ѡ������
ֱ�Ӳ�������
shell����
��������
������
�鲢����
*/
#include<stdio.h>
#include <string.h>

#if 0
void BubbleSort(int arr[], int len)
{
	int i = 0,j = 0;
	int a = len - 1;
	for (i = 0; i < len - 1; i++)
	{
		a--;
		int temp = 0;
		for (j = 0; j <= a;j++)
		{
			if (arr[j]>arr[j + 1])
			{
				temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
			}
		}
		if (temp == 0)
		{
			break;
		}
	}
}
int main()
{
	int arr[5] = { 5, 2,3, 4,1 };
	int len = sizeof(arr) / sizeof(arr[0]);
	BubbleSort(arr, len);
}

//����Ĵ��Σ��������������������ô�ͻ��˻�Ϊָ�롣
//void Show(int *arr, int len)
//{
//	int len = sizeof(arr) / sizeof(arr[0]);//error
//}
int main()
{
	int arr[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	int a = 10;
	printf("%d %d\n", sizeof(arr[++a]),a);//  4   10   �����ʱ��һ��arr[++a]  ������ִ��++a
	//printf("%d\n", sizeof(arr[4]));
	//printf("%d\n", sizeof(arr[10]));
	//int len=sizeof(arr) / sizeof(arr[0]);
	//Show(arr, len);
	//char arr[] = "asnd";//����Ϊ5  Ĭ����\0
	//char *p = "asd";
	//printf("%s", p);//  ��ӡ�ַ�������������\0ֹͣ��
}
#endif
int main()
{
	char str1[100] = "abcdef";
	char str2[] = "abcdef";
	char *str3 = "abcdef";
	char str4[100] = "abcdef\0xyz";
	char str5[] = "abcdef\0xyz";
	char *str6 = "abcdef\0xyz";
	char str7[100] = "abcdef\n\0xyz";
	char str8[] = "abcdef\n\0xyz";
	char *str9 = "abcdef\n\0xyz";
	printf("%s\n", str1);
	printf("%s\n", str2);
	printf("%d,%d\n", sizeof(str1), strlen(str1));
	printf("%d,%d\n", sizeof(str2), strlen(str2));
	printf("%d,%d\n", sizeof(str3), strlen(str3));
	printf("%d,%d\n", sizeof(str4), strlen(str4));
	printf("%d,%d\n", sizeof(str5), strlen(str5));
	printf("%d,%d\n", sizeof(str6), strlen(str6));
	printf("%d,%d\n", sizeof(str7), strlen(str7));
	printf("%d,%d\n", sizeof(str8), strlen(str8));
	printf("%d,%d\n", sizeof(str9), strlen(str9));
}
