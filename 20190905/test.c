#define _CRT_SECURE_NO_WARNINGS 1
#if 0
#include<stdio.h>
int main()
{
	char *str[3] = {"hello","da","boge"};
	int len = sizeof(str)/sizeof(str[0]);
	int i = 0;
	for(i = 0;i < len;i++)
	{
		printf("%s\n",str[i]);
	}

	return 0;
}


int main()
{
	//int a = 10;
	//int b = 20;
	//int c = 30;
	//int* arr[3] = {&a,&b,&c};
	int arr1[3] = {1,2,3};
	int arr2[3] = {4,5,6};
	int arr3[3] = {7,8,9};
	int *p[3] = {arr1,arr2,arr3};
	int i = 0;
	for(i = 0;i < 3;i++)
	{
		int j = 0;
		for(j = 0;j < 3;j++)
		{
			//printf("%d ",*(p[i] + j));
			//printf("%d ",*( *(p+i) + j));
			//                        p[i][j]
			printf("%d ",p[i][j]);
			//
		}
		printf("\n");
	}

	/*printf("%d\n",*(p[0] + 1));
	printf("%d\n",*(p[1] + 2));*/

	

	return 0;
}


void Show(int *p,int len)
{
	int i = 0;
	//int len = sizeof(p)/sizeof(p[0]);//1
	for(i = 0;i < len;i++)
	{
		//printf("%d ",p[i]);
		printf("%d ",*(p+i));
	}
	printf("\n");
}
/*
����������������£���ʾ��������
1��sizeof(arr)-->����������ֽڴ�С
2��&arr; &������ -->��������ĵ�ַ
3������
     arr+1;   --> 4  arr-->int *
	 &arr+1; -->��������--�� ��������Ĵ�С 
4��ָ��-ָ�룺����ָ��ͬʱָ��ͬһ���ڴ�
5��
*/

int main()
{
	int arr[5];
	int *p;
	for(p = &arr[4]; p >= &arr[0];p--)
	{
		*p = 0;
	}

	return 0;
}


int main()
{
	int arr[] = {1,2,3,4,5,6};
	//int arr2[] = {1,2,3,4,5,6,7};
	int *p = arr;
	int *p2 = arr+4;
	printf("%d\n",p2-p);
	printf("%d\n",p-p2);

	/*int i = 0;
	int (*p)[6] = &arr;
	for(i = 0;i < 6;i++)
	{
		printf("%d\n",*(  (*p)  +i  ));
	}*/

	//printf("%d\n",arr);
	//printf("%d\n",&arr[0]);

	//printf("%d\n",&arr);//��������ĵ�ַ
	/*printf("%d\n",arr);
	printf("%d\n",arr+1);
	printf("%d\n",&arr+1);*/
	//int len = sizeof(arr)/sizeof(arr[0]);
	//int *p = arr;
	//Show(arr,len);
	return 0;
}


int main()
{
	int n = 0x11223344;
	char *pc = (char *)&n;
	char *pi = (char *)&n;
	*pc = 0x55;//�ص��ڵ��ԵĹ����й۲��ڴ�ı仯��
	*pi = 0; //�ص��ڵ��ԵĹ����й۲��ڴ�ı仯��
	printf("%x\n",n);
	return 0;
}

//ָ��ļӷ���+ ���� -  ����   �Ӽ����ֽڣ�
//ȡ����ָ������͡�ʲô���͵�ָ��ͼӼ����ֽ�
int main()
{
	//char c = 10;
	//char *pc = &c;
	//printf("%d,%d\n",&c,pc);
	//printf("%d\n",pc+1);//ָ��ļӷ�
	int a = 10;
	int *p = &a;
	printf("%d,%d\n",&a,p);
	printf("%d\n",p-1);//ָ��ļӷ�
	return 0;
}


/*
�κ����͵�ָ�� ��С����4���ֽ�  32λ
64λ  8���ֽ�
*/
int main()
{
	int a = 0;
	int *p = NULL;//  0  '\0'  NULL      '0'-->48
	printf("%d\n",sizeof(char *));//4
	printf("%d\n",sizeof(short *));//4
	printf("%d\n",sizeof(int *));
	printf("%d\n",sizeof(float *));
	printf("%d\n",sizeof(double *));
	printf("%d\n",sizeof(long *));
	return 0;
}



int main()
{
	short a = 10;
	//���ܽ��н�����--��void û�о���Ĵ�С
	//���Խ����κ����͵ĵ�ַ
	void *p = &a;
	//printf("%d\n",*p);
	return 0;
}


//�����С�˷���1  ���򷵻�0
int IsLittle()
{
	//int a = 0x12345678;
	int a = 1;//0000000000000000....01
	char *pc = (char *)&a;
	if(*pc == 1)
	{
		return 1;
	}
	return 0;
}

int main()
{
	int ret = IsLittle();
	if(ret == 1)
	{
		printf("is little\n");
	}
	else
	{
		printf("is not little\n");
	}

	//int *p = &a;
	//char c = 10; //
	//char *pc = &c;
	//printf("%d\n",*pc);
	return 0;
}


//�������ԣ�������  0  1    
//������ԣ���ĸ  ���� 
//�߼�����--�����������  C   Java
int main()
{
	int a = 10;//0000 0000 0000 1010   0x00 00 00 0a
	int *p = &a;
	int **p2 = NULL;
	printf("%d\n",*p); //��ӷ���  ������ 
	*p = 99;
	printf("%d\n",*p); 
	p2 = &p;
	//p2 = &a;
	**p2 = 999;
	printf("%d\n",*p); 
	//p  int *p;//����һ��ָ�����
	return 0;
}
#endif