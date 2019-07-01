
#include <stdio.h>

int main()
{
	char* beatles[] = { "John", "Paul", "George", "Ringo" };

	int i;
	for( i = 0; i < 4; i++ )
	{
		printf("%s\n", beatles[i]);
	}

	printf("All you need is love, love... love is all you need!\n");

	return 0;
}
