
#include <stdio.h>

int main()
{
	int n, menor;
	int posRel, posRelMenor;

	printf("Ingrese un valor: ", n);
	scanf("%d", &n);

	menor = n;
	posRel = 1;
	while( n != 0 )
	{
		if( n < menor )
		{
			menor = n;
			posRelMenor = posRel;
		}

		posRel = posRel + 1;

		printf("Ingrese un valor: ", n);
		scanf("%d", &n);
	}

	printf("Menor valor: %d, posicion relativa: %d\n", menor, posRelMenor);
	return 0;
}

