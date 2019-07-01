
#include <stdio.h>

int main()
{
	char cadena[] = "Pablo 1.70 40";
	char nombre[10];
	float altura;
	int edad;

	sscanf(cadena, "%s %f %d", nombre, &altura, &edad);

	printf("Nombre: [%s]\n", nombre);
	printf("Altura: [%.2f]\n", altura);
	printf("Edad: [%d]\n", edad);

	return 0;
}
