#define   _CRT_SECURE_NO_WARNINGS 1


#include  <stdio.h>
#include <string.h>
#include  <stdlib.h>


//实现一个函数，可以左旋字符串中的k个字符。
//ABCD左旋一个字符得到BCDA
//ABCD左旋两个字符得到CDAB

//left_move(char *arr, int k)
//{
//	int tmp = 0;
//	while (k--)
//	{
//		char *cur = arr;
//		tmp = *cur;
//		while (*(cur + 1) != '\0')
//		{
//			*cur = *(cur + 1);
//			*cur++;
//		}
//		*cur = tmp;
//	}
//}


// /*void reverse(char *left, char  *right)
// {
//	 assert(left != NULL);
//	 assert(right != NULL);
//	while (left<right)
//	{
//
//		
//		int tmp=*left;
//		*left = *right;
//		*right = tmp;
//		
//			left++;
//		    right--;
//	}
//}
//void left_move(char *str, int  k)
//{
//
//	
//	int len = strlen(str);
//	reverse(str,str+k-1 );
//	reverse(str+k,str+len-1 );
//	reverse(str,str+len-1 );
//}
//int  main()
//{
//	char arr[] = "abcdefg";
//	int k = 0;
//	scanf_s("%d", &k);
//	left_move(arr, k);
//	printf("%s\n", arr);
//
//	system("pause");
//	return 0;
//
//}*/





//判断一个字符串是否为另外一个字符串旋转之后的字符串。
//例如：给定s1 ＝ AABCD和s2 = BCDAA，返回1，给定s1 = abcd和s2 = ACBD，返回0.
//
//
//AABCD左旋一个字符得到ABCDA
//AABCD左旋两个字符得到BCDAA
//
//AABCD右旋一个字符得到DAABC

int is_left_move(char  *arr, const char *p)
{
	if (strlen(p) != strlen(arr))
	{
		printf("不是\n");
		return 0;
	}
	strncat(arr, arr, strlen(arr));
	if (strstr(arr, p) != NULL)
	{
		return 1;
	}
	else
	{
		return 0;
	}
}

int  main()
{
	char arr[] = "abcdef";
	char *p = "bcdefa";
	int ret = is_left_move(arr, p);
	if (ret = 1)
	{

		printf("是\n");
	}
	else
	{
		printf("不是\n");
	}


	system("pause");
}


