
#include <stdio.h>
#include "arrays.h"

int main()
{
	int n;
	int arr[50];
	int len = 0;

	insertar(arr, &len, 4, 0);
	insertar(arr, &len, 3, 0);
	insertar(arr, &len, 2, 0);
	insertar(arr, &len, 1, 0);

	int i;
	for( i = 0; i < len; i++ )
	{
		printf("%d\n", arr[i]);
	}

	return 0;
}
