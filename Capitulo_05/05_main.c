
#include <stdlib.h>
#include <string.h>
#include <stdio.h>

char* obtenerSaludo()
{
	// cadena local
	char a[] = "Hola, Mundo";

	// longitud de la cadena que vamos a retornar
	int n = strlen(a);

	// array de n+1 caracteres generado dinamicamente
	char* r = (char*) malloc(n + 1);

	// asigna la cadena al array gestionado dinamicamente
	strcpy(r, a);
	return r;
}

int main()
{
	// invoco a la funcion que retorna una cadena
	char* s = obtenerSaludo();

	// muestro la cadena
	printf("%s\n", s);
	return 0;
}
