
#include <stdio.h>
#include "xfile.h"

typedef struct Emp
{
	int idEmp;
	char nom[30];
	char dir[50];
	long fecIngreso;
} Emp;

void mostrarArchivo(XFile*);

int main()
{
	int pos;

	// abro el archivo
	XFile f = xopen("EMP.dat", "a+b", sizeof(Emp));

	// muestro todos los registros y leo la posicion a eliminar
	mostrarArchivo(&f);

	printf("Ingrese registro a eliminar: ");
	scanf("%d", &pos);

	// mientras no quiera fi nalizar...
	while( pos >= 0 )
	{
		// elimino el registro indicado
		xdelete(&f, pos);

		// muestro todos los registros (que quedan)...
		mostrarArchivo(&f);
		printf("Ingrese registro a eliminar: ");
		scanf("%d", &pos);
	}

	// cierro el archivo
	xclose(&f);
	return 0;
}

void mostrarArchivo(XFile* f)
{
	Emp reg;
	int i = 0;

	xreset(f, 0);
	xread(f, &reg);

	while( !xeof(f) )
	{
		printf("[%d] - %d, %s\n", i++, reg.idEmp, reg.nom);
		xread(f, &reg);
	}
}
