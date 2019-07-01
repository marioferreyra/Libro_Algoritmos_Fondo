
#include <stdio.h>
#include "funciones.h"

int main()
{
	double v, a;
	printf("Ingrese un valor numerico: ");
	scanf("%lf", &v);

	a = valorAbsoluto(v);

	printf("El valor absoluto de %lf es %lf\n", v, a);
	return 0;
}
