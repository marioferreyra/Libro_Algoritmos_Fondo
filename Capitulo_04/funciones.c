
int esDigito(char c)
{
	return c >= '0' && c <= '9';
}

int esLetra(char c)
{
	return c >= 'A' && c <= 'Z' || c >= 'a' && c <= 'z';
}

int esMayuscula(char c)
{
	return c >= 'A' && c <= 'Z';
}

int esMinuscula(char c)
{
	return c >= 'a' && c <= 'z';
}

char aMinuscula(char c)
{
	return esMayuscula(c) ? c - 'A' + 'a' : c;
}

char aMayuscula(char c)
{
	return esMinuscula(c) ? c - 'a' + 'A' : c;
}
