
#include <stdio.h>

int main()
{
	long f;
	int dia, mes, anio;
	int resto;

	printf("Ingrese una fecha: ");
	scanf("%ld", &f);

	anio = f / 10000;
	resto = f % 10000;
	mes = resto / 100;
	dia = resto % 100;
	printf("Dia: %d\n", dia);
	printf("Mes: %d\n", mes);
	printf("Anio: %d\n", anio);
	return 0;
}
