
#include <stdio.h>

int main()
{
	int i,n, esPrimo;

	printf("Ingrese un valor numerico: ");
	scanf("%d", &n);

	esPrimo = 1;
	for( i = 2; i < n && esPrimo; i++ )
	{
		if( n % i == 0 )
		{
			esPrimo = 0;
		}
	}
	if( esPrimo )
	{
		printf("%d es primo\n", n);
	}
	else
	{
		printf("%d NO es primo\n", n);
	}
	return 0;
}
