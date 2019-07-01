
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(int argc, char* argv[])
{
	// creo un buffer
	int bufferLen = atoi(argv[2]);
	char *buffer = (char*) malloc(bufferLen);

	// abro el archivo
	FILE* f = fopen(argv[1], "r+b");

	// tomo la hora actual (hora inicial)
	time_t t1 = time(NULL);

	// leo bufferLen bytes
	int n = fread(buffer, 1, bufferLen, f);
	int i = 0;
	while( n == bufferLen )
	{
		i += bufferLen;
		n = fread(buffer, 1, bufferLen, f);
	}

	// sumo el remanente
	i += n;
	fclose(f);

	// tomo la hora actual (hora fi nal)
	time_t t2 = time(NULL);

	// obtengo la diferenecia entre la hora inicial y la hora fi nal
	double secs = difftime(t2, t1);
	printf("Total bytes leidos: %d\n", i);
	printf("%.0lf segundos, buffer=%d bytes\n", secs, bufferLen);

	return 0;
}
