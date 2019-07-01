
#include <stdio.h>
#include "cadenas.h"

int main()
{
	char nom[15];
	// asigno la cadena "Pablo" a nom
	copiarCadena(nom, "Pablo");
	// muestro el contenido de nom
	printf("nom = %s\n", nom);
	return 0;
}
