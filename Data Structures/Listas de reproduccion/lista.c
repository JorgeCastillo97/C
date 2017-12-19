#include <stdio.h>
#include <string.h>
#include "lista.h"

mensaje ini_lista(lista *L)
{
	lista temp=NULL;
	temp=(lista)malloc(sizeof(CAB));
	if(temp==NULL)
	{
		return NO_MEMORY;
	}
	
	temp->F=temp->I=NULL;
	*L=temp;
	return OK;
}

void lib_lista(lista L)		//Libera elementos
{
	int i=1;
	while(!vacia(L))
	{
		if(i<=NE)
		{
			borrar(L,i);
			i++;	
		}
	}
}

void borrar_lista(lista *L)
{
	lib_lista(*L);
	free(*L);
	*L=NULL;
}

mensaje borrar(lista L,int ind)
{
	
}

booleano vacia(lista L)
{
	if(L->I==NULL || L->F==NULL)
	{
		return TRUE;
	}
	else if(L->I!=NULL || L->F!=NULL)
	{
		return FALSE;
	}
}
