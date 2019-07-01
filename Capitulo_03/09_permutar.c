#include<stdio.h>

void permutar(int*, int*);

int main()
{
	int a = 5, b = 10;

	printf("en main: a=%d, b=%d\n", a, b);

	permutar(&a, &b);

	printf("en main: a=%d, b=%d\n", a, b);
	return 0;
}

void permutar(int* x, int* y)
{
	int aux;
	printf("...en permutarArgumentos x=%d, y=%d\n", *x, *y);

	aux = *x;
	*x = *y;
	*y = aux;

	printf("...en permutarArgumentos x=%d, y=%d\n", *x, *y);
}
