#include <stdio.h>
#include <stdlib.h>

int main()
{
	int x,i=1,f=1;
	printf("Ingresa un numero para calcular su factorial:\n");
	scanf("%d",&x);
	do
	{
		f*=i;
		i++;
	}
	while (i<=x);
	printf("El factorial de %d es: %d\n",x,f);
	system("pause");
	return 0;
}
