#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

//L((0+10)*(e+1))

int main()
{
	srand(time(NULL));
	int r,i,op,cont=0;
	FILE *f=fopen("generadas.txt","w");
	if(!f)
	{
		printf("ERROR!!\n");
		system("pause");
		exit(1);
	}
	fputs("\t\t\tCADENAS GENERADAS POR LA EXPRESION REGULAR L((0+10)*(e+1))\n\n",f);
	do
	{
		printf("Selecciona una opcion\n\t\t\t1)Generar Cadenas\n\t\t\t2)Salir\n\n");
		scanf("%d",&op);
		if(op==1)
		{
			while(cont<10)
			{
				r=rand()%2;
				if(r==0)
				{
					r=rand()%100;
					//Cerradura para 0
					for(i=0;i<r;i++)
					{
						fputc('0',f);
					}
					r=rand()%2;
					if(r==0)
					{
						//Cadena vacia
						continue;
					}
					else
					{
						fputc('1',f);
					}
				}
				else
				{
					r=rand()%100;
					//Cerradura para 01
					for(i=0;i<r;i++)
					{
						fputs("10",f);
					}
					r=rand()%2;
					if(r==0)
					{
						//Cadena vacia
						continue;
					}
					else
					{
						fputc('1',f);
					}
				}
				fputc('\n',f);
				cont++;
			}
			printf("CADENAS GENERADAS!\n");
			system("pause");
		}
		system("cls");
	}while(op!=2);
	
	return 0;
}
