#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
void main_munu()
{
	char a[4][20] = { "ɰ��", "����", "��", "����" };
	int i;
	printf("%s/n", a[0]);
	for (i = 1; i <= 4; i++)
	{
		printf("/t%d,%s/n", i, a[i]);
	}
	printf("/t0,��ͽ���");
}
void munu_shaguo()//ɰ����ӡ
{
	int i;
	char a[3][20] = { "ɰ����ʳ", "ɰ������", "ɰ���۴�" };
	printf("��ѡ����ȷ�Ĳ�Ʒ/n");
	for (i = 1; i <= 3; i++)
	{
		printf("/t/t%d,%s/n", i + 1, a[i]);
	}
	printf("/t/t0,�����ϼ��˵�/n");
}
void menu_liangcai()//���˴�ӡ
{
	char a[3][20] = { "����ƹ�", "����", "��ƴ" };
	//�����ַ����飬��Ų���   
	printf("�����ѡ���Ʒ��\n");
	for (int i = 0; i < 3; i++)
	{
		printf("\t\t%d.%s\n", i + 1, a[i]);
	}
	printf("\t\t0.�����ϲ�˵�\n");
}
void menu_zhou()//���ӡ
{
	char a[3][20] = { "����", "�ϲ�", "�ײ�" };
	//�����ַ����飬��Ų���   
	printf("�����ѡ���Ʒ��\n");
	for (int i = 0; i < 3; i++)
	{
		printf("\t\t%d.%s\n", i + 1, a[i]);
	}
	printf("\t\t0.�����ϲ�˵�\n");
}
void menu_yinliao()//���ϴ�ӡ
{
	char a[3][20] = { "��÷��", "��ơ", "�Ŷ�" };
	//�����ַ����飬��Ų���   
	printf("�����ѡ���Ʒ��\n");
	for (int i = 0; i < 3; i++)
	{
		printf("\t\t%d.%s\n", i + 1, a[i]);
	}
	printf("\t\t0.�����ϲ�˵�\n");
}
int main(int argc, const char * argv[])
{
	printf("***** �Ͽ�ߦ��Ƥ*****\n");
	printf(" ***** ��ӭ����� *****\n");
	int M;//�����û�ѡ��ķ������ΪM��  
	int n;//�����û������Ӳ˵��µĲ�Ʒ����Ϊn��  
	int x[5][3] = { 0 };//����ÿ���Ʒ��������    
	int price1[5][3] = { 0 };//ÿ�ֲ�Ʒ�ļ۸��ܼ�   
	int price[5][3] = { { 12, 15, 13 }, { 25, 20, 30 }, { 5, 5, 10 } };//����ÿ����Ʒ����  
	int total = 0;//�������в�Ʒ�ܼ� ��ʼ��Ϊ0��   
	char name[5][3][20] = { { "ɰ����ʳ", "ɰ������", "ɰ���۴�" }, { "����ƹ�", "����", "��ƴ" }, { "����", "�ϲ�", "�ײ�" }, { "��÷��", "��ơ", "�Ŷ�" } };
	while (1)
	{
		main_munu();
		scanf("%d", &M);//�����û�����Ĳ�Ʒ�������
		if (M == 0)
		{
			break;
		}
	}
	switch (M)
	{
	case 1:{
			   munu_shaguo();
			   while (1)
			   {
				   scanf("%d", &n);

				   if (n == 0)
				   {
					   //�������Ϊ0������ѭ���������б���Ϊ���������˵��µĲ�Ʒѡ�񣩣�
					   break;
				   }
				   //ͳ�� ÿ����Ʒ�ܼ۸� �뱻�����
				   price1[0][n - 1] += price[0][n - 1];
				   x[0][n - 1] ++;
			   }
	}
		if (n == 0)break;//�������Ϊ0������ѡ��;
	case 2:{
			   menu_liangcai();
			   while (1) {
				   scanf("%d", &n);
				   if (n == 0)
				   {
					   //�������Ϊ0������ѭ���������б���Ϊ���������˵��µĲ�Ʒѡ�񣩣�
					   break;
				   }
				   price1[1][n - 1] += price[1][n - 1];
				   x[1][n - 1]++;
				   if (n == 0)break;//�������Ϊ0������ѡ�ˣ�
			   }
	}
	case 3:
	{
			  menu_zhou();
			  while (1)
			  {
				  scanf("%d", &n);
				  if (n == 0)
				  {
					  //�������Ϊ0������ѭ���������б���Ϊ���������˵��µĲ�Ʒѡ�񣩣�
					  break;
				  }
				  price1[2][n - 1] += price[2][n - 1];
				  x[2][n - 1]++;
			  }
	}
		if (n == 0)break;//�������Ϊ0������ѡ�ˣ�
	case 4:
	{
			  menu_yinliao();
			  while (1) {
				  scanf("%d", &n);
				  if (n == 0) {
					  //�������Ϊ0������ѭ���������б���Ϊ���������˵��µĲ�Ʒѡ�񣩣�
					  break;
				  }
				  price1[3][n - 1] += price[3][n - 1];
				  x[3][n - 1]++;
			  }
	}
		if (n == 0)break;//�������Ϊ0������ѡ�ˣ�

		//��ӡ�����Ϣ			
		printf("����\t\t\t���ۣ�Ԫ��\t����\t�ܼ۸�Ԫ��\n-----------------------------------\n");
		for (int i = 0; i < 5; i++)
		{
			for (int j = 0; j < 3; j++)
			{
				if (price1[i][j] != 0)
				{//�ü۸��жϹ˿��Ƿ�ѡ�� ȷ�ϴ�ӡ
					printf("%s\t\t%3d\t\t%3d\t%3d\n", name[i][j], price[i][j], x[i][j], price1[i][j]);
					total += price1[i][j];//�����ܼ۸�
				}
			}
		}

		printf("�ܼ۸�\t\t\t\t\t%3d\n", total);
		printf("ף���ò���죬�ڴ������´ι��٣�\n");
		return 0;
	}
}
