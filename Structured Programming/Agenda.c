#include<stdlib.h>
#include<stdio.h>
#include<string.h>


struct ipersona{
	int		num_reg;
	char	nombres[30];
	char 	genero[10];
	int 	edad;
}typedef	idata;

	
void	getsdat(idata Var1[10]);
void	mostrar(idata Var1[10]);
void	ordenado(idata Var1[10]);
idata	Cop[10];


main()
{
	idata 	Var1[10];
	getsdat(Var1);
	mostrar(Var1);
	ordenado(Var1);

	return 0;	
}


void	getsdat(idata Var1[10])
{
	int	i;
	for	(i=0;i<10;i++)
	{
		Var1[i].num_reg=i;
		system("CLS");
		printf("Introduce el nombre de la persona %d : ",i+1);
		gets(Var1[i].nombres);
		getchar();
		printf("Introduce la edad de la persona %d : ",i+1);	
		scanf("%d",&Var1[i].edad);	
		getchar();
		printf("\nIntroduce el genero de la persona %d : ",i+1);
		gets(Var1[i].genero);
		Var1[i].num_reg++;
		getchar();
		system("CLS");
		
		
	}
	
}

void	mostrar(idata Var1[10])
{
	
		
		printf("DESORDENADO \n");
	
	int	i;
	for	(i=0;i<10;i++)
	{

		
		printf("El nombre de la persona %d : %s \n",i+1,Var1[i].nombres);


		printf("La edad de la persona %d : %d \n ",i+1,Var1[i].edad);	
	
	
		printf("El genero de la persona %d : %s \n ",i+1,Var1[i].genero);
		
		printf("El Registro es:  %d\n ",Var1[i].num_reg);


	}
	
	printf("\n");
	
}



void	ordenado(idata Var1[10])
{
	
	int i=0,z=0;
	for(z=0;z<9;z++)
	{
	for(i=0;i<9;i++)
	{
		
		if(strcmp(Var1[i].nombres,Var1[i+1].nombres)>0)
		{
			
		strcpy(Cop[i].nombres,Var1[i].nombres);
		fflush(stdin);
		strcpy(Cop[i].genero,Var1[i].genero);
		fflush(stdin);
		Cop[i].edad=Var1[i].edad;
		Cop[i].num_reg=Var1[i].num_reg;
	
		strcpy(Var1[i].nombres,Var1[i+1].nombres);
		fflush(stdin);
		strcpy(Var1[i].genero,Var1[i+1].genero);
		fflush(stdin);
		Var1[i].edad=Var1[i+1].edad;
		Var1[i].num_reg=Var1[i+1].num_reg;
		
		strcpy(Var1[i+1].nombres,Cop[i].nombres);
		fflush(stdin);
		strcpy(Var1[i+1].genero,Cop[i].genero);
		fflush(stdin);
		Var1[i+1].edad=Cop[i].edad;
		Var1[i+1].num_reg=Cop[i].num_reg;

		
		}
		else if(strcmp(Var1[i].nombres,Var1[i+1].nombres)<=0)
		{
			
		i++;

		}
		
		}
	}
	
	int j=0;
	
			printf("ORDENADO \n");
	
	for	(j=0;j<10;j++)
	{
	

		
		printf("El nombre de la persona %d : %s \n",j+1,Var1[j].nombres);


		printf("La edad de la persona %d : %d \n ",j+1,Var1[j].edad);	
	
	
		printf("El genero de la persona %d : %s \n ",j+1,Var1[j].genero);
		
		printf("El Registro es:  %d\n ",Var1[j].num_reg);

	}
	
	
}

