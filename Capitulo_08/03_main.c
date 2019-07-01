
#include <stdio.h>

int main()
{
	FILE *arch;
	char c;

	// abro el archivo
	arch = fopen("DEMO.dat", "r+b");

	// obtengo la posicion actual
	long pos = ftell(arch);

	// leo el primer caracter
	fread(&c, sizeof(char), 1, arch);

	// y mientras no llegue al fi nal del archivo...
	while( !feof(arch) )
	{
		// muestro el caracter leido
		printf("byte numero: %ld, %c\n", pos, c);

		// obtengo la posicion actual
		pos = ftell(arch);

		// leo el siguiente caracter
		fread(&c, sizeof(char), 1, arch);
	}

	// cierro el archivo
	fclose(arch);

	return 0;
}
