#include <stdio.h>
#include <stdlib.h>

//Este algoritmo convierte un numero en base 10 de tipo short int a base 2

int main(){
	short int n,restante,ocup=0,erest,nceros;
	printf("Introduce un número entero menor o igual a 255:\n");
	scanf("%d",&n);
	printf("El numero en base 2 es:\n");
	
	restante=n;
	do{						//Imprimir numero en base 2
		if (restante%2==0)
		{
			printf("0\n");
		}
		else
		{
			printf("1\n");
		}
		restante=restante/2;
		ocup=ocup+1;
	}
	while(restante>=1);
	erest=8-ocup;
	nceros=erest*1;		//             Ex: Si erest= 2, entonces nceros=2*1--->nceros=2
	if (nceros==0)
	{
		printf("");
	}
	else
	{
		do
		{
			printf("0\n");
			nceros=nceros-1;
		}
		while(nceros>0);
	}
	printf("espacios ocupados: %d\n",ocup);
	printf("espacios restantes: %d\n",erest);
	system("pause");
}
