#define _CRT_SECURE_NO_WARNINGS 1


#include<stdio.h>
#include<stdlib.h>
#include<string.h>


//��дһ�����򣬿���һֱ���ռ����ַ��������Сд�ַ��������Ӧ�Ĵ�д�ַ���������յ��Ǵ�д�ַ����������Ӧ��Сд�ַ�����������ֲ������ 
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