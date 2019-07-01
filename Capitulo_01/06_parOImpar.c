
#include <stdio.h>

int main()
{
	int n;
	printf("Ingrese un valor: ");
	scanf("%d", &n);

	if( n % 2 == 0 )
	{
		printf("%d es par\n", n);
	}
	else
	{
		printf("%d es impar\n", n);
	}

	return 0;
}
