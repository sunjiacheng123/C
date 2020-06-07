#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
void main_munu()
{
	char a[4][20] = { "砂锅", "凉菜", "粥", "饮料" };
	int i;
	printf("%s/n", a[0]);
	for (i = 1; i <= 4; i++)
	{
		printf("/t%d,%s/n", i, a[i]);
	}
	printf("/t0,点餐结束");
}
void munu_shaguo()//砂锅打印
{
	int i;
	char a[3][20] = { "砂锅麻食", "砂锅方面", "砂锅粉带" };
	printf("请选择正确的菜品/n");
	for (i = 1; i <= 3; i++)
	{
		printf("/t/t%d,%s/n", i + 1, a[i]);
	}
	printf("/t/t0,返回上级菜单/n");
}
void menu_liangcai()//凉菜打印
{
	char a[3][20] = { "凉拌黄瓜", "莲菜", "素拼" };
	//定义字符数组，存放菜名   
	printf("请具体选择菜品：\n");
	for (int i = 0; i < 3; i++)
	{
		printf("\t\t%d.%s\n", i + 1, a[i]);
	}
	printf("\t\t0.返回上层菜单\n");
}
void menu_zhou()//粥打印
{
	char a[3][20] = { "鸡蛋", "紫菜", "白菜" };
	//定义字符数组，存放菜名   
	printf("请具体选择菜品：\n");
	for (int i = 0; i < 3; i++)
	{
		printf("\t\t%d.%s\n", i + 1, a[i]);
	}
	printf("\t\t0.返回上层菜单\n");
}
void menu_yinliao()//饮料打印
{
	char a[3][20] = { "酸梅汤", "果啤", "九度" };
	//定义字符数组，存放菜名   
	printf("请具体选择菜品：\n");
	for (int i = 0; i < 3; i++)
	{
		printf("\t\t%d.%s\n", i + 1, a[i]);
	}
	printf("\t\t0.返回上层菜单\n");
}
int main(int argc, const char * argv[])
{
	printf("***** 老康擀面皮*****\n");
	printf(" ***** 欢迎您点餐 *****\n");
	int M;//定义用户选择的分类代号为M；  
	int n;//定义用户输入子菜单下的菜品代号为n；  
	int x[5][3] = { 0 };//定义每类菜品被点数量    
	int price1[5][3] = { 0 };//每种菜品的价格总价   
	int price[5][3] = { { 12, 15, 13 }, { 25, 20, 30 }, { 5, 5, 10 } };//定义每样菜品单价  
	int total = 0;//定义所有菜品总价 初始化为0；   
	char name[5][3][20] = { { "砂锅麻食", "砂锅方面", "砂锅粉带" }, { "凉拌黄瓜", "莲菜", "素拼" }, { "鸡蛋", "紫菜", "白菜" }, { "酸梅汤", "果啤", "九度" } };
	while (1)
	{
		main_munu();
		scanf("%d", &M);//接收用户输入的菜品分类代号
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
					   //如果输入为0，跳出循环（程序中表现为：跳出本菜单下的菜品选择）；
					   break;
				   }
				   //统计 每样菜品总价格 与被点次数
				   price1[0][n - 1] += price[0][n - 1];
				   x[0][n - 1] ++;
			   }
	}
		if (n == 0)break;//如果输入为0，结束选菜;
	case 2:{
			   menu_liangcai();
			   while (1) {
				   scanf("%d", &n);
				   if (n == 0)
				   {
					   //如果输入为0，跳出循环（程序中表现为：跳出本菜单下的菜品选择）；
					   break;
				   }
				   price1[1][n - 1] += price[1][n - 1];
				   x[1][n - 1]++;
				   if (n == 0)break;//如果输入为0，结束选菜；
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
					  //如果输入为0，跳出循环（程序中表现为：跳出本菜单下的菜品选择）；
					  break;
				  }
				  price1[2][n - 1] += price[2][n - 1];
				  x[2][n - 1]++;
			  }
	}
		if (n == 0)break;//如果输入为0，结束选菜；
	case 4:
	{
			  menu_yinliao();
			  while (1) {
				  scanf("%d", &n);
				  if (n == 0) {
					  //如果输入为0，跳出循环（程序中表现为：跳出本菜单下的菜品选择）；
					  break;
				  }
				  price1[3][n - 1] += price[3][n - 1];
				  x[3][n - 1]++;
			  }
	}
		if (n == 0)break;//如果输入为0，结束选菜；

		//打印相关信息			
		printf("菜名\t\t\t单价（元）\t数量\t总价格（元）\n-----------------------------------\n");
		for (int i = 0; i < 5; i++)
		{
			for (int j = 0; j < 3; j++)
			{
				if (price1[i][j] != 0)
				{//用价格判断顾客是否选择 确认打印
					printf("%s\t\t%3d\t\t%3d\t%3d\n", name[i][j], price[i][j], x[i][j], price1[i][j]);
					total += price1[i][j];//计算总价格
				}
			}
		}

		printf("总价格：\t\t\t\t\t%3d\n", total);
		printf("祝您用餐愉快，期待您的下次光临！\n");
		return 0;
	}
}
