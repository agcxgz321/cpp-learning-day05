#include<stdio.h>

int main09()
{
	int a = 0;
	while (a <= 100)
	{
		if (a % 7 && a % 10 - 7 && a / 10 - 7)
		{
			printf(" %d ", a);
		}
		else
		{
			printf(" xx ");
		}
		a++;
	}

	return 0;
}