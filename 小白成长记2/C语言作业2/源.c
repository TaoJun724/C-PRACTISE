#define _CRT_SSECURE_NO_WARNING 1

#include<stdio.h>
#include<string.h>
#include<stdlib.h>

//�����������ͱ�����ֵ��������ֵ�����ݽ��н���
//int  main()
//{
//	int  a = 10;
//	int b = 90;
//	int tmp = 0;
//	tmp = a;
//	a = b;
//	b = tmp;
//	printf("%d %d", a, b);
//    system("pause");
//}


//���
//int  main()
//{
//	int a = 10;
//	int b = 20;
//	//��� ���������ƣ�λ���
//	//01010
//	//10110
//	//11100
//	a = a^b;
//	b = a^b;
//	a = a^b;
//	printf("%d %d ", a, b);
//	system("pause");
//}





// ��10�������е����ֵ
//int  main()
//{
//	int arr[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9};
//	int max = arr[0];
//	int i = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	for (i = 0; i < sz; i++)
//	{
//		if (arr[i]>max)
//			max = arr[i];
//	}
//	printf("%d\n", max);
//	system("pause");
//	return 0;
//}




//���������Ӵ�С���
//void  Swap(int *p, int *q)
//{
//	int tmp = *p;
//	*p = *q;
//	*q = tmp;
//	
//}
//int  main()//��ʵ�δ����βε�ʱ���β���ʵ�ε�һ����ʱ���������βε��޸Ĳ���ı�ʵ��
//{
//	int a = 1;
//	int b = 2;
//	int c = 6;
//	/*if (a < b)
//	{
//		int tmp = a;
//		a = b;
//		b = tmp;
//	}
//	if (a < c)
//	{
//		int tmp = a;
//		a = c;
//		c = tmp;
//	}
//	if (b < c)
//	{
//		int tmp = b;
//		b = c;
//		c = tmp;
//	}*/
//	if (a < b)
//	{
//		Swap(&a, &b);
//	}
//	if (a < c)
//	{
//		Swap(&a, &c);
//	}
//	if (b < c)
//	{
//		Swap(&b, &c);
//	}
//    printf("%d %d %d", a, b, c);
//	system("pause");
//	return 0;
//}





//�������������Լ��       շת�ദ��
int  main()
{
	int m = 24;
	int n = 18;
	while (m%n)
	{
		int tmp = m%n;
		m = n;
		n = tmp;
	}
    printf("%d\n", n);
	system("pause");
	return 0;
}


//m*n/���Լ��������С������