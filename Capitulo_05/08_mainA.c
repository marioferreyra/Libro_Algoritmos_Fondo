
#include <stdio.h>
#include "funciones.h"

int main()
{
	char* x = "Esto es una cadena";

	printf("%s\n", substring(x, 0, 4));  // imprime "esto"
	printf("%s\n", substring(x, 8, 11)); // imprime "una"

	return 0;
}
