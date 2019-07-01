
#include <stdio.h>
#include "funciones.h"

int main()
{
	char c = 'A';

	printf("esDigito(%c) = %d\n", c, esDigito(c));
	printf("esLetra(%c) = %d\n", c, esLetra(c));
	printf("esMayuscula(%c) = %d\n", c, esMayuscula(c));
	printf("esMinuscula(%c) = %d\n", c, esMinuscula(c));
	printf("aMinuscula(%c) = %c\n", c, aMinuscula(c));
	printf("aMayuscula(%c) = %c\n", c, aMayuscula(c));

	return 0;
}

