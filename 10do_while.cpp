#include<stdio.h>

int  main10()
{
	int a = 0;
	do
	{
		a++;
		printf(" a=%d", a);
		if (a == 100)
		{
			printf("\n�������\n");
			return 0;
		}
	} while (a);

	return 0;
}