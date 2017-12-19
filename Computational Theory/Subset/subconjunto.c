#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#include <time.h>

//Numero de elementos random o pedidos al usuario
//Alfabeto gernerado aleatoriamente o por usuario

//int bin(int x,int e,int A[][x]);

void enviar (char C[], int length, char N,char M, FILE *f);

int main()
{
	system("color 70");
	int x,y,len,i,op,M;
	double elem;
	char a,b;
	
	FILE *f=fopen("conjunto.txt","w");
	
	if(!f)
	{
		printf("¡ERROR!");
		system("pause");
		exit(1);
	}
	
	srand(time(NULL));
	do
	{
		system("cls");
		printf("Modo manual--->1\nModo automatico--->2\n");
		scanf("%d",&M);
		
		switch(M)
			{
				case 1:
					{
						printf("Introduce n: \n");
						scanf("%d",&x);
						printf("Introduce el primer caracter:\n");
						fflush(stdin);
						scanf("%c",&a);
						printf("Introduce el segundo caracter:\n");
						fflush(stdin);
						scanf("%c",&b);
						elem=pow(2,x);
						break;
					}
				case 2:
					{
						x=int(rand()%100);
						a=char(rand()%255);
						b=char(rand()%255);
						elem=pow(2,x);
						break;
					}
					
			}
	
	char C[x];
	printf("Valor de n: %d\n",x);
	printf("Elementos del conjunto: %.0lf\n",elem);
	printf("Simbolos seleccionados: %c        %c\n",a,b);
	system("pause");
	printf("\n\n\n\t\t******************\n\t\tCopia Realizada... \n\t\t******************\n\n\n");
	
	//printf("{");
	fputc('{',f);
	
	for(i=0;i<elem;i++)
	{
		for(y=0;y<x;y++)
		{
			C[y]=' ';
		}
		itoa(i,C,2);
		enviar(C,x,a,b,f);
		if(i>=(elem-1))
		{
			continue;
		}
		else
		{
			//printf(",");
			fprintf(f,"%c",',');
		}
	}
	//printf("}");
	fputc('}',f);
	fputc('\n',f);
	
		printf("\n\nRealizar otra copia\?\n");
		printf("1     Si\n");
		printf("2     No\n");
		scanf("%d",&op);
	} while(op==1);
	system("pause");
	return 0;
}


void enviar (char C[], int length, char N,char M, FILE *f)
{
	int j;
	
	strrev(C);
	
	for(j=0;j<length;j++)
	{
		if(C[j]!='1')
		{
			C[j]='0';
		}
	}
	C;
	strrev(C);
	
	for(j=0;j<length;j++)
	{
		if(C[j]=='"' || C[j]==34)
		{
			C[j]='0';
		}
	}
	
	//CAMBIO CARACTERES
	
	
	for(j=0;j<length;j++)
	{
		if(C[j]=='1')
		{
			C[j]=M;
			fputc(M,f);
		}
		else
		{
			C[j]=N;
			fputc(N,f);
		}
	}
	
	/*for(j=0;j<length;j++)
	{
		printf("%c",C[j]);
	}*/
}
