#include<stdio.h>

int main13()
{

	int  b, c, d;
	int index = 0;

	for (int a = 100; a < 1000; a++)
	{
		d = a % 10;
		c = a / 10 % 10;//十位
		b = a / 100 % 10;//百位

		if (a == b * b * b + c * c * c + d * d * d)
		{
			index++;
			printf("第%d个水仙花数为：%d\n", index, a);
		}
		//a++;

	} //while (a <= 1000);//就这里需要加分号

	return 0;
}