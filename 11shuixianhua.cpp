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

		c = a / 10 % 10;//ʮλ
		b = a / 100 % 10;//��λ
		_a = a / 1000;//ǧλ

		if (a == _a * _a * _a + b * b * b + c * c * c + d * d * d)
		{
			index++;
			printf("��%d��ˮ�ɻ���Ϊ��%d\n", index, a);
		}
		a++;

	} while (a <= 1000);//��������Ҫ�ӷֺ�

	return 0;
}