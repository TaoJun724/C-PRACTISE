//1.模拟实现strncpy
//2.模拟实现strncat
//3.模拟实现strncmp

#include<stdio.h>
#include<stdlib.h>
#include<assert.h>
char* my_strncpy(char*dest, const char*src, int n)
{
	assert(dest);
	assert(src);
	char*p = dest;
	while (n--)
	{
		*p++ = *src++;
	}
	*p = 0;
	return dest;
}
char* my_strncat(char*dest, const char*src, int n)
{
	assert(dest);
	assert(src);
	char*p = dest;
	while (*p)
	{
		p++;
	}
	while (n--)
	{
		*p++ = *src++;
	}
	*p = 0;
	return dest;
}
int my_strncmp(const char*str1, const char*str2, int n)
{
	assert(str1);
	assert(str2);
	while (n--)
	{
		if (*str1 == *str2)
		{
			str1++;
			str2++;
		}
		else
		{
			if ((*str1 - *str2)<0)
				return -1;
			else
				return 1;
		}
	}
	return 0;
}
int  main()
{

	system("pause");
}