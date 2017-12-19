#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "pila.h"

void ini_pila(NODO **p)
{
		*p = NULL;
}

mensaje push(NODO **p,NODO w)
{
	NODO *temp;
	temp = (NODO*) malloc (sizeof (NODO));
	temp->sig = *p ;
	temp->c=w.c;	
	*p = temp;
	if(*p!=NULL)
	{
		return 1;
	}
	else if (*p==NULL)
	{
		return 2;
	}
		
}

NODO pop(NODO **p)
{
	
	
	if(*p==NULL)
	{
			printf("\n Sin datos en la pila");
			return;
	}
	else if(*p!=NULL)
	{
	NODO *COPIA;
	COPIA = (NODO*) malloc (sizeof (NODO));
	
	COPIA = *p;
	*p = COPIA->sig;
	COPIA->sig = NULL;	
	return (*COPIA);
	}

}

NODO top(NODO *p)
{
	NODO *COPIA;
	COPIA = (NODO*) malloc (sizeof (NODO));
	COPIA = p;
	COPIA->c=p->c;
	return *COPIA;
}

boolean empty(NODO *p)
{
	
	if(p==NULL)
	{
		return 1;
	}
	else if(p!=NULL)
	{
		return 0;
	}
	
}
