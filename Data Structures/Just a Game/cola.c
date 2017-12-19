#include <stdio.h>
#include <stdlib.h>
#include "cola.h"

//ANCHO 80			ALTO 61
#define limitx 80
#define limity 61

mensaje ini_cola(cola *c)
{
	cola temp=NULL;
	temp=(cola)malloc(sizeof(CAB));
	if(temp==NULL)
	{
		return NO_MEMORY;
	}
	temp->I=NULL;
	temp->F=NULL;
	*c=temp;
	return OK;
}

void lib_cola(cola c)		//Libera elementos
{
	while(!vacia(c))
	{
		desencolar(c);
	}
}

void borrar_cola(cola *c)	//Libera elementos y cabecera
{
	lib_cola(*c);
	free(*c);
	*c=NULL;
}

mensaje encolar(cola c, NODO D)
{
	lig temp=NULL;
	temp=(lig)malloc(sizeof(NODO));
	if(temp==NULL)
		return NO_MEMORY;
	*temp=D;
	temp->sig=NULL;
	if(vacia(c))
	{
		c->I=c->F=temp;
	}
	else
	{
		c->F->sig=temp;
		c->F=temp;
	}
}

NODO desencolar(cola c)
{
	NODO copia;
	copia=*(c->I);
	if(!vacia(c)) 
	{
	c -> I = copia.sig;
	copia.sig=NULL;
	}
	else
	{ 
		c-> F = c->I = NULL;
	}
	return copia;
}

booleano vacia(cola c)
{
	if(c->I==NULL || c->F==NULL)
	{
		return TRUE;
	}
	else if(c->I!=NULL || c->F!=NULL)
	{
		return FALSE;
	}
}

void marco(int vidas,int nivel,int score)
{
	int x;
	
	gotoxy(0,0);
	printf("\a");
	printf("VIDAS: ");
	if(vidas==3)
	{
		for(x=1;x<=vidas;x++)
		{
			printf("%c",3);
		}
		printf(" \t NIVEL: %d \t SCORE: %d",nivel,score);
	}
	else if(vidas==2)
	{
		for(x=1;x<=vidas;x++)
		{
			printf("%c",3);
		}
		printf(" \t NIVEL: %d \t SCORE: %d",nivel,score);
	}
	else if(vidas==1)
	{
		for(x=1;x<=vidas;x++)
		{
			printf("%c",3);
		}
		printf(" \t NIVEL: %d \t SCORE: %d",nivel,score);
	}
	
	for (x=0;x<limitx;x++)
	{
		gotoxy(x,1);
		printf("-");
	}
}
