#define _CRT_SECURE_NO_WARNINGS 1
#if 0
int binsearch(int key, int arr[], int len)
{
	int left =0 ;
	int right =len-1 ;
	int mid = (left + right) / 2;
	while (left <= right)
	{
		
		if (key >arr[mid])
		{
			left = mid + 1;
			mid = (left + right) / 2;
		}
		else if (key <arr[mid])
		{
			right = mid - 1;
			mid = (left + right) / 2;
		}
		if (key =arr[mid])
			return mid;
	}


}
int main()
{
	int arr[] = { 2, 8, 11, 56, 66, 77, 88, 99 };
	int len = sizeof(arr) / sizeof(arr[0]);
	int index = binsearch(56, arr, len);
	printf("%d\n", index);
	return 0;
}
#endif
