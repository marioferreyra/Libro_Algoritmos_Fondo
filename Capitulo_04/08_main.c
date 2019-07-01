
#include <stdio.h>
#include "cadenas.h"

int main()
{
	char b[] = "Pablo";
	char a[] = "Juan";

	printf("%s vs. %s = %d\n", a, b, compararCadenas(a, b));

	return 0;
}
