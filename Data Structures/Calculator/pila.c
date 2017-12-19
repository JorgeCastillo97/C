#include <stdio.h>
#include <stdlib.h>
#include "pila.h"

mensaje push(pila*s,NODO D)
{
	pila temp;
	temp=(pila)malloc(sizeof(NODO));
	if(temp==NULL)
		return NO_MEMORY;
	*temp=D;
	if(empty(*s))
		temp->sig=NULL;
	else
		temp->sig=*s;
	*s=temp;
	return OK;
}

NODO pop(pila*s)
{
	NODO w;
	w=**s;
	free(*s);
	*s=w.sig;
	w.sig=NULL;
	return w;
}

void mi_pila(pila*s)
{
	*s=NULL;
}

void liberarpila(pila*s)
{
	while(!empty(*s))
		pop(s);
}

booleano empty(pila s)
{
	if(s==NULL)
		return TRUE;
	else
		return FALSE;
}

NODO top(pila s)
{
	NODO copia;
	copia=*s;
	copia.sig=NULL;
	return copia;
}
