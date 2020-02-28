#include<stdio.h>

int main12()
{
	//for (int i = 0; i < 10; i++)
	//{
	//	printf("%d\n", i);
	//}

	int i = 0;
	for (; ; )
	{
		if (!(i < 10))
		{
			break;
		}
		printf("%d\n", i);
		i++;
	}

	return 0;
}