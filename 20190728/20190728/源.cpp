#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#if 0
//ѡ������
void Select(int arr[],int len)
{
	int i = 0;
	for (i = 0; i <= len - 2; i++)
	{
		for (int j = i + 1; j <= len - 1; j++)
		{
			if (arr[i]>arr[j])
			{
				int temp = arr[i];
				arr[i] = arr[j];
				arr[j] = temp;
			}
		}
	}
}

int main()
{
	int arr[7] = { 10, 9, 8, 7, 6, 5, 4 };
	int len = sizeof(arr) / sizeof(arr[0]);
	Select(arr,len);
}

//ֱ������Խ����Խ�졣
void Insert(int arr[], int len)
{
	for (int i = 1; i <= len - 1; i++)
	{
		int temp = arr[i];
		int j = 0;
		for (j = i - 1; j >= 0; j--)
		{
			if (arr[j] > temp)
			{
				arr[j + 1] = arr[j];
			}
			else
				break;
		}
		arr[j + 1] = temp;
	}
}

int main()
{
	int arr[7] = { 9, 1, 5, 3, 25, 8, 4 };
	int len = sizeof(arr) / sizeof(arr[0]);
	Insert(arr, len);
}
#endif
/*
��ά���飺
1.������ͬʱ��д������������
2.����ֻд�������������������д��������ȷ��������
3.��ά�����ڴ���������(��a[3][4]��a[0][4],a[1][0]��ӡ����������һ��)����ά������һ�������һά����

��ά��������������Ԫ�صĵ�ַ�����Ǵ�ʱ��Ԫ����һ��һά����
ָ�������ָ�룺����ָ��


*/

void Upangel(int arr[][5], int row, int col)
{
	int i, j;
	int a = 1;
	for (i = 0; i < row; i++)
	{
		for (j = 0; j < col; j++)
		{
			if (j >=i )
			{
				arr[i][j] = a;
				a++;
			}
		}
	}
}

void Downangel(int arr[][5], int row, int col)
{
	int i, j;
	int a = 1;
	for (i = 0; i < row; i++)
	{
		for (j = 0; j < col; j++)
		{
			if (j <= i)
			{
				arr[i][j] = a;
				a++;
			}
		}
	}
}

void SymMatrix(int arr[][5], int row, int col)
{
	int i, j;
	int a = 1;
	for (i = 0; i < row; i++)
	{
		for (j = 0; j < col; j++)
		{
			if (i <= j)
			{
				arr[i][j] = a;
				a++;
			}
			arr[j][i] = arr[i][j];
		}
	}
}

int main()
{
	int arr[5][5] = { 0 };
//	Upangel(arr, 5, 5);
	Downangel(arr, 5, 5);
//	SymMatrix(arr, 5, 5);
	return 0;
}




#if 0
void Show(int(*arr)[4])
{

}

int main()
{
	int arr[3][4] = { 0 };//3��4��
	int(*p)[4] = arr;//һά����ĵ�ַ
	//ִ�������ָ��
	int *p[3];//ָ������
	Show(arr);




	//int i = 0, j = 0;
	//for (i = 0; i < 3; i++)//��ӡ��ά�����ַ
	//{
	//	for (j = 0; j < 4; j++)
	//	{
	//		printf("%p",&arr[i][j]);
	//	}
	//}

	//for (i = 0; i < 3; i++)//��ʼ����ά����
	//{
	//	for (j = 0; j < 4; j++)
	//	{
	//		arr[i][j] = i * 4 + j;
	//	}
	//}

	//for (i = 0; i < 3; i++)//��ӡ��ά����
	//{
	//	for (j = 0; j < 4; j++)
	//	{
	//		printf("%-3d", arr[i][j]);
	//	}
	//	printf("\n");
	//}



	/*int arr[2][2] = { 1, 2, 3, 4 };
	int arr[2][2] = { { 1, 2 }, { 3, 4 } };
*/

	return 0;
}
#endif