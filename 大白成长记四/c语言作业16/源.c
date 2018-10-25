#include <stdio.h>
#include<string.h>

#include<windows.h>  
#include <assert.h>
#include<stdlib.h>  


//递归和非递归分别实现求第n个斐波那契数。

//
//int fib(int n)
//{
//	if (n <= 2)
//		return 1;
//	else
//		return  fib(n - 1) + fib(n - 2);
//}
//int fib(int n)
//{
//	
//	int a = 1;
//	int b = 1;
//	int c = 1;
//	while (n > 2)
//	{
//		c = a + b;
//		a = b;
//		b = c;
//		n--;
//	}
//	return c;
//}
//int  main()
//{
//	int  n;
//	int  ret = 0;
//	scanf_s("%d", &n);
//	
//	printf("%d", fib(n));
//
//	system("pause");
//	return 0;
//
//}
//




//编写一个函数实现n^k，使用递归实现
//int my_pow(int n, int k)
//{
//	int sum = 0;
//	if (k == 0)
//	{
//		sum = 1;
//	}
//	else
//	{
//		sum = n * my_pow(n, k - 1);
//	}
//	return sum;
//}
//int main()
//{
//	int n = 0;
//	int k = 0;
//	scanf_s("%d%d", &n, &k);
//	printf("%d\n", my_pow(n, k));
//	system("pause");
//	return 0;
//}



//递归和非递归分别实现strlen
//int my_strlen_2(const char* str_2)
//{
//	//递归实现  
//	assert(str_2 != NULL);
//	if (*str_2)
//		return 1 + my_strlen_2(str_2 + 1);
//	else
//		return 0;
//}
//
//int my_strlen_1(const char* str_1)
//{
//	//非递归实现  
//	int count = 0;
//	assert(str_1 != NULL);
//	while (*str_1)
//	{
//		count++;
//		str_1++;
//	}
//	return count;
//}
//
//int main()
//{
//	int len_1 = my_strlen_1("abcdef");
//	int len_2 = my_strlen_2("abcdef");
//	printf("len_1 = %d\n", len_1);
//
//	printf("len_2 = %d\n", len_2);
//	system("pause");
//	return 0;
//}




//递归和非递归分别实现求n的阶乘
//
//int Factorial_r(int num)
//{
//	//非递归实现  
//	int k = 1;
//	while (num > 0)
//		k *= num--;
//	return k;
//}
//
//int Factorial(int num)
//{
//	//递归实现  
//	return num > 0 ? num * Factorial(num - 1) : 1;
//}
//
//int main()
//{
//	int n = 0;
//
//	printf("请输入一个数，求他的阶乘:\n");
//	scanf_s("%d", &n);
//	printf("%d\n", Factorial(n));
//	printf("%d\n", Factorial_r(n));
//	system("pause");
//	return 0;
//}
//






//递归方式实现打印一个整数的每一位
//void print(int n)
//{
//	if (n>9)
//	{
//		print(n / 10);
//	}
//	printf("%d  ", n % 10);
//}
//
//int main()
//{
//
//	int num;
//	scanf_s("%d", &num);
//	print(num);
//	system("pause");
//	return 0;
//}




//写一个递归函数DigitSum(n)，输入一个非负整数，返回组成它的数字之和，例如，调用DigitSum(1729)，则应该返回1 + 7 + 2 + 9，它的和是19
//int digitsum(int x)
//{
//	int i;
//	if (x == 0)
//		return 0;              
//	else
//	{
//		i = x % 10;
//		x = x / 10;
//	}
//	return i + digitsum(x);              
//}
//int main()
//{
//	int  num;
//	int sum = 0;
//	scanf_s("%d", &num);
//		sum = digitsum(num);
//	printf("%d", sum);
//	system("pause");
//	return 0;
//}






//编写一个函数reverse_string(char * string)（递归实现）
//实现：将参数字符串中的字符反向排列。
//要求：不能使用C函数库中
//的字符串操作函数。
int my_strlen(const char *str) //自定义的计算字符串长度的函数
{

	int count = 0;
	while (*str)
	{
		count++;
		str++;
	}
	return count;
}

void reverse_string(char *str)
{

	char temp = 0;
	int len = my_strlen(str);
	if (len > 0)
	{
		temp = str[0];
		str[0] = str[len - 1];
		str[len - 1] = '\0';

		reverse_string(str + 1);
		str[len - 1] = temp;
	}
}
int main()
{
	char arr[] = "abcdef";
	reverse_string(arr);
	printf("%s\n", arr);
	system("pause");
	return 0;
}