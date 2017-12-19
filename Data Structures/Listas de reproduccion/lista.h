#ifndef _LISTA_H_
#define _LISTA_H_

struct nodo{
	char cancion[50];
	char artista[50];
	char album[50];
	struct nodo *ant;
	struct nodo *sig;
};

struct cabecera{
	
	struct nodo *I;
	struct nodo *F;
	int NE;
};

//ALIAS
typedef struct nodo NODO;
typedef struct cabecera CAB;
typedef CAB *lista;
typedef NODO *lig;
enum m{NO_MEMORY,OK,OUT_BOUNCE}typedef mensaje;
enum b{FALSE,TRUE}typedef booleano;

//PROTOTIPOS
mensaje ini_lista(lista *L);
void lib_lista(lista);
void borrar_lista(lista);
NODO leer(lista L,int ind,NODO D);
mensaje modificar_lista(lista L,int ind,NODO D);
mensaje insertar(lista L,int ind,NODO D);
mensaje borrar(lista L,int ind);
booleano vacia(lista )
#endif
