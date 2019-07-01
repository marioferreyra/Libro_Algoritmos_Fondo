
#include <stdio.h>

int main()
{
	int i, n, esPrimo;
	int num, cont;

	printf("Cuantos primos quiere ver? ");
	scanf("%d", &n);

	num = 1;
	cont = 0;
	while( cont < n )
	{
		esPrimo = 1;
		for( i = 2; i < num && esPrimo; i++ )
		{
			if( num % i == 0 )
			{
				esPrimo = 0;
			}
		}
		if( esPrimo )
		{
			printf("%d\n", num);
			cont = cont + 1;
		}

		num = num + 1;
	}
	return 0;
}

