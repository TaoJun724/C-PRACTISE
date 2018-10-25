#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

//ʵ��һ����������ӡ�˷��ھ����ھ���������������Լ�ָ����
//����9�����9 * 9�ھ������12�����12 * 12�ĳ˷��ھ���
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





//����һ�����飬
//ʵ�ֺ���init������ʼ�����顢
//ʵ��empty����������顢
//ʵ��reverse���������������Ԫ�ص����á�
//Ҫ���Լ���ƺ����Ĳ���������ֵ��

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