
#include <stdio.h>
#include "alumnos.h"

// prototipo de una funcion que lee x consola los nuevos datos
Alumno ingresoDatosXConsola();

int main()
{
	FILE* arch = fopen("ALUMNOS.dat", "r+b");
	int n;

	printf("Ingrese numero de registro: ");
	fflush(stdout);
	scanf("%d", &n);

	// ingreso los nuevos datos por consola
	Alumno reg = ingresoDatosXConsola();

	// posiciono el identifi cador de posicion
	fseek(arch, n * sizeof(Alumno), SEEK_SET);

	// grabo el registro pisando los valores anteriores
	fwrite(&reg, sizeof(Alumno), 1, arch);
	fclose(arch);
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
