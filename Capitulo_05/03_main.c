
#include <stdio.h>
#include "funciones.h"

int main()
{
	char a[] = "Esta cadena";
	char b[] = "na";

	printf("[%s] es sufijo de [%s]? %d\n",b,a,esSufijo(a,b));

	return 0;
}
