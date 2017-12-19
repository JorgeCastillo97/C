#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "cola.h"
#include <time.h>
#include <math.h>
#include <windows.h>

mensaje ini_cola(cola *c){
	
	cola temp=NULL;
	temp=(cola)malloc(sizeof(CAB));
	if (temp==NULL)
	{
		return NO_MEMORY;
	}
	temp->I = NULL;
	temp->F = NULL;

	*c=temp;
	
	return OK;
	
}

void lib_cola(cola c){
	
	while(!vacia(c))
	{
		desencolar(c);
	}
		
}


void borrar_cola(cola *c){
	
	lib_cola(*c);
	free(*c);
	*c = NULL;
}

mensaje encolar(cola c, NODO D){
	lig aux1, aux2, temp = NULL;
	temp = (lig)malloc(sizeof(NODO));
	if(temp == NULL){
	return NO_MEMORY;	
	} 
	temp->prio = D.prio;
	strcpy(temp->doc, D.doc);
	
	if(vacia(c)){
	c->I = c->F = temp;		
	}else
	if (D.prio<=c->F->prio){
	c->F->sig = temp;
	c->F = temp;
	temp->sig=NULL;	
	} else if(D.prio> c->I->prio){
	temp->sig = c->I;
	c->I= temp;
	} else {
	aux1 = c->I;
	aux2 = c->I->sig;
	while (aux1->prio<= aux2->prio){
		aux1 = aux2;
		aux2 = aux2->sig;}
	aux1->sig=temp;
	temp->sig=aux2;
	}
	return OK;
}

NODO desencolar(cola c){
	
	
		NODO copia;
		copia=*(c->I);
		if(!vacia(c)) {
		c -> I = copia.sig;
		copia.sig=NULL;
		}else{ 
		c-> F = c->I = NULL;
		}
		return copia;
	
}

booleano vacia(cola c)
{
	
	if((c->F==NULL)||(c->I==NULL))
	{
		return TRUE;
	}
	else if((c->F!=NULL)||(c->I!=NULL))
	{
		return FALSE;
	}
	
}

 void gotoxy(int x,int y){  
      HANDLE hcon;  
      hcon = GetStdHandle(STD_OUTPUT_HANDLE);  
      COORD dwPos;  
      dwPos.X = x;  
      dwPos.Y= y;  
      SetConsoleCursorPosition(hcon,dwPos);  
 }  


