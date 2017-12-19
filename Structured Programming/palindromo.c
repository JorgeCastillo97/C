#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void cambio(char c[]);
int comparar(char A[],char B[]);

int main ()
{
	int i,j,p;
	char A[100];
	
	printf("Introduce una frase:\n");
	scanf("%[^\n]",&A);
	
	char sesp[strlen(A)];
	
	j=i=0;
	while (A[i]!='\0')
	{
		if (A[i]!=' ' || A[i]!=32)
		{
			sesp[j]=A[i];
			j++;
		}
		i++;
	}
	sesp[j]='\0';
	strlwr(sesp);
	cambio(sesp);
	return 0;
}


void cambio (char c[])
{
	int i=strlen(c)-1,aux=0,p;
	char INV[strlen(c)];
	while(i>=0)
	{
		INV[aux]=c[i];
		i--;
		aux++;
	}
	INV[aux]='\0';
	//printf("CADENA INVERTIDA: %s\n\n",INV);
	p=comparar(c,INV);
	if(p==1)
	{
		printf("\nLa cadena introducida es un palindromo\n");
	}
	else
	{
		printf("\nLa cadena no es un palindromo\n");
	}
}

int comparar(char A[],char B[])
{
	if(!strcmp(A,B))
		return 1;
	
	return 0;
}
