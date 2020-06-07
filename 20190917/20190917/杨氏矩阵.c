#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#if 0
int  ChaZhao(int arr[][3],int a )
{
	if (a > arr[2][2] || a < arr[0][0])
	{
		return 0;
	}
	int i=0, j = 0;
	for (; i < 3; i++)
	{
		if (arr[i][0] <= a && arr[i][2] >= a)
		{
			for (; j < 3; j++)
			{
				if (arr[i][j] == a)
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

void find(int *arr, int *px, int * py, int key)
{
	int row = 0;
	int col = *py - 1;
	while (row < *px && col >= 0)
	{
		if (*((arr+row)+col) == key)
		{
			*px = row;
			*py = col;
			return;
		}
		else if (*((arr+row)+col)  > key)//15 > 7
		{
			col--;
		}
		else//7 < 18
		{
			row++;
		}
	}
	//没有找到
	*px = -1;
	*py = -1;
}
void main()
{
	int arr[3][3] = { 1, 2, 3, 6, 7, 8, 7, 8, 9 };
	int a;
	int x = 3;
	int y = 3;
	//printf("请输入要查找的数字:");
	//scanf("%d", &a); 
	find(arr, &x, &y, 4);
	//int sum=ChaZhao(arr, a);
	/*if (sum == 1)
	{
		printf("找到了这个数\n");
	}
	else if (sum == 0)
	{
		printf("找不到这个数\n");
	}*/
}
void Show(int *arr, int row, int col)
{

}

int main()
{
	int arr[2][3] = { 1, 2, 3, 4, 5, 6 };
	Show((int *)arr, 2, 3);

}
//i*col+j
#endif
Node *LastKNode(Plist plist,int k)
{
	Node *p = plist;
	Node *q = plist;
	while (k - 1>0)
	{
		if (p->next != NULL)
		{
			p = p->next;
			k--:

		}
		else
		{
			printf("没有此节点");
		}
	}
	while (q->next != NULL)
	{
		p = p->next;
		q = q->next;
	}
	return q;
}