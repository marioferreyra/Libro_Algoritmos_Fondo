
#include <stdio.h>

int main()
{
	int v;
	int a[10];

	// leemos los datos que ingresa el usuario
	int i;
	for( i=0; i<10; i++ )
	{
		printf("Ingrese un valor numerico (%d): ", i + 1);
		scanf("%d", &v);
		a[i] = v;
	}
	// mostramos el conjunto en el orden original
	printf("Orden original: ");
	for( i = 0; i < 10; i++ )
	{
		printf("%d ", a[i]);
	}
	printf("\n");

	// mostramos el conjunto en el orden inverso
	printf("Orden inverso: ");
	for( i = 9; i >= 0; i-- )
	{
		printf("%d ", a[i]);
	}
	printf("\n");

	return 0;
}

