#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main07()
{
	int a;

	printf("������ѧ���ɼ�\n");

	scanf("%d", &a);

	if (a == 100)
	{
		printf("%d �ɼ�����\n", a);
		return 0;
	}

	switch(a/10)
	{
		case 9:
			printf("%d �ɼ�����\n", a);
			break;
		case 8:
			printf("%d �ɼ�����\n", a);
			break;

		case 7:
		case 6:
			printf("%d �ɼ��ϸ�\n", a);
			break;

		case 5:
		case 4:
		case 3:
		case 2:
		case 1:
		case 0:
			printf("%d �ɼ����ϸ�\n", a);
			break;
		default:
			printf("are u ok\?\n�ܲ��ܺú�����0��100�ڵ�����\?\n");
	}



	return 0;
}