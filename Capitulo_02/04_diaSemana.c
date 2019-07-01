
#include <stdio.h>
#include <string.h>

int main()
{
	int nroDia;
	char dia[10];

	printf("Ingrese dia de la semana: ");
	scanf("%d", &nroDia);

	switch( nroDia )
	{
		case 1:
			strcpy(dia, "Lunes"); // asigno a dia la cadena "Lunes"
			break;
		case 2:
			strcpy(dia, "Martes"); // asigno a dia la cadena "Martes"
			break;
		case 3:
			strcpy(dia, "Miercoles");
			break;
		case 4:
			strcpy(dia, "Jueves");
			break;
		case 5:
			strcpy(dia, "Viernes");
			break;
		case 6:
			strcpy(dia, "Sabado");
			break;
		case 7:
			strcpy(dia, "Domingo");
			break;
	}

	printf("%d es %s\n", nroDia, dia);

	return 0;
}
