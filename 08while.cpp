#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main08()
{
	int a = 0;
	int b = 0;
	while (a < 100)
	{
		a++;
		b += a;
		printf("  b= %d \n", b);
	}

	return 0;
}