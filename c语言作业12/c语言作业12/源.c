#define _CRT_SECURE_NO_WARNINGS 1
//4.25
#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<string.h>
#include<assert.h>

//
//编写函数：
//unsigned int reverse_bit(unsigned int value);
//这个函数的返回 值value的二进制位模式从左到右翻转后的值。
//
//如：
//在32位机器上25这个值包含下列各位：
//00000000000000000000000000011001
//翻转后：（2550136832）
//10011000000000000000000000000000
//程序结果返回：
//2550136832



//unsigned int reverse_bit(int num)
//{
//	int i = 0;
//	unsigned int  sum = 0;
//	for (i = 0; i < 32; i++)
//	{
//		sum += ((num >> i) & 1)*pow(2,31 - i);
//	}
//	return sum;
//}
//int main()
//{
//	int num = 25;
//	unsigned int ret = reverse_bit(num);
//	printf("%u\n", ret);
//	system("pause");
//	return 0;
//}




//不使用（a + b） / 2这种方式，求两个数的平均值
//int main()
//{
//	int a = 10;
//	int b = 20;
//	/*int average = a + (b - a) / 2;*/
//	int average = (a&b) + ((a^b) >> 1);
//	printf("%d\n", average);
//	system("pause");
//	return 0;
//}




//一组数据中只有一个数字出现了一次。其他所有数字都是成对出现的。
//请找出这个数字。（使用位运算）
//int main()
//{
//	int arr[] = { 1, 2, 3, 4, 5, 1, 2, 3, 4 };
//	int i = 0;
//	int ret = 0;
//	for (i = 0; i < sizeof(arr) / sizeof(arr[0]); i++)
//	{
//		ret ^= arr[i];
//	}
//	printf("%d\n", ret);
//	system("pause");
//	  return 0;
//}





//有一个字符数组的内容为:"student a am i", 请你将数组的内容改为"i am a student".
//	要求：
//	不能使用库函数。只能开辟有限个空间（空间个数和字符串的长度无关）。
//
//void   reverse_str(char *left, char*right)
//{
//	assert(left != NULL);
//	assert(right != NULL);
//	while (left < right)
//	{
//		char tmp = *left;
//		*left = *right;
//		*right = tmp;
//		left++;
//		right--;
//	}
//}
//void reverse(char *str)
//{
//	char *cur = str;
//	char *left = str;
//	char *right = str + strlen(str) - 1;
//	assert(str != NULL);
//	//逆序整个字符串
//	reverse_str(left, right);
//	//逆序字母
//	while (*cur)
//	{
//		char* start = cur;
//		while ((*cur != ' ') && (*cur != '\0'))
//		{
//			cur++;
//		}
//		reverse_str(start, cur - 1);
//		cur++;
//	}
//}
//int main()
//{
//	char arr[] = "student a am i";
//	reverse(arr);
//	printf("%s\n", arr);
//	system("pause");
//	return 0;
//}