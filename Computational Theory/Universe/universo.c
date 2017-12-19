#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#include <time.h>

void enviar (char C[], int length, char N,char M, FILE *f);
void coma(FILE *f);

int main(){
	
	int com,y,len,i,op,M,limit,s;
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
						printf("Introduce el limite: \n");
						scanf("%d",&limit);
						printf("Introduce el primer caracter:\n");
						fflush(stdin);
						scanf("%c",&a);
						printf("Introduce el segundo caracter:\n");
						fflush(stdin);
						scanf("%c",&b);
						break;
					}
				case 2:
					{
						limit=int(rand()%100);
						a=char(rand()%255);
						b=char(rand()%255);
						break;
					}
					
			}
	
	printf("Valor del limite: %d\n",limit);
	printf("Simbolos seleccionados: %c        %c\n",a,b);
	
	for(i=1;i<=limit;i++)
	{
		com+=pow(2,i);
	}
	
	system("pause");
	printf("\n\n\n\t\t******************\n\t\tCopia Realizada... \n\t\t******************\n\n\n");
	
	//printf("{");
	fputc('{',f);
	
	for(s=0;s<=limit;s++)
	{
		if(s==0)
		{
			//printf("e");
			fputc('e',f);
			coma(f);
		}
		else
		{
			char C[s];
			elem=pow(2,s);
			com+=elem;
			for(i=0;i<elem;i++)
			{
				for(y=0;y<s;y++)
				{
					C[y]=' ';
				}
				itoa(i,C,2);
				enviar(C,s,a,b,f);
				if(i>=(elem-1))
				{
					continue;
				}
				else
				{
					coma(f);
				}
			}
			if(s<=limit-1)
			{
				coma(f);
			}
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
	
	for(j=0;j<length;j++)
	{
		//printf("%c",C[j]);
	}
}

void coma(FILE *f){
	//printf(",");
	fputc(',',f);
}
