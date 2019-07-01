
#include <stdio.h>
#include "contador.h"

int main()
{
	int aCont[100];
	int v;

	// inicializo el array
	inicializarContadores(aCont);

	printf("Ingrese un valor: ");
	scanf("%d", &v);

	while( v >= 0 )
	{
		aCont[v] = aCont[v] + 1;
		printf("Ingrese un valor: ");
		scanf("%d", &v);
	}

	// muestro los resultaods
	mostrarResultados(aCont);

	return 0;
}

void inicializarContadores(int a[])
{
	int i;
	for( i = 0; i < 100; i++ )
	{
		a[i] = 0;
	}
}

void mostrarResultados(int a[])
{
	int i;
	for( i = 0; i < 100; i++ )
	{
		if( a[i] > 0 )
		{
			printf("%d aparece %d veces\n", i, a[i]);
		}
	}
}
