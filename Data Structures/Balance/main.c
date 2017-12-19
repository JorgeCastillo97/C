#include <stdio.h>
#include <stdlib.h>
#include "pila.h"



/* run this program using the console pauser or add your own getch, system("pause") or input loop */

/*		MENU
	1 Analizar 1.c							POP modifica  &Nombre_de_la_pila
	2 Analizar 2.c							PUSH modifica &Nombre_de_la_pila
	3 Analizar 3.c							TOP  NO modifica  Nombre_de_la_pila
	4 Analizar 4.c							EMPTY NO modifica Nombre_de_la_pila
	5 Salir
*/

int main(int argc, char *argv[]) {
	
	int op,caso, AUX=0;   //pila balanceada
	FILE *A=NULL;
	char c;
	int linea=1;
	NODO w; //elemento del tope
	pila llaves;
	
	system("color 07");
	
	do
	{
		system("cls");
		
		printf("\n\n\t\t\t\tMENU\n\n");
		printf("Selecciona una opcion:\n\n\n");
		printf("1 Analizar 1.c\n");
		printf("2 Analizar 2.c\n");
		printf("3 Analizar 3.c\n");
		printf("4 Analizar 4.c\n");
		printf("5 Salir\n\n");
		scanf("%d",&caso);
		
		boolean BOL;
		
		switch(caso)
		{
			case 1:
				{
					A=fopen("1.c","r");
					if(A==NULL)
					{
						puts("No se asigno el espacio de memoria");
						system("Pause");
						exit (1);
					}
					else
					{
						ini_pila(&llaves);
						linea=1;
						w.lg=1;
						c='v';
						while(c!=EOF)
						{
							c=fgetc(A);
							switch (c)
							{
								case '{':
									{
										w.llave=c; 					//Si encuentra una llave que abre mientras lee el archivo, la guarda en la pila
										push(&llaves,w);
										break;
									}
								case '[':
									{
										w.llave=c; 					//Si encuentra una llave que abre mientras lee el archivo, la guarda en la pila
										push(&llaves,w);
										break;
									}
								case '(':
									{
										w.llave=c; 					//Si encuentra una llave que abre mientras lee el archivo, la guarda en la pila
										push(&llaves,w);
										break;
									}
								case '}':
									{
							
										if(empty(llaves))
										{
											printf("Falta una llave de apertura para   %c, en linea  %d\n\n",c,w.lg);
											AUX=1;
											break;
										}
										else
										{
																										//Checa el elemento del tope de la pila
											if(top(llaves).llave=='{' && c=='}')    //Si los tipos coinciden
											{
												w=pop(&llaves);			//Se saca el elemento del tope de la pila
											}
											else
											{
												printf("Los elementos no coinciden     %c    distinto de     %c     , en linea  %d\n\n",w.llave,c,w.lg);
												AUX=1;
											}
										}
											break;
									}
								case ']':
									{
										if(empty(llaves))
										{
											printf("Falta una llave de apertura para   %c, en linea  %d\n\n",c,w.lg);
											AUX=1;
											break;
										}
										else
										{
																										//Checa el elemento del tope de la pila
											if(top(llaves).llave=='[' && c==']')    //Si los tipos coinciden
											{
												w=pop(&llaves);			//Se saca el elemento del tope de la pila
											}
											else
											{
												printf("Los elementos no coinciden     %c    distinto de     %c     , en linea  %d\n\n",w.llave,c,w.lg);
												AUX=1;
											}
										}
											break;
									}
								case ')':
									{
										if(empty(llaves))
										{
											printf("Falta una llave de apertura para   %c, en linea  %d\n\n",c,w.lg);
											AUX=1;
											break;
										}
										else
										{
																										//Checa el elemento del tope de la pila
											if(top(llaves).llave=='(' && c==')')    //Si los tipos coinciden
											{
												w=pop(&llaves);			//Se saca el elemento del tope de la pila
											}
											else
											{
												printf("Los elementos no coinciden     %c    distinto de     %c     , en linea  %d\n\n",w.llave,c,w.lg);
												AUX=1;
											}
										}
											break;
									}
								case '\n':
									{
										linea++;
										w.lg=linea;
										break;
									}
							}
						}
						if(empty(llaves) && AUX==0)
						{
							printf("\n ARCHIVO BALANCEADO\n");
						}
						else if(empty(llaves) && AUX==1)
						{
							break;
						}
						else
						{
							do
							{
								w=top(llaves);
								printf("Quedaron elementos en la pila...  Linea:  %d \n\n",w.lg);
								w=pop(&llaves);
							}
							while(!empty(llaves));					//Mientras la pila no este vacía o existan elementos en ella.
						}
					}
					fclose(A);
					break;
				}
			case 2:
				{
					A=fopen("2.c","r");
					if(A==NULL)
					{
						puts("No se asigno el espacio de memoria");
						system("Pause");
						exit (1);
					}
					else
					{
						ini_pila(&llaves);
						linea=1;
						w.lg=1;
						c='v';
						while(c!=EOF)
						{
							c=fgetc(A);
							switch (c)
							{
								case '{':
									{
										w.llave=c; 					//Si encuentra una llave que abre mientras lee el archivo, la guarda en la pila
										push(&llaves,w);
										break;
									}
									case '[':
									{
										w.llave=c; 					//Si encuentra una llave que abre mientras lee el archivo, la guarda en la pila
										push(&llaves,w);
										break;
									}
									case '(':
									{
										w.llave=c; 					//Si encuentra una llave que abre mientras lee el archivo, la guarda en la pila
										push(&llaves,w);
										break;
									}
								case '}':
									{
							
										if(empty(llaves))
										{
											printf("Falta una llave de apertura para   %c, en linea  %d\n\n",c,w.lg);
											AUX=1;
											break;
										}
										else
										{
											if(top(llaves).llave=='{' && c=='}')    //Si los tipos coinciden
											{
												w=pop(&llaves);			//Se saca el elemento del tope de la pila
											}
											else
											{
												printf("Los elementos no coinciden     %c    distinto de     %c     , en linea  %d\n\n",w.llave,c,w.lg);
												AUX=1;
											}
										}
											break;
									}
								case ']':
									{
										if(empty(llaves))
										{
											printf("Falta una llave de apertura para   %c, en linea  %d\n\n",c,w.lg);
											AUX=1;
											break;
										}
										else
										{
											if(top(llaves).llave=='[' && c==']')    //Si los tipos coinciden
											{
												w=pop(&llaves);			//Se saca el elemento del tope de la pila
											}
											else
											{
												printf("Los elementos no coinciden     %c    distinto de     %c     , en linea  %d\n\n",w.llave,c,w.lg);
												AUX=1;
											}
										}
											break;
									}
								case ')':
									{
										if(empty(llaves))
										{
											printf("Falta una llave de apertura para   %c, en linea  %d\n\n",c,w.lg);
											AUX=1;
											break;
										}
										else
										{
											if(top(llaves).llave=='(' && c==')')     //Si los tipos coinciden
											{
												w=pop(&llaves);			//Se saca el elemento del tope de la pila
											}
											else
											{
												printf("Los elementos no coinciden     %c    distinto de     %c     , en linea  %d\n\n",w.llave,c,w.lg);
												AUX=1;
											}
										}
											break;
									}
								case '\n':
									{
										linea++;
										w.lg=linea;
										break;
									}
							}
						}
						if(empty(llaves) && AUX==0)
						{
							printf("\n ARCHIVO BALANCEADO\n");
						}
						else if(empty(llaves) && AUX==1)
						{
							break;
						}
						else
						{
							do
							{
								w=top(llaves);
								printf("Quedaron elementos en la pila...  Linea:  %d \n\n",w.lg);
								w=pop(&llaves);
							}
							while(!empty(llaves));					//Mientras la pila no este vacía o existan elementos en ella.
						}
					}
					fclose(A);
					break;
				}
			case 3:
				{
					A=fopen("3.c","r");
					if(A==NULL)
					{
						puts("No se asigno el espacio de memoria");
						system("Pause");
						exit (1);
					}
					else
					{
						ini_pila(&llaves);
						linea=1;
						w.lg=1;
						c='v';
						while(c!=EOF)
						{
							c=fgetc(A);
							switch (c)
							{
								case '{':
									{
										w.llave=c; 					//Si encuentra una llave que abre mientras lee el archivo, la guarda en la pila
										push(&llaves,w);
										break;
									}
									case '[':
									{
										w.llave=c; 					//Si encuentra una llave que abre mientras lee el archivo, la guarda en la pila
										push(&llaves,w);
										break;
									}
									case '(':
									{
										w.llave=c; 					//Si encuentra una llave que abre mientras lee el archivo, la guarda en la pila
										push(&llaves,w);
										break;
									}
								case '}':
									{
							
										if(empty(llaves))
										{
											printf("Falta una llave de apertura para   %c, en linea  %d\n\n",c,w.lg);
											AUX=1;
											break;
										}
										else
										{
											if(top(llaves).llave=='{' && c=='}')     //Si los tipos coinciden
											{
												w=pop(&llaves);			//Se saca el elemento del tope de la pila
											}
											else
											{
												printf("Los elementos no coinciden     %c    distinto de     %c     , en linea  %d\n\n",w.llave,c,w.lg);
												AUX=1;
											}
										}
											break;
									}
								case ']':
									{
										if(empty(llaves))
										{
											printf("Falta una llave de apertura para   %c, en linea  %d\n\n",c,w.lg);
											AUX=1;
											break;
										}
										else
										{
											if(top(llaves).llave=='[' && c==']')     //Si los tipos coinciden
											{
												w=pop(&llaves);			//Se saca el elemento del tope de la pila
											}
											else
											{
												printf("Los elementos no coinciden     %c    distinto de     %c     , en linea  %d\n\n",w.llave,c,w.lg);
												AUX=1;
											}
										}
											break;
									}
								case ')':
									{
										if(empty(llaves))
										{
											printf("Falta una llave de apertura para   %c, en linea  %d\n\n",c,w.lg);
											AUX=1;
											break;
										}
										else
										{
											if(top(llaves).llave=='(' && c==')')     //Si los tipos coinciden
											{
												w=pop(&llaves);			//Se saca el elemento del tope de la pila
											}
											else
											{
												printf("Los elementos no coinciden     %c    distinto de     %c     , en linea  %d\n\n",w.llave,c,w.lg);
												AUX=1;
											}
										}
											break;
									}
								case '\n':
									{
										linea++;
										w.lg=linea;
										break;
									}
							}
						}
						if(empty(llaves) && AUX==0)
						{
							printf("\n ARCHIVO BALANCEADO\n");
						}
						else if(empty(llaves) && AUX==1)
						{
							break;
						}
						else
						{
							do
							{
								w=top(llaves);
								printf("Quedaron elementos en la pila...  Linea:  %d \n\n",w.lg);
								w=pop(&llaves);
							}
							while(!empty(llaves));					//Mientras la pila no este vacía o existan elementos en ella.
						}
					}
					fclose(A);
					break;
				}
			case 4:
				{
					A=fopen("4.c","r");
					if(A==NULL)
					{
						puts("No se asigno el espacio de memoria");
						system("Pause");
						exit (1);
					}
					else
					{
						ini_pila(&llaves);
						linea=1;
						w.lg=1;
						c='v';
						while(c!=EOF)
						{
							c=fgetc(A);
							switch (c)
							{
								case '{':
									{
										w.llave=c; 					//Si encuentra una llave que abre mientras lee el archivo, la guarda en la pila
										push(&llaves,w);
										break;
									}
									case '[':
									{
										w.llave=c; 					//Si encuentra una llave que abre mientras lee el archivo, la guarda en la pila
										push(&llaves,w);
										break;
									}
									case '(':
									{
										w.llave=c; 					//Si encuentra una llave que abre mientras lee el archivo, la guarda en la pila
										push(&llaves,w);
										break;
									}
								case '}':
									{
							
										if(empty(llaves))
										{
											printf("Falta una llave de apertura para   %c, en linea  %d\n\n",c,w.lg);
											AUX=1;
											break;
										}
										else
										{
											if(top(llaves).llave=='{' && c=='}')     //Si los tipos coinciden
											{
												w=pop(&llaves);			//Se saca el elemento del tope de la pila
											}
											else
											{
												printf("Los elementos no coinciden     %c    distinto de     %c     , en linea  %d\n\n",w.llave,c,w.lg);
												AUX=1;
											}
										}
											break;
									}
								case ']':
									{
										if(empty(llaves))
										{
											printf("Falta una llave de apertura para   %c, en linea  %d\n\n",c,w.lg);
											AUX=1;
											break;
										}
										else
										{
											if(top(llaves).llave=='[' && c==']')     //Si los tipos coinciden
											{
												w=pop(&llaves);			//Se saca el elemento del tope de la pila
											}
											else
											{
												printf("Los elementos no coinciden     %c    distinto de     %c     , en linea  %d\n\n",w.llave,c,w.lg);
												AUX=1;
											}
										}
											break;
									}
								case ')':
									{
										if(empty(llaves))
										{
											printf("Falta una llave de apertura para   %c, en linea  %d\n\n",c,w.lg);
											AUX=1;
											break;
										}
										else
										{
											if(top(llaves).llave=='(' && c==')')     //Si los tipos coinciden
											{
												w=pop(&llaves);			//Se saca el elemento del tope de la pila
											}
											else
											{
												printf("Los elementos no coinciden     %c    distinto de     %c     , en linea  %d\n\n",w.llave,c,w.lg);
												AUX=1;
											}
										}
											break;
									}
								case '\n':
									{
										linea++;
										w.lg=linea;
										break;
									}
							}
						}
						if(empty(llaves) && AUX==0)
						{
							printf("\n ARCHIVO BALANCEADO\n");
						}
						else if(empty(llaves) && AUX==1)
						{
							break;
						}
						else
						{
							do
							{
								w=top(llaves);
								printf("Quedaron elementos en la pila...  Linea:  %d \n\n",w.lg);
								w=pop(&llaves);
							}
							while(!empty(llaves));					//Mientras la pila no este vacía o existan elementos en ella.
						}
					}
					fclose(A);
					break;
				}
			case 5:
				{exit(1);}
			default:
				{
					puts("Opcion erronea");
					break;
				}
		}
		printf("\n\nDeseas analizar otro archivo\?\n");
		printf("Si---->1\nNO----->2\n");
		scanf("%d",&op);
	} while(op==1);
	
	
	return 0;
	system("pause");
}
