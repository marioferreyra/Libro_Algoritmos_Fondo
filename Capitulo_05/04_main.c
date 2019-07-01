
#include <stdio.h>

// prototipos de las funciones
void recibeArray(char[]);  // recibe un char[]
void recibePuntero(char*); // recibe un char*

int main()
{
	char s[] = "Esta es una cadena";
	recibeArray(s); // le paso la cadena s a la funcion recibeArray
	recibePuntero(s); // le paso la cadena s a la funcion recibePuntero
	return 0;
}

void recibeArray(char x[])
{
	printf("x = %s\n", x);
	printf("x[3] = %c\n", x[3]);
}

void recibePuntero(char* x)
{
	printf("x = %s\n", x);
	printf("x[3] = %c\n", x[3]);
}
