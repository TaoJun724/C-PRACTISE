#define _CRT_SECURE_NO_WARNINGS 1
//4.25
#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<string.h>
#include<assert.h>

//
//��д������
//unsigned int reverse_bit(unsigned int value);
//��������ķ��� ֵvalue�Ķ�����λģʽ�����ҷ�ת���ֵ��
//
//�磺
//��32λ������25���ֵ�������и�λ��
//00000000000000000000000000011001
//��ת�󣺣�2550136832��
//10011000000000000000000000000000
//���������أ�
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




//��ʹ�ã�a + b�� / 2���ַ�ʽ������������ƽ��ֵ
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




//һ��������ֻ��һ�����ֳ�����һ�Ρ������������ֶ��ǳɶԳ��ֵġ�
//���ҳ�������֡���ʹ��λ���㣩
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





//��һ���ַ����������Ϊ:"student a am i", ���㽫��������ݸ�Ϊ"i am a student".
//	Ҫ��
//	����ʹ�ÿ⺯����ֻ�ܿ������޸��ռ䣨�ռ�������ַ����ĳ����޹أ���
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
//	//���������ַ���
//	reverse_str(left, right);
//	//������ĸ
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