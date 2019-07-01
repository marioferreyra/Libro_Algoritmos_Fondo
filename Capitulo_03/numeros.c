int esPrimo(int n)
{
	int ok = 1;
	int i;
	for( i = 2; i < n && ok; i++ )
	{
		if( n % i == 0 )
		{
			ok = 0;
		}
	}
	return ok;
}
