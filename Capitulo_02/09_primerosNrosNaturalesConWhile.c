
#include <stdio.h>

int main()
{
	int i, n;

	printf("Ingrese un valor numerico: ");
	scanf("%d", &n);

	i = 0;
	while( i < n )
	{
		printf("%d\n", i);
		i = i + 1;
	}
	return 0;
}
