
#include <string.h>
#include <stdlib.h>

int esPrefijo(char* x, char* p)
{
	int n = strlen(p);
	return strncmp(x, p, n) == 0;
}

int esSufijo(char* x, char* s)
{
	int desde = strlen(x) - strlen(s);
	return strcmp(s, x + desde) == 0;
}

char* substring(char* s, int desde, int hasta)
{
	int n = hasta - desde;

	char* ret = (char*) malloc(n + 1);
	int j = 0;

	int i;
	for( i = desde; i < hasta; i++ )
	{
		ret[j] = s[i];
		j = j + 1;
	}
	ret[j] = '\0';

	return ret;
}

char* ltrim(char* s)
{
	int n = strlen(s);
	int i = 0;

	while( s[i] == ' ' )
	{
		i = i + 1;
	}

	return substring(s, i, n);
}

char* rtrim(char* s)
{
	int i = strlen(s) - 1;

	while( s[i] == ' ' )
	{
		i = i - 1;
	}

	return substring(s, 0, i + 1);
}

char* trim(char* s)
{
	return ltrim(rtrim(s));
}
