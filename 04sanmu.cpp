#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main04()
{
	int a, b, c;

	scanf("%d%d%d", &a, &b, &c);
	
	int d = a > b ? (a > c ? a : c) : (b > c ? b : c);//������ֵ

	//linux������ı�����:353����Ϊ�����ų���������
	printf("%d\n", d);

	return 0;
}