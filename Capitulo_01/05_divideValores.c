
#include <stdio.h>

int main()
{
	int a, b;
	double cociente;

	printf("Ingrese dos valores: ");
	scanf("%d %d", &a, &b);

	if( b == 0 )
	{
		printf("Error, no puedo dividir por cero\n");
	}
	else
	{
		cociente = (double) a / b;
		printf("%d / %d = %lf\n", a, b, cociente);
	}

	return 0;
}
