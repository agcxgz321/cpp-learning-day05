#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main06()
{
	int a, b, c, d;
	char e;

	scanf("%d%d%d", &a, &b, &c);

	if (a > b)
	{
		d = a;
		e = 'a';
	}
	else
	{
		d = b;
		e = 'b';
	}
	
	if (d > c)
	{
		//printf("%d\n", d);
		printf("Ӧ�ó�%cС�����أ�%d\n", e, d);
	}
	else
	{
		printf("Ӧ�ó�cС�����أ�%d\n", c);
	}

	return 0;
}