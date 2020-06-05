#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#if 0
int Pan(int arr[][4],int a)
{
	int i, j;
	for (i = 0; i < 4; i++)
	{
		for (j = 0; j < 4; j++)
		{
			if (arr[i][j] == a)
			{
				return 1;
			}
		}
	}
}

int main()
{
	int arr[4][4] = {
		1,2,8,9,
		2,4,9,12,
		4,7,10,13,
		6,8,11,15,
	};
	int a ;
	printf("请输入一个整数");
	scanf("%d", &a);
	int sum = Pan(arr,a);
	if (sum == 1)
	{
		printf("数组中存在%d\n", a);
	}
	else
		printf("数组中不存在%d\n", a);

}
#endif