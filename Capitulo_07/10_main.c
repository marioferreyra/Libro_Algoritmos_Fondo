
#include <stdio.h>
#include "arrays.h"

int main()
{
	// defino un array de enteros y ordenado
	int arr[50] = { 1, 4, 7, 9, 10, 12 };
	int len = 6;
	int v, pos, enc;

	int i;
	for( i = -3; i < 15; i++ )
	{
		pos = busquedaBinaria(arr, len, i, &enc);
		printf("%d", i);

		if( enc )
		{
			printf(" [encontrado], ");
		}
		else
		{
			printf(" [NO encontrado], ");
		}
		printf("pos=%d\n", pos);
	}

	return 0;
}
