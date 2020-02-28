#include<stdio.h>

int main11()
{
	int a = 0;
	int _a, b, c, d;
	int index = 0;

	do
	{
		d = a % 10;
		/*c = a % 100;
		c /= 10;
		b = a % 1000;
		b /= 100;*/

		c = a / 10 % 10;//十位
		b = a / 100 % 10;//百位
		_a = a / 1000;//千位

		if (a == _a * _a * _a + b * b * b + c * c * c + d * d * d)
		{
			index++;
			printf("第%d个水仙花数为：%d\n", index, a);
		}
		a++;

	} while (a <= 1000);//就这里需要加分号

	return 0;
}