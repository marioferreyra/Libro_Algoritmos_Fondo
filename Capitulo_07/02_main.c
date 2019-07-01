
#include <stdio.h>

int main()
{
	// variables para lectura de datos
	long nroFactura;
	int dia;
	double importe;
	char codCliente[5];

	// array de acumuladores
	double acumDia[31];

	// inicializo el array
	inicializarArray(acumDia);

	// leo la primer fi la de la tabla
	scanf("%ld %d %lf %s", &nroFactura, &dia, &importe, codCliente);
	while( nroFactura > 0 )
	{
		// acumulo el importe facturado en el acumulador correspondiente
		acumDia[dia - 1] = acumDia[dia - 1] + importe;
		// leo la siguiente fi la
		scanf("%ld %d %lf %s", &nroFactura, &dia, &importe, codCliente);
	}

	// muestro los totales facturados por cada dia
	mostrarTotales(acumDia);

	// determino y muestro el dia de mayor facturacion
	diaMayorFacturacion(acumDia);

	return 0;
}

// inicializa el array asignando 0 a cada uno de sus elementos
void inicializarArray(double arr[])
{
	int i;
	for( i = 0; i < 31; i++ )
	{
		arr[i] = 0;
	}
}

// muestra los totales facturados por dia
void mostrarTotales(double arr[])
{
	int dia;
	printf("Totales facturados (dia, monto)\n");

	int i;
	for( i = 0; i < 31; i++ )
	{
		if( arr[i] > 0 )
		{
			dia = i + 1;
			printf("%d, $%lf\n", dia, arr[i]);
		}
	}
}

// obtiene el dia de mayor facturacion y lo muestra
void diaMayorFacturacion(double arr[])
{
	double max = 0;
	int dia;

	int i;
	for( i = 0; i < 31; i++ )
	{
		if( arr[i] > max )
		{
			max = arr[i];
			dia = i + 1;
		}
	}
	printf("Dia de mayor facturacion: %d, $%lf\n", dia, max);
}

