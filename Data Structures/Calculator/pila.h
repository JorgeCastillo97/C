#ifndef _PILA_H_
#define _PILA_H_

struct nodo {int Linea;
			char numero;
			struct nodo *sig;
			};

typedef struct nodo NODO;
typedef NODO *pila;
typedef enum m{NO_MEMORY,OK}mensaje;
typedef enum b{FALSE,TRUE}booleano;

void mi_pila(pila*);
void liberarpila(pila*);
mensaje push(pila*,NODO);
NODO pop(pila*);
NODO top(pila);
booleano empty(pila);

#endif
