
#include <stdio.h>
#include "alumnos.h"

// prototipo de la funcion de ingreso de datos
Alumno ingresoDatosXConsola();

int main()
{
	FILE* arch = fopen("ALUMNOS.dat", "r+b");

	// ingreso los da tos por consola
	Alumno reg = ingresoDatosXConsola();

	// posiciono el puntero al fi nal del archivo
	fseek(arch, 0, SEEK_END);

	// grabo el nuevo registro
	fwrite(&reg, sizeof(Alumno), 1, arch);
	fclose(arch);

	return 0;
}

Alumno ingresoDatosXConsola()
{
	int matricula, nota;
	char nombre[20];

	printf("Ingrese nuevo matricula: ");
	scanf("%d", &matricula);

	printf("Ingrese nuevo nombre: ");
	scanf("%s", nombre);

	printf("Ingrese nueva nota: ");
	scanf("%d", &nota);

	Alumno a;
	a.matricula = matricula;
	strcpy(a.nombre, nombre);
	a.nota = nota;

	return a;
}
