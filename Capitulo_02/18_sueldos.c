
#include<stdio.h>

int main()
{
	int v;

	// ingreso el sueldo a pagar
	printf("Ingrese el valor a pagar: $");
	scanf("%d", &v);
	int denom = 100;
	int cant = v / denom;
	int residuo = v % denom;
	printf("%d billetes de $%d\n", cant, denom);

	// repito la operacion considerando solo el residuo
	v = residuo;
	denom = 50;
	cant = v / denom;
	residuo = v % denom;
	printf("%d billetes de $%d\n", cant, denom);

	// repito la operacion considerando solo el residuo
	v = residuo;
	denom = 20;
	cant = v / denom;
	residuo = v % denom;
	printf("%d billetes de $%d\n", cant, denom);
	// repito la operacion considerando solo el residuo
	v = residuo;
	denom = 10;
	cant = v / denom;
	residuo = v % denom;
	printf("%d billetes de $%d\n", cant, denom);

	// repito la operacion considerando solo el residuo
	v = residuo;
	denom = 5;
	cant = v / denom;
	residuo = v % denom;
	printf("%d billetes de $%d\n", cant, denom);

	// repito la operacion considerando solo el residuo
	v = residuo;
	denom = 2;
	cant = v / denom;
	residuo = v % denom;
	printf("%d billetes de $%d\n", cant, denom);

	// repito la operacion considerando solo el residuo
	v = residuo;
	denom = 1;
	cant = v / denom;
	residuo = v % denom;
	printf("%d billetes de $%d\n", cant, denom);

	return 0;
}
