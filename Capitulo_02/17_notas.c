
#include <stdio.h>
#include <string.h>

int main()
{
	int cantPres, sumNota, maxNota;
	int matr, nota;
	char nom[11], nomMax[11];

	cantPres = 0;
	sumNota = 0;
	maxNota = 0;

	printf("Ingrese matricula, nota, nombre: ");
	scanf("%d %d %s", &matr, &nota, nom);

	while( matr != 0 )
	{
		cantPres = cantPres + 1;
		sumNota = sumNota + nota;

		if( nota > maxNota )
		{
			maxNota = nota;
			strcpy(nomMax, nom);
		}

		printf("Ingrese matricula, nota, nombre: ");
		scanf("%d %d %s", &matr, &nota, nom);
	}

	printf("Cantidad de presentaciones: %d\n", cantPres);

	double prom = (double) sumNota / cantPres;
	printf("Nota promedio: %lf\n", prom);

	printf("Alumno de mejor rendimiento %s, nota: %d\n", nomMax, maxNota);

	return 0;
}
