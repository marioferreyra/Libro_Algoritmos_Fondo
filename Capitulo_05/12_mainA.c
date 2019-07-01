
#include <stdio.h>
#include <string.h>

int main()
{
	char s[] = "Juan|Marcos|Carlos|Matias";
	char* tok;

	// primera llamada
	tok = strtok(s, "|");
	while( tok != NULL )
	{
		printf("%s\n", tok);

		// llamadas subsiguientes
		tok = strtok(NULL, "|");
	}

	return 0;
}
