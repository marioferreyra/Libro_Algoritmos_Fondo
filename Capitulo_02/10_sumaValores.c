
#include <stdio.h>

int main()
{
	int n, suma;

	printf("Ingrese un valor numerico: ");
	scanf("%d", &n);

	suma = 0;
	while( n != 0 )
	{
		suma = suma + n;

		printf("Ingrese el siguiente valor: ");
		scanf("%d", &n);
	}
	printf("La suma es: %d\n", suma);
	return 0;
}
