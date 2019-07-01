
#include <stdio.h>
#include "nodo.h"

int main()
{
	// inicializamos la lista
	Nodo* p = NULL;

	// le agregamos valores a traves de la funcion agregar
	agregar(&p, 5);
	agregar(&p, 8);
	agregar(&p, 7);
	agregar(&p, 3);
	agregar(&p, 9);

	// mostramos por pantalla el contenido de lista
	// la funcion mostrar la analizaremos a continuacion
	mostrar(p);

	// antes de fi nalizar el programa liberamos la memoria
	// que ocupan los nodos de la lista (lo analizaremos mas adelante)
	liberar(&p);
	return 0;
}

void agregar(Nodo** p, int v)
{
	// creamos el nuevo nodo
	Nodo *nuevo = (Nodo*) malloc(sizeof(Nodo));
	nuevo->valor = v;
	nuevo->sig = NULL;
	// si la lista esta vacia entonces hacemos que p apunte al nuevo nodo
	if( *p == NULL )
	{
		*p = nuevo;
	}
	else
	{
		Nodo* aux = *p;
		// recorremos la lista hasta llegar al ultimo nodo
		while( aux->sig != NULL )
		{
			// avanzamos a aux al proximo nodo
			aux = aux->sig;
		}
		// como aux apunta al ultimo entonces su siguiente sera el nuevo nodo
		aux->sig = nuevo;
	}
}

void liberar(Nodo** p)
{
	while( *p != NULL )
	{
		Nodo* prox = (*p)->sig;
		free(*p);
		*p = prox;
	}
}
