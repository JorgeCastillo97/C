#include <stdio.h>
#include <stdlib.h>
#include "pila.h"
#include <string.h>
#include <time.h>

void balancear(char P[],int l,FILE *temp);
void derivar(char P[],FILE *f,int len);

int main(int argc, char *argv[]) {
	
	int op,caso, AUX=0,i,r,z,a,c;
	FILE *p=NULL;
	char ch,P[1200];
	NODO w;
	pila parentesis;
	
	p=fopen("parentesis.txt","w");
	if(p==NULL)
	{
		puts("No se asigno el espacio de memoria");
		system("Pause");
		exit (1);
	}
	else
	{
		fputs("\t\t\t\t\t\t\tDERIVACIONES\n\n",p);
		fputs("1)	B->(RB\n2)	B->e\n3)	R->)\n4)	R->(RR\n\n",p);
		fputs("\t\t\t\t\t\t\tHISTORIAL DE EVALUACION\n\n",p);
	}
	
	do
	{
		srand(time(NULL));
		
		printf("Selecciona una opcion:\n\n");
		printf("1 Generar cadena automaticamente\n");
		printf("2 Introducir cadena manualmente\n");
		printf("3 Salir\n");
		scanf("%d",&caso);
		
		fputc('\n',p);
		switch(caso)
		{
			case 1:
				{					
					do
					{
						r=rand()%1000;
					}while(r==0 || r%2!=0);
					//printf("%d\n",r);
					for(i=0;i<r;i++)
					{
						if(i==0)
						{
							P[i]='(';
						}
						else
						{
							z=rand()%2;
							if(z==0)
							{
								P[i]='(';
							}
							else
							{
								P[i]=')';
							}
						}
					}
					P[i]='\0';
					//printf("Cadena Generada: %s\n",P);
					balancear(P,strlen(P),p);
					break;
				}
			case 2:
				{
					printf("Introduce la cadena de parentesis:\n");
					fflush(stdin);
					gets(P);
					//printf("Cadena generada: %s\n",P);
					balancear(P,strlen(P),p);
					break;
				}
		}
		system("pause");
		system("cls");
	}
	while(caso!=3);
	fclose(p);
	return 0;
}


void balancear(char P[],int l,FILE *temp)
{
	int i,a=0,y;
	NODO w;
	pila parentesis;
	ini_pila(&parentesis);
	
	for(i=0;i<l;i++)
	{
		switch(P[i])
		{
			case '(':
				{
					w.c=P[i];
					push(&parentesis,w);
					a++;
					break;
				}
			case ')':
				{
					if(empty(parentesis))
					{
						P[i]='(';
						a++;
						break;
					}
					else
					{
						if(top(parentesis).c=='(' && P[i]==')')
						{
							w=pop(&parentesis);
							a--;
						}
						else
						{
							a++;
						}
					}
					break;
				}
		}
	}
	
	for(y=0;y<a;y++)
	{
		P[i]=')';
		i++;
	}
	P[i]='\0';
	/*printf("Cadena balanceada:\n");
	for(i=0;i<strlen(P);i++)
	{
		printf("%c",P[i]);
	}*/
	i=0;
	//printf("\n");
	fputs("cadena: ",temp);
	fputs(P,temp);
	fputs("\n\n",temp);
	derivar(P,temp,strlen(P));
}

void derivar(char P[],FILE *f,int len)
{
	int i,j,k,aux,aux2;
	fputs("B\n",f);
	//printf("B\n");
	for(i=0;i<len;i++)
	{
		j=i;
		for(k=0;k<=j;k++)
		{
			fputc(P[k],f);
			//printf("%c",P[k]);
		}
		switch(P[i])
		{
			case '(':
				{
					if(aux==0)
					{
						fputs("RB\t",f);
						fputs("1",f);
						/*printf("RB\t");
						printf("1");*/
						aux=1;
					}
					else
					{
						fputs("RR\t",f);
						fputs("4",f);
						/*printf("RR\t");
						printf("4");*/
					}
					break;
				}
			case ')':
				{
					if(aux==1)
					{
						fputs("BR\t",f);
						fputs("3",f);
						/*printf("RB\t");
						printf("3");*/
						aux=0;
					}
					else
					{
						fputs("B\t",f);
						fputs("3",f);
						/*printf("B\t");
						printf("3");*/
					}
					break;
				}
		}
		//printf("\n");
		fputc('\n',f);
	}
	fputs(P,f);
	fputs("e\t",f);
	fputs("2",f);
	fputs("\n",f);
	/*printf("%se\t",P);
	printf("2");
	printf("\n");*/
}
