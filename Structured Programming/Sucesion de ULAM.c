#include <stdio.h>
#include <stdlib.h>

int main ()
{
	int n;
	printf("Este programa muestra la sucesion de ULAM.\n\n");
	printf("Introduce un valor entero positivo:\n");
	scanf("%d",&n);
	printf("Sucesion de ULAM.\n");
	if (n==1)
	{
		printf("%d",n);
	}
	else
	{
		printf("%d",n);
		while(n!=1)
		{
			if (n%2==0)
			{
				n=n/2;
				printf(",%d",n);
				if (n==1)
				{
					break;
				}
			}
			else
			{
				if (n%2!=0)
				{
					n=(n*3)+1;
					printf(",%d",n);
					if (n==1)
					{
						break;
					}
				}
			}
		}
	}
	printf("\n");
	system("pause");
	return 0;
}
