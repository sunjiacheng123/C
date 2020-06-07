#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#if 0
void JiaoHuan(int arr[], int left, int right)
{
	while (left < right)
	{
		if (arr[left] % 2 == 1 && arr[right] % 2 == 0)
		{
			left++;

			right--;
		}
		else if (arr[left] % 2 == 1 && arr[right] % 2 == 1)
		{
			left++;
		}
		else if (arr[left] % 2 == 0 && arr[right] % 2 == 1)
		{
			int temp = arr[right];
			arr[right] = arr[left];
			arr[left] = temp;
			left++;
			right--;
		}
		else
		{
			right--;
		}
	}
}

void main()
{
	int arr[] = { 15, 20, 5, 3, 4, 8, 1, 7, 6, 9 };
	int left = 0;
	int right = sizeof(arr) / sizeof(arr[0])-1;
	JiaoHuan(arr, left, right);
	for (int i = 0; i <= right; i++)
	{
		printf("%d ", arr[i]);
	}
}
#endif