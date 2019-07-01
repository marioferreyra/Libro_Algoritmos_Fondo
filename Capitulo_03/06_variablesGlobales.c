
#include<stdio.h>

void incrementar();

int i = 0;

int main()
{
	while( i < 10 )
	{
		printf("%d\n", i);
		incrementar();
	}
	return 0;
}
void incrementar()
{
	i = i + 1;
}
