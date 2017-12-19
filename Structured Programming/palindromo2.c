#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
	char c[100];
	printf("Introduce una cadena:\n");
	fflush(stdin);gets(c);
	if(!strcmp(c,strrev(c)))
	{
		printf("\nLa cadena introducida es un palindromo\n");
	}
	else
	{
		printf("\nLa cadena no es un palindromo\n");
	}
	system("pause");
	return 0;
}
