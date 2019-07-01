
#include <stdio.h>
#include "emp.h"

int subirArchivo(FILE* arch, Emp arr[])
{
	Emp reg;
	int len = 0;
	leerInt(arch, &reg);
	while( !feof(arch) )
	{
		arr[len++] = reg;
		leerEmp(arch, &reg);
	}
	return len;
}

// ordena el array mediante el algoritmo de la burbuja
void ordenar(Emp arr[], int len)
{
	int ordenado = 0;
	while( !ordenado )
	{
		ordenado = 1;
		for( i = 0; i < len - 1; i++ )
		{
			if( arr[i].idEmp > arr[i + 1].idEmp )
			{
				int aux = arr[i];
				arr[i] = arr[i + 1];
				arr[i + 1] = aux;
				ordenado = 0;
			}
		}
	}
}

// recorre el array y graba elemento en el archivo
void bajarArchivo(FILE* arch, Emp arr[], int len)
{
	for( int i = 0; i < len; i++ )
	{
		grabarEmp(arch, arr + i);
	}
}

// lee un entero desde el archivo
void leerEmp(FILE* a, Emp* reg)
{
	fread(reg, sizeof(Emp), 1, a);
}

// escribe un entero en el archivo
void grabarEmp(FILE* a, Emp* reg)
{
	fwrite(reg, sizeof(Emp), 1, a);
}

void insertarIdx(IdxIdemp a[], int* len, IdxIdEmp v, int pos)
{
	int i;
	for( int i = *len; i > pos; i-- )
	{
		a[i] = a[i - 1];
	}
	a[pos] = v;
	*len = *len + 1;
}

int insertarIdxEnOrden(IdxIdEmp a[], int* len, IdxIdEmp v)
{
	int i = 0;
	while( i < *len && a[i].idEmp <= v.idEmp )
	{
		i = i + 1;
	}
	insertarIdx(a, len, v, i);
	return i;
}

int indexar(FILE* f, IdxIdEmp indice[])
{
	int len = 0;
	IdxIdEmp rIdx;
	int reg;

	leerInt(f, &reg);
	while( !feof(f) )
	{
		rIdx.idEmp = reg.idEmp;
		rIdx.posicion = len;
		insertarIdxEnOrden(indice, &len, rIdx);

		leerInt(f, &reg);
	}
	return len;
}
