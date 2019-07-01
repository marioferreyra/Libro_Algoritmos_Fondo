
#include <stdio.h>
#include <string.h>
#include "alumnos.h"

Alumno crearAlumno(int, char[], int);

int main()
{
	// abro el archivo
	FILE* arch = fopen("ALUMNOS.dat", "w+b");
	Alumno a;

	// grabo un alumno
	a = crearAlumno(10, "Pablo", 7);
	fwrite(&a, sizeof(Alumno), 1, arch);

	// grabo un alumno
	a = crearAlumno(20, "Juan", 5);
	fwrite(&a, sizeof(Alumno), 1, arch);

	// grabo un alumno
	a = crearAlumno(30, "Pedro", 8);
	fwrite(&a, sizeof(Alumno), 1, arch);

	// cierro el archivo
	fclose(arch);
	return 0;
}

Alumno crearAlumno(int matr, char nom[], int nota)
{
	Alumno x;
	x.matricula = matr;
	strcpy(x.nombre, nom);
	x.nota = nota;
	return x;
}

