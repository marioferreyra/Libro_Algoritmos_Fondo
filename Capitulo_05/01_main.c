
#include <stdio.h>

int main()
{
	char a[] = "Esto es una cadena";

	printf("[%s]\n", a);      // imprime: [Esto es una cadena]
	printf("[%s]\n", a + 5);  // imprime: [es una cadena]
	printf("[%s]\n", a + 9);  // imprime: [na cadena]
	printf("[%s]\n", a + 12); // imprime: [cadena]

	return 0;
}

