
#include <stdio.h>
#include "arrays.h"

int main()
{
	int aNum[100], aCont[100];
	int len = 0;

	inicializarContadores(aCont);

	int v;
	printf("Ingrese un valor: ");
	scanf("%d", &v);

	int enc, pos;
	while( v != 0 )
	{
		pos = buscarYAgregar(aNum, &len, v, &enc);
		aCont[pos] = aCont[pos] + 1;

		printf("Ingrese un valor: ");
		scanf("%d", &v);
	}

	mostrarResultados(aNum, len, aCont);

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

void mostrarResultados(int aNum[], int len, int aCont[])
{
	int i;
	for( i = 0; i < len; i++ )
	{
		printf("%d paracece %d veces\n", aNum[i], aCont[i]);
	}
}
