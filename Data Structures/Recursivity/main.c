#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "FUNCIONES.h"

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	int op,menu=1,N,R,NoDis;
	long fibp;
	char exp[100];
	
	do{
		system("cls");
		printf("\t\t\t\tMENU\n\n\n");
		puts("Elige una opcion:");
		printf("1)Factorial Iterativo\n2)Factorial Recursivo\n3)Serie Fibonacci Iterativa\n4)Serie Fibonacci Recursiva\n5)Serie Fibonacci Recursiva 2\n6)Torres de Hanoi\n7)Gramatica de expresiones\n8)Salir\n");
		scanf("%d",&op);
	
		switch(op)
		{
			case 1:
				{
					printf("Ingrese el numero a calcular el factorial: ");
					scanf("%d",&N);
					factorialI(N);
					system("pause");
					menu=1;
					break;
				}
			case 2:
				{
					printf("Ingrese el numero a calcular el factorial: ");
					scanf("%d",&N);
					factorialR(N);
					system("pause");
					menu=1;
					break;
				}
			case 3:
				{
					printf("Ingrese la posicion del numero: ");
					scanf("%d",&N);
					serieIterativa(N);
					system("pause");
					menu=1;
					break;
				}
			case 4:
				{
					printf("Ingrese la posicion del numero: ");
					scanf("%d",&N);
					fibp=fib(N);
					printf("%ld \n",fibp);
					system("pause");
					menu=1;
					break;
				}
			case 5:
				{
					printf("Introduce la posicion del numero: ");
					scanf("%d",&N);
					R=fib_i(N);
					printf("%d \n",R);
					system("pause");
					menu=1;
					break;
				}
			case 6:
				{
					printf("Introduce el numero de discos: ");
					scanf("%d",&NoDis);
					TorresHanoi(NoDis,'A','B','C');
					system("pause");
					menu=1;
					break;
				}
			case 7:
				{
					printf("Introduce una expresion:\n\n");
					fflush(stdin);
					scanf("%s",&exp);
					printf("EXPRESION: %s\n\n",exp);
	
					if(e(exp,0,strlen(exp)-1))
					{
						printf("Expresion valida\n");
					}
					else
					{
						printf("Expresion invalida\n");
					}
					system("pause");
					menu=1;
					break;
				}
			case 8:
				{
				exit (1);
				}
			default:
			{
				menu=1;
				break;
		 	} 	
		}
	}
	while(menu==1);
	system("pause");
	return 0;
}
