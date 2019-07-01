
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
	char* cadenas[5]; // el array de cadenas
	char cadenaAux[10]; // una cadena auxiliar para leer

	int i;
	for( i = 0; i < 5; i++ )
	{
		printf("Ingrese una cadena: ");
		scanf("%s", cadenaAux);

		// creo una nueva cadena y asigno su direccion a cadenas[i]
		cadenas[i] = (char*) malloc(strlen(cadenaAux) + 1);

		// copio el contenido de cadenaAux a cadenas[i]
		strcpy(cadenas[i], cadenaAux);
	}

	for( i = 4; i >= 0; i-- )
	{
		printf("%s\n", cadenas[i]);
	}

	return 0;
}

