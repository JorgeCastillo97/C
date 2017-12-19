#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "pila.h"

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {

	int c,nl,a,b,i,j;
	char chr, inf[100],aux[100],x,y, *CAD;
	booleano check;
	pila p;
	NODO tope;
	FILE *oper=NULL;
	
	CAD=&inf[0];
	
	oper=fopen("Oper.txt","r");
	if(oper==NULL)
	{
		puts("No se asigno el espacio de memoria");
		system("pause");
		exit (1);
	}
	else
	{
		c=fgetc(oper);
		nl=c-48;
		printf("Numero de lineas: %d",nl);
		mi_pila(&p);
		c=fgetc(oper);
		for(a=0;a<nl;a++)
		{
			
			//printf("%s",*CAD);
			/*while(c=fgetc(oper)!=EOF || c=fgetc(oper)!='\n')
			{
				
				switch (c)
				{
					case '1': case '2': case '3': case '4': case '5': case '6': case '7': case '8': case '9':
						{
								inf[i++]=c;
								break;
						}
					case '*': case '/': case '+': case '-':
						{
							if(empty(&p))
							{
								tope.llave=c;
								push(&p,tope);
							}
							else
							{
								
							}
						}
				}
			}*/
		}
		fclose(oper);
		
	}
/*		while((c=fgetc(oper))!=EOF)
		{
			switch (c)
			{
				case '1': case '2': case '3': case '4': case '5': case '6': case '7': case '8': case '9':
					{
						fputc(c,pos);
						break;
					}
				case '*': case '/': case '+': case '-':
					{
						push(&p,tope); 
						break;
					}
				case '\n':
					{
						
					}
			}
		}*/
	
	return 0;
	system("pause");
}
