#include<stdio.h>

int main()
{

	int a = 0;

	int* p;

	p = &a;

	*p = 12;

	printf("a=%d\n", a);
	return 0;
}
