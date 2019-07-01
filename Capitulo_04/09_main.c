
#include <stdio.h>
#include "cadenas.h"

int main()
{
	char s[] = "12345";

	// asigno a n el valor numerico de s
	int n = cadenaAEntero(s);

	printf("Cadena = [%s]\n", s);
	printf("Numero = [%d]\n", n);

	return 0;
}
