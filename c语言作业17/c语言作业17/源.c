#define   _CRT_SECUR_NO_WARNING 1

//5.16
#include<stdio.h>
#include<stdlib.h>



//1.һ��������ֻ�����������ǳ���һ�Σ������������ֶ����������Ρ�
//�ҳ����������֣����ʵ�֡�


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
//	//��num�Ķ�������Ϊ1��һ��λpos
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





/*.����ˮ��1ƿ��ˮ1Ԫ��2����ƿ���Ի�һƿ��ˮ����20Ԫ�����Զ�����ˮ�����ʵ�֡�
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