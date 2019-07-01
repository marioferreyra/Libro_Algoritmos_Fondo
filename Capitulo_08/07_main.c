
#include <stdio.h>
#include "alumnos.h"


int main()
{
	Alumno a;
	FILE* arch;

	// la primer lectura la hacemos afuera del while
	leerAlumno(arch, &a);

	// iteramos mientras no sea eof
	while( !feof(arch) )
	{
		printf("%d, %s, %d\n", a.matricula, a.nombre, a.nota);

		// leemos el siguiente registro del archivo
		leerAlumno(arch, &a);
	}

	return 0;
}

void leerAlumno(FILE* arch, Alumno* reg)
{
	fread(reg, sizeof(Alumno), 1, arch);
}
