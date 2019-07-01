
#include <stdio.h>
#include <string.h>
#include "funciones.h"

int main()
{
	char s[50];
	char *a;
	char *b;

	strcpy(s, "Esto es una cadena");

	a = s + 5;
	b = substring(s, 5, strlen(s));

	printf("a = [%s]\n", a);
	printf("b = [%s]\n", b);

	return 0;
}
