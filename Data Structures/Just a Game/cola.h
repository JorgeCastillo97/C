#ifndef _COLA_H_
#define _COLA_H_

struct nodo{
	char letra;
	struct nodo * sig;
}typedef NODO;

struct cabecera{
	struct nodo *I;
	struct nodo *F;
}typedef CAB;

typedef CAB *cola;
typedef NODO *lig;

typedef	enum	a{NO_MEMORY,OK}mensaje;
typedef enum	b{FALSE,TRUE}booleano;

//Prototipos
mensaje ini_cola(cola *c);
void borrar_cola(cola *c);
void lib_cola(cola c);
mensaje encolar(cola c, NODO D);
NODO desencolar(cola c);
booleano vacia(cola c);
void marco(int vidas,int nivel,int score);

#endif

