
#include <stdio.h>
#include "funciones.h"

int main()
{
	char a[] = "Esta cadena";
	char b[] = "Es";

	printf("[%s] es prefijo de [%s]? %d\n",b,a,esPrefijo(a,b));

	return 0;
}
