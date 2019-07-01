
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

	printf("s = [%s]\n", s);
	printf("a = [%s]\n", a);
	printf("b = [%s]\n", b);

	a[3] = 'X'; // modifico un caracter de a
	b[3] = 'Y'; // modifico un caracter de b
	s[5] = 'Z'; // modifico un caracter de s

	printf("s = [%s]\n", s);
	printf("a = [%s]\n", a);
	printf("b = [%s]\n", b);

	return 0;
}
