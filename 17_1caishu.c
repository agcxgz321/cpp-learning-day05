#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<time.h>

int main17()
{
	//加入随机数种子
	srand((unsigned int)time(NULL));
	int a = rand() % 100 + 1;
	int caishu;


	for (;;)
	{
		printf("请输入你猜的数：\n");
		scanf("%d", &caishu);
		if (caishu > a)
		{
			printf("你猜的数大了\n");
		}
		else if (caishu < a)
		{
			printf("你猜的数小了\n");

		}
		else
		{
			printf("哇塞，你猜对了\n");
			break;
		}

	}



	return 0;
}