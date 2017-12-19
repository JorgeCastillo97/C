#include <stdio.h>
#include <stdlib.h>

int main()
{	
	int n,suma=0,np,i,aux;
	
	printf("Introduce un numero entero:\n");
	scanf("%d",&n);
	if (n==1)
	{
		printf("Es un numero perfecto!\n");
	}
	else
	{
		for(i=1;i<n;i++)
		{
			if (n%i==0)
			{
				suma+=i;
			}
		}
	}
	if(suma==n)
	{
		printf("Es un numero perfecto!\n");
	}
	else
	{
		printf("No es un numero perfecto\n");
	}
	system("pause");
	return 0;
}
