#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "cola.h"

int main() {
	

	
	NODO D;
	cola c;
	NODO R;
	
	ini_cola(&c);

	int aux=0;


int opt=0,opt2;
do
{
	if(aux==5)
	{
		break;
	}
			system("CLS");

			printf("\n\n\t\t\t\t\t 1---->Mandar Documento - Alumno ");
			printf("\n\n\t\t\t\t\t 2---->Mandar Documento - Profesor");
			printf("\n\n\t\t\t\t\t 3---->Mandar Documento - Director");
			printf("\n\n\t\t\t\t\t 4---->Salir<------ ");
			printf("\n\n\t\t\t\t\t Selecciona tu opcion:  ");
			scanf("%d",&opt);
			switch(opt)
{
	case 1:
		system("CLS");
		aux++;
		D.prio=1;
		printf("\n\n\t\t\t\t\t ---->Mandar Documento Alumno<------ ");
		printf("\n\n\t\t\t\t\t ---->Escribe el Nombre del documento: ");
		fflush(stdin);
		gets(D.doc);
		encolar(c,D);
		system("PAUSE");
		opt=0;
		break;
	case 2:
		system("CLS");
		aux++;
		D.prio=2;
		printf("\n\n\t\t\t\t\t ---->Mandar Documento Profesor<------ ");
		printf("\n\n\t\t\t\t\t ---->Escribe el Nombre del documento: ");
		fflush(stdin);
		gets(D.doc);
		encolar(c,D);
		system("PAUSE");
		opt=0;
		break;
	case 3:
		system("CLS");
		aux++;
		D.prio=3;
		printf("\n\n\t\t\t\t\t ---->Mandar Documento Director<------ ");
		printf("\n\n\t\t\t\t\t ---->Escribe el Nombre del documento: ");
		fflush(stdin);
		gets(D.doc);
		encolar(c,D);
		system("PAUSE");
		opt=0;
		break;
	case 4:
		system("CLS");
		break;
}
}while(opt==0);
	system("CLS");	
	printf("\n\n\t\t\t\t\t Sus documentos fueron: ");
	while(!vacia(c))
	{
		R=desencolar(c);
		printf("\n\t\t\t\t\t%s",R.doc);
	}


return 0;

}
