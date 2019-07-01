
#include <stdio.h>

int main()
{
	FILE* arch;
	char c;

	// abro el archivo
	arch = fopen("DEMO.dat", "r+b");

	// leo el primer caracter
	fread(&c, sizeof(char), 1, arch);

	// y mientras no llegue al fi nal del archivo...
	while( !feof(arch) )
	{
		// muestro el caracter leido
		printf("%c\n", c);

		// leo el siguiente caracter
		fread(&c, sizeof(char), 1, arch);
	}

	// cierro el archivo
	fclose(arch);

	return 0;
}
