#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<time.h>

int main17()
{
	//�������������
	srand((unsigned int)time(NULL));
	int a = rand() % 100 + 1;
	int caishu;


	for (;;)
	{
		printf("��������µ�����\n");
		scanf("%d", &caishu);
		if (caishu > a)
		{
			printf("��µ�������\n");
		}
		else if (caishu < a)
		{
			printf("��µ���С��\n");

		}
		else
		{
			printf("��������¶���\n");
			break;
		}

	}



	return 0;
}