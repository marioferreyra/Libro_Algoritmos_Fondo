
#include <stdio.h>
#include "arrays.h"

int main()
{
	int arr[50];
	int len = 0;

	insertarEnOrden(arr, &len, 4);
	insertarEnOrden(arr, &len, 0);
	insertarEnOrden(arr, &len, 1);
	insertarEnOrden(arr, &len, 3);
	insertarEnOrden(arr, &len, 5);
	insertarEnOrden(arr, &len, 2);

	int i;
	for( i = 0; i < len; i++ )
	{
		printf("%d\n", arr[i]);
	}

	return 0;
}
