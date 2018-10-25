#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

//实现一个函数，打印乘法口诀表，口诀表的行数和列数自己指定，
//输入9，输出9 * 9口诀表，输出12，输出12 * 12的乘法口诀表。
//void  printf_table(n)
//{
//	int i = 0;
//	int t = 0;
//	for (i = 1; i <= n; i++)
//	{
//		for (t = 1; t <= i; t++)
//		{
//			printf("%d*%d=%d\t", i, t, i*t);
//		}
//		printf("\n");
//	}
//}
//
//int  main()
//{
//	int  n = 0;
//	scanf("%d", &n);
//	printf_table(n);
//	system("pause");
//	return 0;
//}





//创建一个数组，
//实现函数init（）初始化数组、
//实现empty（）清空数组、
//实现reverse（）函数完成数组元素的逆置。
//要求：自己设计函数的参数，返回值。

void Init(int arr[], int sz)
{
	int i = 0;
	for (i = 0; i < sz; i++)
	{
		arr[i] = i + 1;
	}
}
void Print(int arr[], int sz)
{
	int i = 0;
	for (i = 0; i < sz; i++)
	{
		printf("%d ", arr[i]);
	}
	printf("\n");
}
void Empty(int arr[], int sz)
{
	int i = 0;
	for (i = 0; i < sz; i++)
	{
		arr[i] = 0;
	}
}
void Reverse(int arr[], int  sz)
{
	int left = 0;
	int right = sz - 1;
	while (left < right)
	{
		int tmp = arr[left];
		arr[left] = arr[right];
		arr[right] = tmp;
		left++;
		right--;
	}
}
int  main()
{
	int arr[10] = { 0 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	Init(arr, sz);
	Print(arr, sz);
	/*Empty(arr, sz);*/
	Print(arr, sz);
	Reverse(arr, sz);
	Print(arr, sz);
	system("pause");
	return 0;
}