#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main05()
{

	int a;
	printf("������һ��ѧ���ĳɼ�\n");
	scanf("%d", &a);

	int b;

	if (a >= 0 && a < 60)
	{
		b = 0;
	}
	else if (a >= 60 && a < 80)
	{
		b = 1;
	}
	else if (a >= 80 && a < 90)
	{
		b = 2;
	}
	else if (a >= 90 && a <= 100)
	{
		b = 3;
	}
	else
	{
		//printf("����ɼ���\n");
		b = -1;
	}

	switch (b)
	{
	case 0:
		printf("%d �ɼ�������\n", a);
		break;
	case 1:
		printf("%d �ɼ�����\n", a);
		break;
	case 2:
		printf("%d �ɼ�����\n", a);
		break;
	case 3:
		printf("%d �ɼ�����\n", a);
		break;
	default:
		printf("%d ����������Ч\n are u ok\?\n", a);
	}

	return 0;

	//int a;
	//printf("please input a number:\n");

	//scanf("%d", &a);

	//switch (a > 0)
	//{
	//case 1:
	//	printf("a��ֵ����0��Ϊ�� %d", a);
	//	break;

	//case 0:
	//	printf("a��ֵС�ڵ���0��Ϊ��%d", a);
	//	break;
	//default:
	//	printf("ERROR!\n");
	//}

}