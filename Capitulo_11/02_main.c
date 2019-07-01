
#include <stdio.h>
#include "nodo.h"

int main()
{
	Nodo* p = NULL;

	// encolamos varios elementos
	encolar(&p, 1);
	encolar(&p, 2);
	encolar(&p, 3);

	// desencolamos un elemento (sale el 1)
	printf("%d\n", desencolar(&p));

	// desencolamos un elemento (sale el 2)
	printf("%d\n", desencolar(&p));

	// encolamos mas elementos
	encolar(&p, 4);
	encolar(&p, 5);
	encolar(&p, 6);

	// desencolamos un elemento (sale el 3)
	printf("%d\n", desencolar(&p));

	// desencolamos mientras queden elementos en la cola
	while( p != NULL )
	{
		printf("%d\n", desencolar(&p));
	}
	return 0;
}

void encolar(Nodo** p, int v)
{
	Nodo* nuevo = (Nodo*) malloc(sizeof(Nodo));
	nuevo->valor = v;
	if( *p == NULL )
	{
		nuevo->sig = nuevo;
	}
	else
	{
		nuevo->sig = (*p)->sig;
		(*p)->sig = nuevo;
	}
	*p = nuevo;
}

int desencolar(Nodo** p)
{
	int ret = (*p)->sig->valor;
	if( *p == (*p)->sig )
	{
		free(*p);
		*p = NULL;
	}
	else
	{
		Nodo* aux = (*p)->sig;
		(*p)->sig = aux->sig;
		free(aux);
	}
	return ret;
}
