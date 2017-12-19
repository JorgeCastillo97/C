#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include "pila.h"

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	int rnd,n,op,o,i,j,aux=0,z=1,c;
	pila p;
	NODO N;
	char ch;
	char str[2000];
	FILE *h=fopen("historia.txt","w");
	
	ini_pila(&p);
	fputs("\t\t\t'GOES TO' RELATION\n\n",h);
	do
	{
		
		printf("Introduce una opcion\n\t\t1)Modo Manual\n\t\t2)Modo automatico\n\t\t3)Salir\n\t");
		scanf("%d",&op);
		aux=0;
		srand(time(NULL));
		switch (op)
		{
			case 1:
				{
					FILE *f=fopen("cadena.txt","w");
					FILE *g=fopen("cadena.txt","rt");
					if(!f || !g)
					{			
						printf("ERROR!");
						system("pause");
						exit(1);
					}
					printf("Introduce la cadena de 0's y 1's:\n");
					fflush(stdin);
					scanf("%[^\n]",&str);
					fputs(str,f);
					fclose(f);
					if(aux==0)
						{
							fputs("d(q,",h);
							fputs(str,h);
							fputs(",Zo)",h);
							fputs("|-",h);
							aux=1;
						}
						
					while((ch=fgetc(g))!=EOF)
					{
						fputs("d(",h);	
						switch (ch)
						{
							case '0':
								{
									fputs("q,",h);
									for(i=z;i<(strlen(str));i++)
									{
										fputc(str[i],h);
									}
									fputc(',',h);
									N.c='X';
									push(&p,N);
									for(j=0;j<z;j++)
									{
										fputc(N.c,h);
									}
									break;
								}
							case '1':
								{
									fputs("p,",h);
									for(i=z;i<(strlen(str));i++)
									{
										fputc(str[i],h);
									}
									fputc(',',h);
									if(empty(p))
									{
										printf("La pila esta vacia!!\n\n");
										system("pause");
										break;
									}
									else if(top(p).c=='X')
									{
										N=pop(&p);
									}
									for(c=j;c>0;c--)
									{
										fputc('X',h);
									}
									break;
								}
						}
						z++;
						j--;
						fputs("Zo)",h);
						fputs("|-",h);
					}
					
					if(empty(p))
					{
						printf("Cadena Aceptada\n\n");
						fputs("*d(f,e,Zo)",h);
						fputc('\n',h);
					}
					else
					{
						printf("Cadena Invalida\n\n");
					}
					fclose(g);
					break;
				}
			case 2:
				{
					FILE *f=fopen("cadena.txt","w");
					FILE *g=fopen("cadena.txt","rt");
					if(!f || !g)
					{
						printf("ERROR!");
						system("pause");
						exit(1);
					}
					n=0;
					rnd=rand()%1000;
					while(n<rnd)
					{
						fputc('0',f);
						n++;
					}
					n=0;
					while(n<rnd)
					{
						fputc('1',f);
						n++;
					}
					fclose(f);
					
					fgets(str,1000,g);
					
					if(aux==0)
						{
							fputs("d(q,",h);
							fputs(str,h);
							fputs(",Zo)",h);
							fputs("|-",h);
							aux=1;
						}
					
					for(o=0;o<strlen(str);o++)
					{
						fputs("d(",h);
						switch (str[o])
						{
							case '0':
								{
									fputs("q,",h);
									for(i=z;i<(strlen(str));i++)
									{
										fputc(str[i],h);
									}
									fputc(',',h);
									N.c='X';
									push(&p,N);
									for(j=0;j<z;j++)
									{
										fputc(N.c,h);
									}
									break;
								}
							case '1':
								{
									fputs("p,",h);
									for(i=z;i<(strlen(str));i++)
									{
										fputc(str[i],h);
									}
									fputc(',',h);
									if(empty(p))
									{
										printf("La pila esta vacia!!\n\n");
										system("pause");
										break;
									}
									else if(top(p).c=='X')
									{
										N=pop(&p);
									}
									for(c=j;c>0;c--)
									{
										fputc('X',h);
									}
									break;
									if(empty(p))
									{
										printf("La pila esta vacia!!\n\n");
										system("pause");
										break;
									}
									else if(top(p).c=='X')
									{
										N=pop(&p);
									}
									fclose(g);
									break;
								}
						}
						z++;
						j--;
						fputs("Zo)",h);
						fputs("|-",h);
					}
					
					if(empty(p))
					{
						printf("Cadena Aceptada\n\n");
						fputs("*d(f,e,Zo)",h);
						fputc('\n',h);
					}
					else
					{
						printf("Cadena Invalida\n\n");
					}
				}
		}
		c=i=j=o=0;
		z=1;
		system("pause");
	system("cls");
	}while(op!=3);
	fclose(h);
	return 0;
}
