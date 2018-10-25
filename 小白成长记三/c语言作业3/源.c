#define _CRT_SECURE_NO_WARNING 1


#include<stdio.h>
#include<string.h>
#include<stdlib.h>

//
//将数组交换数组一样大
//int  main()
//{
//	int arr1[] = { 1, 2, 3, 4, 5 };
//	int arr2[] = { 6, 7, 8, 9, 0 };
//	int   sz = sizeof(arr1) / sizeof(arr1[0]);
//	int i = 0;
//    for ( i = 0;i<sz; i++)
//	{
//		    int tmp = arr1[i];
//			arr1[i] = arr2[i];
//			arr2[i] = tmp;
//     }
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr1[i]);
//	}
//	printf("\n");
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr2[i]);
//	}
//	system("pause");
//	return 0;
//}


//计算1/1-1/2+1/31/4+1/5.。。。。。。+1/99-1/100
int  main()
{
	int i = 0;
	double sum = 0.0;
	int f = 1;

	for (i = 1; i < 100; i++)
	{
		sum = sum + f*1.0/ i;
		f = -f;
     }
	printf("%lf\n", sum);
	system("pause");
	return 0;
}





//1-100所有的9的次数
//int main()
//{ 
//	int i = 0;
//	int count = 0;
//	for (i = 0; i < 100; i++)
//	{
//		if (i % 10 ==  9)
//			count++;
//		if (i / 10 == 9)
//			count++;
//     }
//    printf("%d\n", count);
//	system("pause");
//	return 0;
//}

