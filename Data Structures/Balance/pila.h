#ifndef _PILA_H_
#define _PILA_H_

struct	pila{	
	char c;
	struct pila	*sig;	
}typedef NODO;



enum mensaje{OK,NO_MEMORY}typedef mensaje;
enum boolean{FALSE,TRUE}typedef boolean;
typedef NODO *pila;

mensaje push(NODO **p,NODO w);
NODO pop(NODO **p);
NODO top(NODO *p);
boolean empty(NODO *p);

void ini_pila(NODO **p);
void free_pila(NODO **p);

#endif
