
#include <stdio.h>

// retorna la longitud (en bytes) de un archivo
long fileSize(FILE* f)
{
	long actual = ftell(f);
	fseek(f, 0, SEEK_END);
	long ultimo = ftell(f);
	fseek(f, actual, SEEK_SET);
	return ultimo;
}

int main()
{
	FILE *arch;
	char c;

	// abro el archivo
	arch = fopen("DEMO.dat", "r+a");
	long size = fileSize(arch);
	printf("El archivo tiene %ld bytes\n", size);
	return 0;
}

