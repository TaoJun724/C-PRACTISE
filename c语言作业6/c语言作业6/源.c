#define _CRT_SECURE_NO_WARNINGS 1


#include<stdio.h>
#include<stdlib.h>

//4.4




//1.写一个函数返回参数二进制中 1 的个数
//比如： 15 0000 1111 4 个 1
//程序原型：
//int count_one_bits(unsigned int value)
//{
//	// 返回 1的位数 
//}


//
//int  main()//不能处理负数
//{
//	int num = 15;
//	int count = 0;
//	while (num)
//	{
//		count++;
//		num /= 2;
//	}
//	printf("%d\n", count);
//
//	system("pause");
//	return 0;
//}

//
//int  main()//按位与
//{
//	int num = -1;
//	int count = 0;
//	int i = 0;
//	for (i = 0; i < 32; i++)
//	{
//		if ((num >> 1) & 1 == 1)
//		{
//			count++;
//		}
//	}
//	printf("%d\n", count);
//	system("pause");
//	return 0;
//}


//int main()
//{
//	int num = -1;
//	int count = 0;
//	while (num)
//	{
//		num = num&(num - 1);
//		count++;
//	}
//	printf("%d\n", count);
//	system("pause");
//	return 0;
//}



int count_one_bit(unsigned int  n)//无符号数
{
	int count = 0;
		while (n)
		{
			if (n % 2 == 1)
				count++;
			n = n / 2;
		}
		return count;
}

int main()
{
	int num = -1;
	int ret = count_one_bit(num);
	printf("%d\n", ret);
	system("pause");

}





//2.获取一个数二进制序列中所有的偶数位和奇数位，分别输出二进制序列。 
//int main()
//{
//	int num = 43690;
//	int i = 0;
//	for (i = 31; i >= 1; i -= 2)//偶数位
//	{
//		printf("%d ", (num >> i) & 1);
//	}
//	printf("\n");
//	for (i = 30; i >= 0; i -= 2)
//	{
//		printf("%d ", (num >> i) & 1);
//	}
//	system("pause");
//	return 0;
//}






//3. 输出一个整数的每一位。
//void  printf_num(n)
//{
//	if (n != 0)
//	{
//		if (n < 0)
//		{
//			n = -n;
//		}
//		printf("%d ", n % 10);
//		printf_num(n / 10);
//	}
//}
//
//
//int  main()
//{
//	int num = 0;
//	int ret = 0;
//	scanf("%d", &num);
//	printf_num(num);
//	system("pause");
//	return 0;
//}





//4.编程实现：
//两个int（32位）整数m和n的二进制表达中，有多少个位(bit)不同？
//输入例子 :
//1999 2299
//输出例子 : 7
//int main()
//{
//	int n = 1999;
//	int m = 2299;
//	int tmp = n^m;
//	int count = 0;
//	while (tmp)
//	{
//		tmp = tmp&(tmp - 1);
//		count++;
//	}
//	printf("%d\n", count);
//	system("pause");
//	return 0;
//}
