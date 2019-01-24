#define _CRT_SECURE_NO_WARNINGS 1


#include<stdio.h>
#include<stdlib.h>
#include<string.h>


//编写一个程序，可以一直接收键盘字符，如果是小写字符就输出对应的大写字符，如果接收的是大写字符，就输出对应的小写字符，如果是数字不输出。 
//4.4
int  main()
{
	int   ch = 0;

	while ((ch = getchar()) != EOF)
	{
		if (ch >= 'A'&&ch <= 'Z')
		{
			putchar(ch + ('a' - 'A'));
		}
		else  if (ch >= 'a'&&ch <= 'z')
		{
			putchar(ch - ('a' - 'A'));
		}
		else if (ch >= '0'&&ch <= '9')
		{
			;
		}
		else
		{
			putchar(ch);
		}
	}
	system("pause");
	return 0;
}