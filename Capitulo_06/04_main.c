
#include <stdio.h>

int main()
{
	char* cadenas[5];   // el array de cadenas
	char cadenaAux[10]; // una cadena auxiliar para leer

	int i;
	for( i = 0; i < 5; i++ )
	{
		printf("Ingrese una cadena: ");
		scanf("%s", cadenaAux);
		cadenas[i] = cadenaAux; // ERROR
	}

	for( i = 4; i >= 0; i-- )
	{
		printf("%s\n", cadenas[i]);
	}

	return 0;
}
