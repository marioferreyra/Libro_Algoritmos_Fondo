
#include <stdio.h>
#include <string.h>

int main(int argc, char* argv[])
{
	FILE* f1 = fopen(argv[1], "r+");
	char linea[100];

	// leo una linea
	fgets(linea, 100, f1);

	// mientras no llegue el fi n del archivo
	while( !feof(f1) )
	{
		printf("--> %s", linea);

		// leo la siguiente linea
		fgets(linea, 100, f1);
	}
	fclose(f1);
	return 0;
}
