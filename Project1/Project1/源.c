#define _CRT_SECURE_NO_WARNINGS  1






#include <unistd.h>
#include<stdio.h>
#include<string.h>
#include<stdlib.h>

#define NONE                "\033[m"   
#define RED                 "\033[0;32;31m"   
#define GREEN             "\033[0;32;32m"   
#define BLUE                     "\033[0;32;34m"   
#define CYAN                     "\033[0;36m"   
#define YELLOW                 "\033[1;33m"   
#define PURPLE                   "\033[0;35m"  


void menu()
{
	printf("************************��������ɫ******************************\n");
	printf("************************ 0. ��**********************************\n");
	printf("************************ 1. ��**********************************\n");
	printf("************************ 2. ��**********************************\n");
	printf("************************ 3. ��**********************************\n");
	printf("************************ 4. ����********************************\n");
	printf("************************ 5. ��**********************************\n");
	printf("************************ 6. ��**********************************\n");
	printf("****************************************************************\n");
}
int main()
{
	menu();
	int i = 0;
	char bar[102] = "\0";
	memset(bar, 0, sizeof(bar));
	const char *lable = "|/-\\";
	int color = 0;
	scanf("%d", &color);
	switch (color)
	{
	case 0:
		printf(NONE);
		break;
	case 1:
		printf(RED);
		break;
	case 2:
		printf(GREEN);
		break;
	case 3:
		printf(BLUE);
		break;
	case 4:
		printf(CYAN);
		break;
	case 5:
		printf(YELLOW);
		break;
	case 6:
		printf(PURPLE);
		break;
	default:
		break;
	}
	while (i<=100)
	{
		printf("[%-100s][%d%%][%c]\r", bar, i, lable[i % 4]);
		fflush(stdout);
		bar[i++] = '#';
		usleep(100000);
	}
	printf("\n");
	system("pause");
	return 0;
}

