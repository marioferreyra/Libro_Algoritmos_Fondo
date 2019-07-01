
#include <stdio.h>
#include "cadenas.h"

int main()
{
	char a[20] = { 0 };
	char b[20] = "Hola";
	char c[20] = "\0 que pasa ahora?";

	printf("a = [%s] es vacia? %d\n", a, esVacia(a));
	printf("b = [%s] es vacia? %d\n", b, esVacia(b));
	printf("c = [%s] es vacia? %d\n", c, esVacia(c));

	return 0;
}
