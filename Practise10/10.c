#define _CRT_SECURE_NO_WARNINGS 1


#include<stdio.h>
#include<stdlib.h>

//4.4




//1.дһ���������ز����������� 1 �ĸ���
//���磺 15 0000 1111 4 �� 1
//����ԭ�ͣ�
//int count_one_bits(unsigned int value)
//{
//	// ���� 1��λ�� 
//}


//
//int  main()//���ܴ�����
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
//int  main()//��λ��
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



int count_one_bit(unsigned int  n)//�޷�����
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





//2.��ȡһ�������������������е�ż��λ������λ���ֱ�������������С� 
//int main()
//{
//	int num = 43690;
//	int i = 0;
//	for (i = 31; i >= 1; i -= 2)//ż��λ
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






//3. ���һ��������ÿһλ��
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





//4.���ʵ�֣�
//����int��32λ������m��n�Ķ����Ʊ���У��ж��ٸ�λ(bit)��ͬ��
//�������� :
//1999 2299
//������� : 7
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
