#include<stdio.h>
#include"fechas.h"

int main()
{
	int d1, m1, a1;
	int d2, m2, a2;
	long f1, f2;

	printf("Ingrese fecha 1: ");
	scanf("%d %d %d", &d1, &m1, &a1);

	printf("Ingrese fecha 2: ");
	scanf("%d %d %d", &d2, &m2, &a2);

	f1 = unificarFecha(d1,m1,a1);
	f2 = unificarFecha(d2,m2,a2);

	if( f1 > f2 )
	{
		printf("La fecha 1 es posterior\n");
	}
	else
	{
		printf("La fecha 2 es posterior\n");
	}
	return 0;
}
