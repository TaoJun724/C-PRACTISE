#include <stdio.h>
#include<string.h>

#include<windows.h>  
#include <assert.h>
#include<stdlib.h>  


//�ݹ�ͷǵݹ�ֱ�ʵ�����n��쳲���������

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




//��дһ������ʵ��n^k��ʹ�õݹ�ʵ��
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



//�ݹ�ͷǵݹ�ֱ�ʵ��strlen
//int my_strlen_2(const char* str_2)
//{
//	//�ݹ�ʵ��  
//	assert(str_2 != NULL);
//	if (*str_2)
//		return 1 + my_strlen_2(str_2 + 1);
//	else
//		return 0;
//}
//
//int my_strlen_1(const char* str_1)
//{
//	//�ǵݹ�ʵ��  
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




//�ݹ�ͷǵݹ�ֱ�ʵ����n�Ľ׳�
//
//int Factorial_r(int num)
//{
//	//�ǵݹ�ʵ��  
//	int k = 1;
//	while (num > 0)
//		k *= num--;
//	return k;
//}
//
//int Factorial(int num)
//{
//	//�ݹ�ʵ��  
//	return num > 0 ? num * Factorial(num - 1) : 1;
//}
//
//int main()
//{
//	int n = 0;
//
//	printf("������һ�����������Ľ׳�:\n");
//	scanf_s("%d", &n);
//	printf("%d\n", Factorial(n));
//	printf("%d\n", Factorial_r(n));
//	system("pause");
//	return 0;
//}
//






//�ݹ鷽ʽʵ�ִ�ӡһ��������ÿһλ
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




//дһ���ݹ麯��DigitSum(n)������һ���Ǹ����������������������֮�ͣ����磬����DigitSum(1729)����Ӧ�÷���1 + 7 + 2 + 9�����ĺ���19
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






//��дһ������reverse_string(char * string)���ݹ�ʵ�֣�
//ʵ�֣��������ַ����е��ַ��������С�
//Ҫ�󣺲���ʹ��C��������
//���ַ�������������
int my_strlen(const char *str) //�Զ���ļ����ַ������ȵĺ���
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