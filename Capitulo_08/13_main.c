
#include <stdio.h>
#include <string.h>

int main(int argc, char* argv[])
{
	FILE* f1 = fopen(argv[1], "w+");
	char linea[100];

	// muestro una fl echa y luego leeo una linea por teclado
	printf("-->");
	gets(linea);

	int i = 0;
	while( strcmp(linea, "FIN") )
	{
		// grabo el numero de linea y la linea en el archivo f1
		fprintf(f1, "%d, %s\n", i++, linea);

		// muestro una fl echa y luego leeo una linea por teclado
		printf("-->");
		gets(linea);
	}

	fclose(f1);

	return 0;
}
