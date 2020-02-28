#include<stdio.h>

int main18()
{
	int i = 0;
	goto root;
	printf("hello world1\n");
	printf("hello world2\n");
	printf("hello world3\n");
	printf("hello world4\n");
//root:
	printf("hello world5\n");
	printf("hello world6\n");
	printf("hello world7\n");
	printf("hello world8\n");
	printf("hello world9\n");
	

	for (; i < 10; i++)
	{
	root:
		printf("hello world5\n");
	}

	return 0;

}