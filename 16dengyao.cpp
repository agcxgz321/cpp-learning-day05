#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main()
{
	int a;

	printf("�������������ɼ�����ɣ�\n��ע�⣺������60���ڵ����֣�\n");
	scanf("%d", &a);

	for (int i = 1; i <= a; i++)
	{
		

		for (int k = a - i; k > 0; k--)
		{
			printf(" ");

		}
		//������Ƕ��ѭ����ʵ�ֻ���ʧ���ˣ�


		for (int j = 1; j <= 2 * i - 1; j++)
		{


			printf("*");
		}
		printf("\n");
	}


	return 0;
}