#include<stdio.h>

int main13()
{

	int  b, c, d;
	int index = 0;

	for (int a = 100; a < 1000; a++)
	{
		d = a % 10;
		c = a / 10 % 10;//ʮλ
		b = a / 100 % 10;//��λ

		if (a == b * b * b + c * c * c + d * d * d)
		{
			index++;
			printf("��%d��ˮ�ɻ���Ϊ��%d\n", index, a);
		}
		//a++;

	} //while (a <= 1000);//��������Ҫ�ӷֺ�

	return 0;
}