
//模拟实现printf函数，可完成下面的功能
// 
//能完成下面函数的调用。 
//print("s ccc d.\n","hello",'b','i','t'，100); 
//函数原型： 
//print(char *format, ...) 
// 


#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>

void  print_int(int n)
{

	if (n > 9)
	{
		print_int(n / 10);
	}
	putchar(n % 10 + '0');
}
void print(const char*format, ...)
{
	va_list arg;
	va_start(arg, format);

	while (*format)
	{
		switch (*format)
		{
		case 's':
		{
					char  *str = va_arg(arg, char*);
					while (*str)
					{
						putchar(*str);
						str++;
					}
		}
			break;
		case 'c':
		{
					char ch = va_arg(arg, char);
					putchar(ch);
					break;
		}
		case 'd':
		{
					int ret = va_arg(arg, int);
					print_int(ret);
					break;
		}
		default:
			putchar(*format);
			break;
		}
		format++;
	}
}
int  main()
{
	/*printf("%d%s", 10,"abcdef");*/
	print("s ccc d.\n", "hello", 'b', 'i', 't', 100);
	system("pause");
	return 0;
}