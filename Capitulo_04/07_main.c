
#include <stdio.h>
#include "cadenas.h"

int main()
{
	// defi no e inicializo la variable x
	char x[20] = { 0 };

	// muestro que la longitud de x es cero
	printf("x=[%s], longitud(x)=%d\n", x, longitud(x));

	// concateno la cadena literal "Hola" a x
	concatenarCadena(x, "Hola");

	// muestro el contenido de x
	printf("x=[%s], longitud(x)=%d\n", x, longitud(x));

	// concateno la cadena literal " que tal?" a x
	concatenarCadena(x, " que tal?");

	// muestro el contenido de x
	printf("x=[%s], longitud(x)=%d\n", x, longitud(x));

	return 0;
}
