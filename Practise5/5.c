#define   _CRT_SECUR_NO_WARNING 1

//5.16
#include<stdio.h>
#include<stdlib.h>



//1.一个数组中只有两个数字是出现一次，其他所有数字都出现了两次。
//找出这两个数字，编程实现。


//int main()
//{
//	int arr[] = { 1, 3, 8, 1, 3, 8, 4, 6 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int num = 0;
//	int pos = 0;
//	int i = 0;
//	int x = 0;
//	int y = 0;
//	for (i = 0; i < sz; i++)
//	{
//		num ^= arr[i];
//	}
//	/*printf("num=%d \n");*/
//	//找num的二进制中为1的一个位pos
//	for (i = 0; i < 32; i++)
//	{
//		if (1 == ((num >> i) & 1))
//		{
//			pos = i;
//			break;
//		}
//	}
//	for (i = 0; i < sz; i++)
//	{
//		if (((arr[i] >> pos) & 1) == 1)
//		{
//			x ^= arr[i];
//		}
//		else
//		{
//			y ^= arr[i];
//		}
//	}
//	printf("x=%d y=%d", x, y);
//	system("pause");
//	return 0;
//}





/*.喝汽水，1瓶汽水1元，2个空瓶可以换一瓶汽水，给20元，可以多少汽水。编程实现。
int main()
{
system("pause");
return 0;
}*/

int main()
{
	int money = 0;
	int total = 0;
	int empty = 0;

	scanf_s("%d", &money);
	if (money <= 0)
	{
		total = 0;
	}
	else
	{
		total = money * 2 - 1;
	}
	/*total = money;
	empty = money;
	while (empty > 1)
	{
	total += empty / 2;
	empty=empty / 2 + empty % 2;
	}*/
	printf("%d\n", total);
	system("pause");
	return 0;
}