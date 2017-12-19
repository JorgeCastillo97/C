#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void check(char c[],FILE *m,int len,int col,int fil);

int main(){
	
	int op,i=0,j,col=0,fil=1;
	char a,ch;
	char c[100];
	char t[10000];
	
	do
	{
	
		printf("Elige una opcion:\n\t\t1.Leer desde archivo\n\t\t2.Escribir texto manualmente\n\t\t3.Salir\n");
		scanf("%d",&op);
	
		switch(op)
		{
			case 1:
				{
					FILE *f=fopen("parrafo.txt","r");
					FILE *g=fopen("ing lectura.txt","w");
	
					if(!f || !g)
					{
						printf("¡ERROR!");
						system("pause");
						exit(1);
					}
	
					fputs("PALABRAS ENCONTRADAS:",g);
					fputs("\n\n",g);
					while((a=fgetc(f))!=EOF)
					{
						if(a==' ' || a==32)
						{
							c[i]='\0';
							col++;
							check(c,g,i,col,fil);
							i=0;
						}
						else if (a=='\n')
						{
							fil++;
							c[i]='\0';
							col=0;
						}
						else
						{
							c[i]=a;
							i++;
							col++;
						}
					}
					printf("\t\t*******************\n\t\tBUSQUEDA FINALIZADA\n\t\t*******************\n");
					fclose(f);
					fclose(g);
					system("pause");
					break;
				}
			case 2:
				{
					FILE *u=fopen("ing usuario.txt","w");
					FILE *temp=fopen("temp.txt","w");
					if(!u || !temp)
					{
						printf("¡ERROR!");
						system("pause");
						exit(1);
					}
					fputs("PALABRAS ENCONTRADAS:",u);
					fputs("\n\n",u);
					printf("Introduce el texto:\n");
					fflush(stdin);
					scanf("%[^\n]",&t);
					fputs(t,temp);
					fclose(temp);
					FILE *aux=fopen("temp.txt","r");
					
					while((a=fgetc(aux))!=EOF)
					{
						if(a==' ' || a==32)
						{
							c[i]='\0';
							col++;
							check(c,u,i,col,fil);
							i=0;
						}
						else if (a=='\n')
						{
							fil++;
							c[i]='\0';
							col=0;
						}
						else
						{
							c[i]=a;
							i++;
							col++;
						}
					}
					check(c,u,i,col,fil);
					printf("\t\t*******************\n\t\tBUSQUEDA FINALIZADA\n\t\t*******************\n");
					system("pause");
					fputc('\n',u);
					fclose(temp);
					fclose(u);
					break;
				}
		}
		system("cls");
	}while(op!=3);
	system("pause");
	return 0;
}

void check(char c[],FILE *m,int len,int col,int fil)
{
	int z;
	char cl[3];
	char fl[3];
	c;
	for(z=0;z<strlen(c);z++)
	{
		if(c[z]=='i')
		{
			z++;
			itoa(col,cl,10);
			itoa(fil,fl,10);
			if(c[z]=='n')
			{
				z++;
				if(c[z]=='g')
				{
					fputs(c,m);
					fputs("    columna: ",m);
					fputs(cl,m);
					fputs("    fila: ",m);
					fputs(fl,m);
					fputc('\n',m);
				}
			}
		}
	}
}
