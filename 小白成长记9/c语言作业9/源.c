#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<stdlib.h>



//дһ������Խ�һ�����ֵ�����λ��ż��λ����
#define  SWAP_BIT(n)  ((n&0xaaaaaaaa)>>1 | (n&0x55555555)<<1)

int  main( )
{
	int ret = 0;
	int num = 10;
	ret = SWAP_BIT(num);
	printf("%d\n", ret);
	system("pause");
	return 0;
}


//
//#define MAX(a,b)  ((a)>(b)?(a):(b))
//
