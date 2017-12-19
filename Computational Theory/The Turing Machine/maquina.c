#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

#define LIM 500

void maquina(char C[],FILE *f);
void imprimir(char C[],FILE *f);
void posicion(int s,FILE *f);

int main()
{
	int i,op,r;
	char M[1000];
	FILE *f=NULL;
	
	if(!(f=fopen("historial.txt","w")))
	{
		printf("Error al abrir el archivo");
	}
	else
	{
		fputs("\t\t\t\tHISTORIAL DE EVALUACIÓN\n\n",f);
		do
		{
			printf("1)\tModo automático\n2)\tModo manual\n3)\tSalir\n");
			scanf("%d",&op);
			switch (op)
			{
				case 1:
					{
						do
						{
							r=rand()%LIM;
						}
						while(r==0 || r%2!=0);
						for(i=0;i<r/2;i++)
						{
							M[i]='0';
						}
						for(i=r/2;i<r;i++)
						{
							M[i]='1';
						}
						M[i]='B';
						M[i+1]='\0';
						fputs("Cinta: ",f);
						fputs(M,f);
						fputc('\n',f);
						maquina(M,f);
						i=0;
						break;
					}
				case 2:
					{
						printf("Introduce la Cinta de 0's y 1's comenzando con 0\n");
						fflush(stdin);
						gets(M);
						strcat(M,"B");
						fputs("Cinta: ",f);
						fputs(M,f);
						fputc('\n',f);
						maquina(M,f);
						i=0;
						break;
					}
			}
			system("pause");
			system("cls");
		}
		while(op!=3);
	}
	
	return 0;
}

void maquina(char C[],FILE *f)
{
	int i=0,q;
	char e;
	q=0;
	e=q+48;
	fputs("    d(",f);
	fputc(e,f);
	fputc(',',f);
	imprimir(C,f);
	fputs(")\n",f);
	posicion(i,f);
	fputs(" |- ",f);
	while(1)
	{
		switch(q)
		{
			case 0:
				{
					e=q+48;
					fputs("d(",f);
					fputc(e,f);
					fputc(',',f);
					if(C[i]=='0')
					{
						C[i]='X';
						imprimir(C,f);
						fputs(")\n",f);
						posicion(i,f);
						fputs(" |- ",f);
						i++;
						q=1;				//q0---->q1
						e=q+48;
					}
					else if(C[i]=='Y')
					{
						imprimir(C,f);
						fputs(")\n",f);
						posicion(i,f);
						fputs(" |- ",f);
						i++;
						q=3;				//q0---->q3
						e=q+48;
					}
					else
					{
						goto ERROR;
					}
					break;
				}
			case 1:
				{
					e=q+48;
					fputs("d(",f);
					fputc(e,f);
					fputc(',',f);
					if(C[i]=='0')
					{
						imprimir(C,f);
						fputs(")\n",f);
						posicion(i,f);
						fputs(" |- ",f);
						i++;
					}
					else if(C[i]=='1')
					{
						C[i]='Y';
						imprimir(C,f);
						fputs(")\n",f);
						posicion(i,f);
						fputs(" |- ",f);
						i--;
						q=2;				//q1---->q2
						e=q+48;
					}
					else if(C[i]=='Y')
					{
						C[i]='Y';
						imprimir(C,f);
						fputs(")\n",f);
						posicion(i,f);
						fputs(" |- ",f);
						q=1;
						e=q+48;
						i++;
					}
					else
					{
						goto ERROR;
					}
					break;
				}
			case 2:
				{
					e=q+48;
					fputs("d(",f);
					fputc(e,f);
					fputc(',',f);
					if(C[i]=='0')
					{
						imprimir(C,f);
						fputs(")\n",f);
						posicion(i,f);
						fputs(" |- ",f);
						i--;
					}
					else if(C[i]=='X')
					{
						C[i]='X';
						imprimir(C,f);
						fputs(")\n",f);
						posicion(i,f);
						fputs(" |- ",f);
						i++;
						q=0;				//q2---->q0
						e=q+48;
					}
					else if(C[i]=='Y')
					{
						C[i]='Y';
						imprimir(C,f);
						fputs(")\n",f);
						posicion(i,f);
						fputs(" |- ",f);
						i--;
						q=2;
						e=q+48;
					}
					else
					{
						goto ERROR;
					}
					break;
				}
			case 3:
				{
					e=q+48;
					fputs("d(",f);
					fputc(e,f);
					fputc(',',f);
					if(C[i]=='Y')
					{
						C[i]=='Y';
						imprimir(C,f);
						fputs(")\n",f);
						posicion(i,f);
						fputs(" |- ",f);
						i++;
						q=3;
						e=q+48;
					}
					else if(C[i]=='B')
					{
						C[i]='B';
						imprimir(C,f);
						fputs(")\n",f);
						posicion(i,f);
						fputs(" |- ",f);
						i++;
						q=4;
						e=q+48;
					}
					else
					{
						goto ERROR;
					}
					break;
				}
			case 4:
				{
					e=q+48;
					fputs("d(",f);
					fputc(e,f);
					fputc(',',f);
					imprimir(C,f);
					fputs(")\n",f);
					fputs("\nCinta aceptada!\n\n",f);
					goto END;
				}
		}
	}
	ERROR:
		{
			fputs("\nCinta no aceptada!\n",f);
		}
		
	END:
		{
			fputs("Cinta final: ",f);
			fputs(C,f);
			fputs("\n\n",f);
		}
}

void imprimir(char C[],FILE *f)
{
	int j=0;
	char c;
	
	for(j=0;j<strlen(C);j++)
	{
		c=C[j];
		fputc(c,f);
	}
}

void posicion(int s,FILE *f)
{
	int a;
	for(a=0;a<8;a++)
	{
		fputs(" ",f);
	}
	for(a=0;a<s;a++)
	{
		fputs(" ",f);
	}
	fputs("^\n",f);
}
