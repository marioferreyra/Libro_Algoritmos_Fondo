
#include <stdio.h>

int main()
{
	int n, esPar;
	scanf("%d", &n);

	esPar = n % 2 == 0;

	if( esPar )
	{
		printf("%d es par\n", n);
	}
	return 0;
}
