
#include<stdio.h>

int main()
{
	int a = 0;
	*(&a) = 10;
	printf("a=%d\n", a);
	return 0;
}
