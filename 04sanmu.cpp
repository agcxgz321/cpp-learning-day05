#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main04()
{
	int a, b, c;

	scanf("%d%d%d", &a, &b, &c);
	
	int d = a > b ? (a > c ? a : c) : (b > c ? b : c);//输出大的值

	//linux中游离的标点符号:353，即为标点符号出现了问题
	printf("%d\n", d);

	return 0;
}