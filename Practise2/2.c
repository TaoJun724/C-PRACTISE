#define _CRT_SECURE_NO_WARNINGS 1


#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<assert.h>


//5.2

//调整数组使奇数全部都位于偶数前面。
//
//题目：
//
//输入一个整数数组，实现一个函数，来调整该数组中数字的顺序使得数组中所有的奇数位于数组的前半部分，所有偶数位于数组的后半部分。

//
//void swap_arr(int arr[], int sz)
//{
//	int left = 0;
//	int right = sz - 1;
//	int tmp = 0;
//	while (left < right)
//	{
//		while ((left<right)&&arr[left] % 2 == 1)
//		{
//			left++;
//		}
//		while ((left<right)&&arr[right] % 2 == 0)
//		{
//			right--;
//		}
//		if (left < right)
//		{
//			tmp = arr[left];
//			arr[left] = arr[right];
//			arr[right] = tmp;
//		}
//		
//	}
//}
//
//void print_arr(int arr[], int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d", arr[i]);
//	}
//}
//int   main()
//{
//	int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	swap_arr(arr, sz);
//	print_arr(arr, sz);
//    system("pause");
//}
//
//


//杨氏矩阵 
//有一个二维数组.
//数组的每行从左到右是递增的，每列从上到下是递增的.
//在这样的数组中查找一个数字是否存在。
//时间复杂度小于O(N);
//
//数组：
//1 2 3
//2 3 4
//3 4 5
//
//
//1 3 4
//2 4 5
//4 5 6

struct  Point
{
	int x;
	int y;
};

//
//
//struct Point find(int arr[3][3], int row, int col, int key)
//{
//	int x = 0;
//	int y = col-1;
//	struct Point  ret = { -1,-1 };//cuowude
//	while ((x<=2) && (y>=0))
//	{
//		if (arr[x][y] == key)
//		{
//			ret.x = x;
//			ret.y = y;
//			return ret;
//		}
//		else if (arr[x][y] > key)
//		{
//			y--;
//		}
//		else
//		{
//			x++;
//		}
//	}
//	return ret;
//}
//
//
//
//int  main()
//{
//	int arr[3][3] = { 1, 2, 3, 4, 5, 6, 7, 8, 9 };
//	struct Point ret = find(arr, 3, 3, 9);
//	if ((ret.x != -1)&&(ret.y!=-1))
//	{
//		printf("找到了:%d  %d\n",ret.x,ret.y);
//	}
//	else 
//	{
//		printf("没找到\n");
//	}
//	system("pause");
//	return 0;
//}





void find(int arr[3][3], int *px, int *py, int key)
{
	int x = 0;
	int y = *py - 1;

	while ((x <= *px) && (y >= 0))
	{
		if (arr[x][y] == key)
		{
			*px = x;
			*py = y;
			return;
		}
		else if (arr[x][y] > key)
		{
			y--;
		}
		else
		{
			x++;
		}
	}
	*px = -1;
	*py = -1;
}



int  main()
{
	int arr[3][3] = { 1, 2, 3, 4, 5, 6, 7, 8, 9 };
	int x = 3;
	int y = 3;
	find(arr, &x, &y, 8);//返回型参数
	if ((x != -1) && (y != -1))
	{
		printf("找到了:%d  %d\n", x, y);
	}
	else
	{
		printf("没找到\n");
	}
	system("pause");
	return 0;
}