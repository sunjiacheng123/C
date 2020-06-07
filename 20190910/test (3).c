#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <math.h>
//15          0000 1111     &   ^   |
//              0000 0001
//              0000 0001
int  count_one_bits(unsigned int value)
{
       // 返回 1的位数
	//int count = 0;//1的个数
	//while((value&1) != 0)//0000 0010
	//{
	//	count++;
	//	value = value>>1;
	//}
	//return count;
	int count = 0;
	int i = 0;
	for(i = 0;i < 32;i++)
	{
		if(  (  (value>>i) & 1) != 0)
		{
			count++;
		}
	}
	return count;
}
int  count_one_bits2(unsigned int value)
{
	int count = 0;
	while(value != 0)
	{
		count++;
		value = value & (value-1);
	}
	return count;
}

void Function(int num)
{
	int i = 0;
	for(i = 31; i >= 1;i -= 2)
	{
		printf("%d ",((num >> i) & 1));
	}//偶数
	printf("\n");
	for(i = 30; i >= 0;i -= 2)
	{
		printf("%d ",((num >> i) & 1));
	}//奇数
}
//1729    1  7   2   9  
void Function2(int num)
{
	if(num > 9)
	{
		Function2(num/10);
	}
	printf("%d ",num % 10);
}

int Function3(int num1,int num2)
{
	int tmp = num1 ^ num2;
	int count = 0;
	while(tmp != 0)
	{
		count++;
		tmp = tmp & (tmp-1);
	}
	return count;
}

void Function4()
{
	int a,b,c,d,e;
	for(a = 1; a<=5;a++)
	{
		for(b = 1; b <= 5;b++)
		{
			for(c = 1; c <= 5;c++)
			{
				for(d= 1;d <= 5;d++)
				{
					for(e = 1; e<= 5;e++)
					{
						/*if( (b == 2 || a == 3) && (b==2 || e == 4)
							&& (c == 1 || d == 2) && (c==5 || d==3)
							&&(e == 4 || a == 1)
							)*/
						if( (b == 2) +( a == 3)==1 && (b==2) + (e == 4)==1
							&& (c == 1)+ (d == 2)==1 && (c==5) + (d==3) ==1
							&&(e == 4) +(a == 1) ==1
							)
						{
							if(a*b*c*d*e == 120)
							printf("a=%d,b=%d,c=%d,d=%d,e=%d\n",a,b,c,d,e);
						}
					}
				}
			}
		}
	}
}

void Function5()
{
	char killer = 0;
	for(killer = 'a'; killer <= 'd';killer++)
	{
		if((  (killer != 'a') + (killer == 'c') +
			(killer == 'd') + (killer != 'd') ) == 3)
		{
			printf("%c\n",killer);
		}
	}
}
void Function6(int arr[][10])
{
	int i = 0;
	for(i = 0;i < 10;i++)
	{
		int j = 0;
		for(j = 0;j < 10;j++)
		{
			if(j == 0 || i == j)
			{
				arr[i][j] = 1;
			}
			else
			{
				arr[i][j] = arr[i-1][j] + arr[i-1][j-1];
			}
		}
	}
}
void Show(int (*p)[10])
{
	int i = 0;
	for(i = 0;i < 10;i++)
	{
		int j = 0;
		for(j = 0;j <= i;j++)
		{
			//printf("%d ",p[i][j]);
			printf("%-3d ",*(*(p+i)+j));
		}
		printf("\n");
	}
}
//0000  0100
//1010  0000
unsigned int  reverse_bit(unsigned int value)
{
	unsigned int sum = 0;
	int i = 0;
	for(i = 0;i < 32;i++)
	{
		sum = sum + ((value >> i) & 1)* pow((double)2,31-i);
	}
	return sum;
}
//0000 0100  4
//0000 0010  2    &   ^
int Avg(int a,int b)
{
	int avg = 0;
	avg = (a&b)+  ((a^b) >> 1);
	return avg;
}
//1 3 5 2 1 3 5  ^
//0000 0010
//0000 0010    0     -->  1 3 5 2 1 3 5 7
//1 2 3 1 3        5 5 7           不能重新申请两个数组    
int AppearOnce(int *arr,int len)
{
	int i = 0;
	int sum = 0;
	for(i = 0;i < len;i++)
	{
		sum ^= arr[i];
	}
	return sum;
}

int MyStrlen(char *str)
{
	int len = 0;
	while(*str != '\0')
	{
		len++;
		str++;
	}
	return len;
}

void ReverseStr(char *str,char *left,char *right)
{
	while(left < right)
	{
		char tmp = *left;
		*left = *right;
		*right = tmp;
		left++;
		right--;
	}
}

void ReverseSentence(char *str)
{
	int len = MyStrlen(str);
	char *cur = str;
	char *left = str;
	char *right = str+len-1;
	if(str==NULL)
	{
		return;
	}
	ReverseStr(str,left,right);//tned.......

	while(*cur != '\0')
	{
		char *start = cur;
		while(*cur != ' ' && *cur != '\0')
		{
			cur++;
		}
		ReverseStr(str,start,cur-1);
		if(*cur == ' ')
		{
			cur++;
		}
	}
}

int main()
{
	char str[] = "i am student";
	//ReverseStr(str);
	ReverseSentence(str);
	printf("%s\n",str);


	/*int arr[] = {4,2,7,2,1,4,7};
	int len = sizeof(arr)/sizeof(arr[0]);
	printf("%d\n",AppearOnce(arr,len));*/
	/*int arr[10][10];
	Function6(arr);
	Show(arr);*/

	/*int ret = Function3(1999,2299);
	printf("%d\n",ret);*/
	return 0;
}