#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#if 0
//选择排序
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

//直接排序，越有序越快。
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
二维数组：
1.不可以同时不写行数和列数。
2.可以只写列数，编译器会根据你写的列数，确定行数。
3.二维数组内存是连续的(在a[3][4]中a[0][4],a[1][0]打印出来的数据一样)，二维数组是一个特殊的一维数组

二维数组名：数组首元素的地址，但是此时首元素是一个一维数组
指向数组的指针：数组指针


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
	int arr[3][4] = { 0 };//3行4列
	int(*p)[4] = arr;//一维数组的地址
	//执行数组的指针
	int *p[3];//指针数组
	Show(arr);




	//int i = 0, j = 0;
	//for (i = 0; i < 3; i++)//打印二维数组地址
	//{
	//	for (j = 0; j < 4; j++)
	//	{
	//		printf("%p",&arr[i][j]);
	//	}
	//}

	//for (i = 0; i < 3; i++)//初始化二维数组
	//{
	//	for (j = 0; j < 4; j++)
	//	{
	//		arr[i][j] = i * 4 + j;
	//	}
	//}

	//for (i = 0; i < 3; i++)//打印二维数组
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