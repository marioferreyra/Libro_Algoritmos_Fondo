
#include <stdio.h>

// prototipo
void permutar(int*, int*);

int main()
{
	int a = 5, b = 10;

	permutar(&a, &b);
	printf("a=%d, b=%d\n", a, b);

	return 0;
}

void permutar(int* x, int* y)
{
	int aux = *x;
	*x = *y;
	*y = aux;
}
