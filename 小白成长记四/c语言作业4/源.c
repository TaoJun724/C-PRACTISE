#define _CRT_SECURE_NO_WARNINGS 1

//4.1.1

#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<Windows.h>
#include<assert.h>
#include<time.h>
#include<math.h>



//��ӡ����
//int  main()
//{
//	int  i = 0;
//	int  line = 0;
//	scanf("%d", &line);
//	//1.��ӡ�ϰ벿��
//	for (i = 0; i<line; i++)
//	{
//		int j = 0;
//		//��ӡһ��
//		//��ӡ�ո�
//		for (j = 0; j <line-1-i; j++)
//		{
//			printf(" ");
//		}
//		//��ӡ����
//		for (j=0;j <2*i+1; j++)
//		{
//			printf("*");
//		}
//		printf("\n");
//	}
//	//2.��ӡ�°벿��
//	for (i = 0; i < line - 1; i++)
//	{
//		//�ո�
//		int j = 0;
//		for (j=0; j<=i ; j++)
//		{
//			printf(" ");
//		}
//		//����
//		for (j = 0; j <2*(line-1-i); j++)
//		{
//			printf("*");
//		}
//		printf("\n");
//	}
//	system("pause");
//	return 0;
//}



//�����Χ�ڵ�ˮ�ɻ����������
//int  main()
//{
//	int  i = 0;
//	for (i = 1; i <= 10000; i++)
//	{
//		int  sum = 0;
//		int count = 1;
//		int tmp = i;
//		//1.ͳ��λ��eg123
//		while (tmp/10)
//		{
//			count++;
//		    tmp/= 10;
//		}
//		//2.�õ�ÿһλ�������
//		tmp = i;
//		while (tmp)
//		{
//			sum = sum + (int)pow(tmp % 10, count);
//			tmp = tmp / 10;
//		}
//		if (sum == i)
//			printf("%d ", i);
//	}
//	system("pause");
//	return 0;
//}



//Sn=a+aa+aaa+aaaa+aaaaa��ǰ5��֮��
//int  main()
//{
//	int a = 0;
//	int n = 0;
//	int i = 0;
//	int k = 0;
//	int sum = 0;
//	scanf("%d%d", &a, &n);
//	for (i = 0; i < n; i++)
//	{
//		k = k * 10 + a;
//		sum = sum + k;
//	}
//	printf("%d", sum);
//	system("pause");
//	return 0;
//}




//��д�������ӱ�׼�����ȡcԴ���룬����֤���еĻ����Ŷ���ȷ�ĳɶԳ���
int  main()
{
	int ch = 0;
	int count = 0;
	while ((ch = getchar()) != EOF)//ctrl  z
	{
		if (ch == '{')
			count++;
		else if (ch == '}'&&count == 0)
		{
			printf("��ƥ��\n");
			return 0;
		}
		else if (ch == '}'&&count != 0)
		{
			count--;
		}
	}
	if (count == 0)
	{
		printf("ƥ��\n");
	}
	else
	{
		printf("��ƥ��\n");
	}

	system("pause");
	return 0;
}