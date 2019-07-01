
#include <stdio.h>

#define MAX(x,y) x>y?x:y
#define MIN(x,y) x<y?x:y

int main()
{
	int a, b, c;
	int mayor, medio, menor;

	printf("Ingrese tres valores: ");
	scanf("%d %d %d", &a, &b, &c);

	if( a > b && a > c )
	{
		mayor = a;
		medio = MAX(b, c);
		menor = MIN(b, c);
	}
	else
	{
		if( b > a && b > c )
		{
			mayor = b;
			medio = MAX(a, c);
			menor = MIN(a, c);
		}
		else
		{
			mayor = c;
			medio = MAX(a, b);
			menor = MIN(a, b);
		}
	}
	printf("Mayor: %d\n", mayor);
	printf("Medio: %d\n", medio);
	printf("Menor: %d\n", menor);

	return 0;
}
