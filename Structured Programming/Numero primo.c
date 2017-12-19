#include <stdio.h>
#include <stdlib.h>

int main()
{
	system("color 4f");
	int n,i,ndivisores=0;
	printf("Introduce un numero entero:\n");
	scanf("%d",&n);
	i=1;
	
	do
	{
		n%i;
		if (n%i==0)
		{
			ndivisores++;
		}
		i++;
	}
	while(i<=n);
	if (ndivisores>2)
		{
			printf("\nEl numero no es primo.\n");
		}
		else
		{
			printf("\nEl numero es primo.\n");
		}
	system("pause");
	return 0;
}
