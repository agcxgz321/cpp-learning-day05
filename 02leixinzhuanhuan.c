#include<stdio.h>

int main02()
{
	//char a = 'a';
	//int b = a;

	//printf("%d\n", b);//char类型的字符自动转换成int类型数据，自动转换

	//float a = 3.14f;
	//int b =(int)a;//强制转换，将a转换为int型再赋值给b
	
	//int a = 3;
	//float b = (float)a;

	int a = 10;
	int b = 3;
	
	printf("%f\n", (float)a/b);//自动转换，因为int和float占字节数一样
	//转一个a，b也跟着转换了，占字节低的数据类型，自动转换占字节数高的数据类型

	


	return 0;
}