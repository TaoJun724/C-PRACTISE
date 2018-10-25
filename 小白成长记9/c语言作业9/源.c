#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<stdlib.h>



//写一个宏可以将一个数字的奇数位和偶数位交换
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
