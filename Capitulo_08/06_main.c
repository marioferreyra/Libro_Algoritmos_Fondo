
#include <stdio.h>
#include <string.h>
#include "alumnos.h"

int main()
{
	FILE* arch;
	Alumno a;

	// abrimos el archivo para lectura
	arch = fopen("ALUMNOS.dat", "r+b");

	// la primer leida la hacemos afuera del while
	fread(&a, sizeof(Alumno), 1, arch);

	// iteramos mientras no sea eof
	while( !feof(arch) )
	{
		printf("%d, %s, %d\n", a.matricula, a.nombre, a.nota);

		// leemos el siguiente registro del archivo
		fread(&a, sizeof(Alumno), 1, arch);
	}

	// cerramos el archivo
	fclose(arch);
	return 0;
}
