#include <stdio.h>

int main()
{
	int n,esp=0,i,j,k,l,aux;
	
	printf("Introduce un numero entero entre 1 y 9:\n");
	scanf("%d",&n);
	
	aux=0;
	for (i=0;n>=0;i++)
	{
		
		for (j=0;j<=n;j++)				//Ciclo imprime numeros ascendentemente
		{
			printf("%d",j);
		}
		
		if (esp==0)
		{
			printf("");
		}
		else
		{								//Ciclo imprime espacios en blanco
			for (k=0;k<aux;k++)
			{
				printf(" ");
				printf(" ");
			}
		}
		
		for (l=n;l>=0;l--)				//Ciclo imprime numeros descendentemente
		{
			printf("%d",l);
		}
		printf("\n");
		//esp+=2;
		esp++;
		n--;
		aux++;
	}
	printf("\n");
	return 0;
}
