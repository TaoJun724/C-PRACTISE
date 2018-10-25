#define _CRT_SECURE_NO_WARNINGS 1

//4.1.1

#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<Windows.h>
#include<assert.h>
#include<time.h>
#include<math.h>



//打印菱形
//int  main()
//{
//	int  i = 0;
//	int  line = 0;
//	scanf("%d", &line);
//	//1.打印上半部分
//	for (i = 0; i<line; i++)
//	{
//		int j = 0;
//		//打印一行
//		//打印空格
//		for (j = 0; j <line-1-i; j++)
//		{
//			printf(" ");
//		}
//		//打印星星
//		for (j=0;j <2*i+1; j++)
//		{
//			printf("*");
//		}
//		printf("\n");
//	}
//	//2.打印下半部分
//	for (i = 0; i < line - 1; i++)
//	{
//		//空格
//		int j = 0;
//		for (j=0; j<=i ; j++)
//		{
//			printf(" ");
//		}
//		//星星
//		for (j = 0; j <2*(line-1-i); j++)
//		{
//			printf("*");
//		}
//		printf("\n");
//	}
//	system("pause");
//	return 0;
//}



//求出范围内的水仙花数，并输出
//int  main()
//{
//	int  i = 0;
//	for (i = 1; i <= 10000; i++)
//	{
//		int  sum = 0;
//		int count = 1;
//		int tmp = i;
//		//1.统计位数eg123
//		while (tmp/10)
//		{
//			count++;
//		    tmp/= 10;
//		}
//		//2.得到每一位，计算和
//		tmp = i;
//		while (tmp)
//		{
//			sum = sum + (int)pow(tmp % 10, count);
//			tmp = tmp / 10;
//		}
//		if (sum == i)
//			printf("%d ", i);
//	}
//	system("pause");
//	return 0;
//}



//Sn=a+aa+aaa+aaaa+aaaaa的前5项之和
//int  main()
//{
//	int a = 0;
//	int n = 0;
//	int i = 0;
//	int k = 0;
//	int sum = 0;
//	scanf("%d%d", &a, &n);
//	for (i = 0; i < n; i++)
//	{
//		k = k * 10 + a;
//		sum = sum + k;
//	}
//	printf("%d", sum);
//	system("pause");
//	return 0;
//}




//编写程序，它从标准输入读取c源代码，并验证所有的花括号都正确的成对出现
int  main()
{
	int ch = 0;
	int count = 0;
	while ((ch = getchar()) != EOF)//ctrl  z
	{
		if (ch == '{')
			count++;
		else if (ch == '}'&&count == 0)
		{
			printf("不匹配\n");
			return 0;
		}
		else if (ch == '}'&&count != 0)
		{
			count--;
		}
	}
	if (count == 0)
	{
		printf("匹配\n");
	}
	else
	{
		printf("不匹配\n");
	}

	system("pause");
	return 0;
}