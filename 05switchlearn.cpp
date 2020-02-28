#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main05()
{

	int a;
	printf("请输入一个学生的成绩\n");
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
		//printf("输入成绩无\n");
		b = -1;
	}

	switch (b)
	{
	case 0:
		printf("%d 成绩不及格\n", a);
		break;
	case 1:
		printf("%d 成绩及格\n", a);
		break;
	case 2:
		printf("%d 成绩良好\n", a);
		break;
	case 3:
		printf("%d 成绩优秀\n", a);
		break;
	default:
		printf("%d 输入数据无效\n are u ok\?\n", a);
	}

	return 0;

	//int a;
	//printf("please input a number:\n");

	//scanf("%d", &a);

	//switch (a > 0)
	//{
	//case 1:
	//	printf("a的值大于0，为： %d", a);
	//	break;

	//case 0:
	//	printf("a的值小于等于0，为：%d", a);
	//	break;
	//default:
	//	printf("ERROR!\n");
	//}

}