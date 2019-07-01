
#include <stdio.h>
#include "cadenas.h"

int main()
{
	char nom[15];
	// asignamos una cadena a nom
	copiarCadena(nom, "Pablo");
	// mostramos el contenido de nom
	printf("nom = %s\n", nom);
	// mostramos la longitud de la cadena literal "Pablo"
	printf("longitud de %s = %d\n", "Pablo", longitud("Pablo"));
	// mostramos la longitud de la cadena contenida en nom
	printf("longitud de %s = %d\n", nom, longitud(nom));
	return 0;
}
