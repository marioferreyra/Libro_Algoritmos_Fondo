
#include <stdio.h>

int main()
{
	int arr[50] = { 1, 4, 7, 9, 10, 12 };
	int len = 6;
	int v, pos, enc;

	int i;
	for( i = -3; i < 15; i++ )
	{
		pos = busquedaBinaria(arr, len, i, &enc);
		if( !enc )
		{
			insertar(arr, &len, i, pos);
		}
	}

	// muestro como quedo el array
	for( i = 0; i < len; i++ )
	{
		printf("%d\n", arr[i]);
	}

	return 0;
}
