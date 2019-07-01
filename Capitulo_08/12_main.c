
#include <stdio.h>

int main(int argc, char* argv[])
{
	FILE* f1 = fopen(argv[1], "r+");
	FILE* f2 = fopen(argv[2], "w+");
	char c;

	while( (c = getc(f1)) != EOF )
	{
		putc(c, f2);
	}

	fclose(f2);
	fclose(f1);
	return 0;
}
