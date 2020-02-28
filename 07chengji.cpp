#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main07()
{
	int a;

	printf("请输入学生成绩\n");

	scanf("%d", &a);

	if (a == 100)
	{
		printf("%d 成绩优秀\n", a);
		return 0;
	}

	switch(a/10)
	{
		case 9:
			printf("%d 成绩优秀\n", a);
			break;
		case 8:
			printf("%d 成绩良好\n", a);
			break;

		case 7:
		case 6:
			printf("%d 成绩合格\n", a);
			break;

		case 5:
		case 4:
		case 3:
		case 2:
		case 1:
		case 0:
			printf("%d 成绩不合格\n", a);
			break;
		default:
			printf("are u ok\?\n能不能好好输入0到100内的数字\?\n");
	}



	return 0;
}