
#include <stdio.h>

int main()
{
	int n, mayor;

	printf("Ingrese un valor: ");
	scanf("%d", &n);

	mayor = n;
	while( n != 0 )
	{
		if( n > mayor )
		{
			mayor = n;
		}

		printf("Ingrese el siguiente valor: ");
		scanf("%d", &n);
	}

	printf("EL mayor es: %d\n", mayor);

	return 0;
}
