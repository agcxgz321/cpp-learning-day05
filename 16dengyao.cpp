#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main()
{
	int a;

	printf("请输入三角形由几行组成：\n（注意：必须是60以内的数字）\n");
	scanf("%d", &a);

	for (int i = 1; i <= a; i++)
	{
		

		for (int k = a - i; k > 0; k--)
		{
			printf(" ");

		}
		//用三个嵌套循环来实现还是失败了！


		for (int j = 1; j <= 2 * i - 1; j++)
		{


			printf("*");
		}
		printf("\n");
	}


	return 0;
}