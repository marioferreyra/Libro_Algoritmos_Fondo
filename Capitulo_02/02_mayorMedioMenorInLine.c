
#include <stdio.h>

int main()
{
	int a, b, c;
	int mayor, medio, menor;

	printf("Ingrese tres valores: ");
	scanf("%d %d %d", &a, &b, &c);

	if( a > b && a > c )
	{
		mayor = a;
		medio = b > c ? b : c; // el mayor entre b y c
		menor = b < c ? b : c; // el menor entre b y c
	}
	else
	{
		if( b > a && b > c )
		{
			mayor = b;
			medio = a > c ? a : c; // el mayor entre a y c
			menor = a < c ? a : c; // el menor entre a y c
		}
		else
		{
			mayor = c;
			medio = a > b ? a : b; // el mayor entre a y b
			menor = a < b ? a : b; // el menor entre a y c
		}
	}

	printf("Mayor: %d\n", mayor);
	printf("Medio: %d\n", medio);
	printf("Menor: %d\n", menor);

	return 0;
}
