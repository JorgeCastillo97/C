#ifndef _COLA_H_
#define _COLA_H_


struct nodo{
	int 	prio;
	char 	doc[20];
	struct 	nodo *sig; 
}typedef NODO;

struct cabecera{
	struct nodo *I;
	struct nodo *F;
}typedef CAB;

enum mensaje{OK,NO_MEMORY}typedef mensaje;	//Regresa un Ok o No memory dependiendo si es un 1 o un 0
enum boolean{FALSE,TRUE}typedef booleano;	//Regresa un TRUE o un FALSE dependiendo si es un 1 o un 0

//Alias
typedef CAB* cola;						
typedef NODO* lig;

//Prototipos
mensaje ini_cola(cola *c);				//Inicializa la cola en la direccion NULL		
void lib_cola(cola c);					//Libera toda la cola
void borrar_cola(cola *c);				//Elimina todos los datos de la cola
mensaje encolar(cola c, NODO D);		//Mete datos a la cola
NODO desencolar(cola c);				//Quita el primer dato ingresado a la cola
booleano vacia(cola c);					//Verifica si esta vacia y devuelve un valor 1 o 0
void gotoxy(int x,int y);				//Funcion Gotoxy de Conio.h

#endif


