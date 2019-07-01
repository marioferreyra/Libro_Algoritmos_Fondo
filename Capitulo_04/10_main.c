
#include <stdio.h>

int main()
{
	char nom[] = "Pablo";
	int edad = 39;
	double altura = 1.70;
	char salida[50];

	sprintf(salida, "Mi nombre es %s, tengo %d y mido %lf", nom, edad, altura);

	printf("%s\n", salida);

	return 0;
}
