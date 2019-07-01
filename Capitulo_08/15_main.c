
#include <stdio.h>
#include <string.h>

int main()
{
	FILE* arch = fopen("texto.txt", "r+");
	char nombre[11];
	float altura;
	int edad;
	fscanf(arch, "%s %f %d", nombre, &altura, &edad);

	while( !feof(arch) )
	{
		printf("%s, %.2f, %d\n", nombre, altura, edad);
		fscanf(arch, "%s %f %d", nombre, &altura, &edad);
	}

	fclose(arch);
	return 0;
}
