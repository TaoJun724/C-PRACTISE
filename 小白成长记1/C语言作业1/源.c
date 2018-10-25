#define  _CRT_SECURE_NO_WARRNINGS 1


#include<math.h>
#include<stdio.h>
#include<stdlib.h>


//100-200间的素数
//int  main()
//{
//	int i = 0;
//	int count = 0;
//	for (i = 101; i <= 200; i+=2)
//	{
//		int j = 0;
//		for (j = 2; j < sqrt(i); j++)
//		{
//			if (i%j == 0)
//				break;
//        }
//		if (j>sqrt(i))
//		{
//			printf("%d  ", i);
//			count++;
//		}
//      }
//	printf("\ncount=%d\n", count);
//	system("pause");
//	return 0;
//}


//输出乘法表
//int  main()
//{
//	int i = 0;
//	int j = 0;
//	int ret = 0;
//	for (i = 1; i <= 9; i++)
//	{
//		for (j = 1; j <= i; j++)
//		{
//			ret = i*j;
//			printf("%d*%d=%d \t", i, j, ret);
//	     }
//		printf("\n");
//	}
//	system("pause");
//	return 0;
//}


//判断1000到2000的闰年

//int  main()
//{
//	int i = 0;
//	int count = 0;
//	for (i = 1000; i <= 2000; i++)
//	{
//		if ((i % 4 == 0 )&& (i % 100 != 0 ) || (i %400 ==0))
//		{
//			count++;
//			printf("%d ", i);
//		}
//	}
//	printf("\ncount=%d", count);
//	system("pause");
//	return 0;
//}