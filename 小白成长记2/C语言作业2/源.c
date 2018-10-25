#define _CRT_SSECURE_NO_WARNING 1

#include<stdio.h>
#include<string.h>
#include<stdlib.h>

//给定两个整型变量的值，将两个值得内容进行交换
//int  main()
//{
//	int  a = 10;
//	int b = 90;
//	int tmp = 0;
//	tmp = a;
//	a = b;
//	b = tmp;
//	printf("%d %d", a, b);
//    system("pause");
//}


//异或
//int  main()
//{
//	int a = 10;
//	int b = 20;
//	//异或 按（二进制）位异或
//	//01010
//	//10110
//	//11100
//	a = a^b;
//	b = a^b;
//	a = a^b;
//	printf("%d %d ", a, b);
//	system("pause");
//}





// 求10个整数中的最大值
//int  main()
//{
//	int arr[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9};
//	int max = arr[0];
//	int i = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	for (i = 0; i < sz; i++)
//	{
//		if (arr[i]>max)
//			max = arr[i];
//	}
//	printf("%d\n", max);
//	system("pause");
//	return 0;
//}




//将三个数从大到小输出
//void  Swap(int *p, int *q)
//{
//	int tmp = *p;
//	*p = *q;
//	*q = tmp;
//	
//}
//int  main()//当实参传给形参的时候，形参是实参的一份临时拷贝，对形参的修改不会改变实参
//{
//	int a = 1;
//	int b = 2;
//	int c = 6;
//	/*if (a < b)
//	{
//		int tmp = a;
//		a = b;
//		b = tmp;
//	}
//	if (a < c)
//	{
//		int tmp = a;
//		a = c;
//		c = tmp;
//	}
//	if (b < c)
//	{
//		int tmp = b;
//		b = c;
//		c = tmp;
//	}*/
//	if (a < b)
//	{
//		Swap(&a, &b);
//	}
//	if (a < c)
//	{
//		Swap(&a, &c);
//	}
//	if (b < c)
//	{
//		Swap(&b, &c);
//	}
//    printf("%d %d %d", a, b, c);
//	system("pause");
//	return 0;
//}





//求两个数的最大公约数       辗转相处法
int  main()
{
	int m = 24;
	int n = 18;
	while (m%n)
	{
		int tmp = m%n;
		m = n;
		n = tmp;
	}
    printf("%d\n", n);
	system("pause");
	return 0;
}


//m*n/最大公约数就是最小公倍数