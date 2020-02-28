#include<stdio.h>

int main()
{
	int _a = 0, b = 0, c = 0, d = 0;
	int a = 0;

	int index = 0;

	do
	{
		d %= 10;
		c %= 100;
		c /= 10;
		b %= 1000;
		b /= 100;
		_a /= 1000;

		if (a == _a * _a * _a + b * b * b + c * c * c + d * d * d)
		{
			index++;
			printf("第%d个水仙花数为：%d\n", index, a);
		}
		a++;

	} while (a <= 1000);

	return 0;
}