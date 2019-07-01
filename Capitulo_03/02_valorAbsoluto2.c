#include<stdio.h>

// prototipo de la funcion
double valorAbsoluto(double);

// programa principal
int main()
{
	double v, a;
	printf("Ingrese un valor numerico: ");
	scanf("%lf", &v);

	// invoco a la funcion
	a = valorAbsoluto(v);
	printf("El valor absoluto de %lf es %lf\n", v, a);
	return 0;
}

// desarrollo de la funcion
double valorAbsoluto(double d)
{
	return d < 0 ? -d : d;
}
