
#include<stdio.h>

int siguienteNroPrimo(int* temp)
{
	*temp = *temp + 1;
	while( !esPrimo(*temp) )
	{
		*temp = *temp + 1;
	}
	return *temp;
}

int main()
{
	int n;
	printf("Ingrese cuantos primos quiere ver: ");
	scanf("%d", &n);
	int aux = 0;
	for( int i = 0; i < n; i++ )
	{
		printf("%d\n", siguienteNroPrimo(&aux));
	}
	return 0;
}
