
#include <stdio.h>

int main()
{
	char nombre[20];
	int edad;
	double altura;

	printf("Ingrese su nombre: ");
	scanf("%s", nombre);

	printf("Ingrese su edad: ");
	scanf("%d", &edad);

	printf("Ingrese su altura: ");
	scanf("%lf", &altura);

	printf("Ud. es %s, tiene %d anios y una altura de %lf\n"
		  , nombre
		  , edad
		  , altura);

	return 0;
}
