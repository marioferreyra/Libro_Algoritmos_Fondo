
#include <stdio.h>

int main()
{
	int n, cant, suma;
	double prom;

	printf("Ingrese un valor numerico: ");
	scanf("%d", &n);

	cant = 0;
	suma = 0;

	while( n != 0 )
	{
		suma = suma + n;
		cant = cant + 1;

		printf("Ingrese el siguiente valor: ");
		scanf("%d", &n);
	}
	prom = (double) suma / cant;

	printf("El promedio es: %lf\n", prom);

	return 0;
}
