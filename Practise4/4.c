#define   _CRT_SECURE_NO_WARNINGS 1


#include  <stdio.h>
#include <string.h>
#include  <stdlib.h>


//ʵ��һ�����������������ַ����е�k���ַ���
//ABCD����һ���ַ��õ�BCDA
//ABCD���������ַ��õ�CDAB

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





//�ж�һ���ַ����Ƿ�Ϊ����һ���ַ�����ת֮����ַ�����
//���磺����s1 �� AABCD��s2 = BCDAA������1������s1 = abcd��s2 = ACBD������0.
//
//
//AABCD����һ���ַ��õ�ABCDA
//AABCD���������ַ��õ�BCDAA
//
//AABCD����һ���ַ��õ�DAABC

int is_left_move(char  *arr, const char *p)
{
	if (strlen(p) != strlen(arr))
	{
		printf("����\n");
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

		printf("��\n");
	}
	else
	{
		printf("����\n");
	}


	system("pause");
}


