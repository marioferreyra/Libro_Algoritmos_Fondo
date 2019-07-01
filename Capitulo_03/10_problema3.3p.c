#include<stdio.h>
#include "problema3.3.h"

int main()
{
	long fecha;
	int dia, mes, anio;
	int cantMarzo, cantBisiesto, cantError;
	int anioBisiesto, hayError;

	cantMarzo = 0;
	cantBisiesto = 0;
	cantError = 0;

	printf("Fecha: ");
	scanf("%d", &fecha);

	while( fecha != 0 )
	{
		dividirFecha(fecha, &dia, &mes, &anio);
		anioBisiesto = esAnioBisiesto(anio);

		if( mes == 3 )
		{
			cantMarzo = cantMarzo + 1;
		}
		if( anioBisiesto )
		{
			cantBisiesto = cantBisiesto + 1;
		}

		hayError = (dia==29) && (mes==2) && !anioBisiesto;

		if( hayError )
		{
			cantError=cantError+1;
		}

		printf("Fecha: ");
		scanf("%d", &fecha);
	}
	printf("Fechas de marzo: %d\n", cantMarzo);
	printf("Anios bisiesto: %d\n", cantBisiesto);
	printf("Fechas con error: %d\n", cantError);

	return 0;
}
