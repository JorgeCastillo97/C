#include <stdio.h>
#include <stdlib.h>

int main()
{
	int n,np=0, nim=0, sp=0, sim=0;
	printf("Este programa muestra al cantidad de numeros pares e impares introducidos por el usuario \nAsi como su respectiva sumatoria de cada uno.\n\n");
	printf("Introduzca los numeros (Presione CTRL+Z y enter para terminar)\n");
	while(((scanf("%d",&n)))!=EOF)   //End Of File (Programa termina de ler datos al presionar Ctrl+z+ enter)
	{
	if(n%2==0)
	{
		np+=1;
		sp+=n;
	}
	else
	{
		nim+=1;
		sim+=n;
	}
	}
	printf("Se encontraron %d numeros pares.\n",np);
	printf("Sumatoria de numeros pares: %d \n",sp);
	printf("Se encontraron %d numeros impares.\n",nim);
	printf("Sumatoria de numeros impares: %d \n",sim);
	system("pause");
	return 0;
}
