#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

int main()
{
	srand(time(NULL));
	int op,rnd,t,i,j=1,z,aux=0;
	char s,NUM[4];
	FILE *f=fopen("palindromo.txt","w");
	if(!f)
	{
		printf("Error al abrir el archivo\n");
		system("pause");
		exit(1);
	}
	fputs("\t\t\t\t\t\tPALINDROMOS GENERADOS\n\n",f);
	do
	{
		do
		{
			t=rand()%1000;
		}
		while(t%2!=0 || t==0);
		
		//printf("n=%d\n\n",t);
		fputs("n=",f);
		itoa(t,NUM,10);
		fputs(NUM,f);
		fputc('\n',f);
		char I[t/2], D[t/2];
		for(i=0;i<t/2;i++)
		{
			if(aux==0)
			{
				fputs("S=>",f);
				aux=1;
			}
			rnd=rand()%2;
			if(rnd==0)					//4
			{	//Obliga al arreglo guardar unicamente 0 ó 1 por cada iteración
				if(I[i]!='0' || I[i]!='1' || D[i]!='0' ||D[i]!='1')
				{
					I[i]='0';
					D[i]='0';
				}
				else
				{
					I[i]='0';
					D[i]='0';
				}
			}
			else						//5
			{	//Obliga al arreglo guardar unicamente 0 ó 1 por cada iteración
				if(I[i]!='0' || I[i]!='1' || D[i]!='0' ||D[i]!='1')
				{
					I[i]='1';
					D[i]='1';
				}
				else
				{
					I[i]='1';
					D[i]='1';
				}
			}
			for(z=0;z<j/*strlen(I)*/;z++)
			{
				//printf("%c",I[z]);
				fputc(I[z],f);
			}
			//printf("S");				//Caracter del medio
			fputc('S',f);
			for(z=0;z<j/*strlen(D)*/;z++)
			{
				//printf("%c",D[z]);
				fputc(D[z],f);
			}
			//printf("\n\n");
			fputs("=>",f);
			j++;
		}
		I[i]='\0';
		D[i]='\0';
		strrev(I);
		
		for(i=0,j=0;i<strlen(I);i++,j++)
		{
			//printf("%c",I[i]);
			fputc(I[i],f);
		}
		
		rnd=rand()%3;
		if(rnd==0)
		{
			//printf("0");
			fputc('0',f);
		}
		else if(rnd==1)
		{
			//printf("1");
			fputc('1',f);
		}
		else if(rnd==2)
		{
			//printf("e");
			fputc('e',f);
		}
		
		for(i=0;i<strlen(I);i++)
		{
			//printf("%c",D[i]);
			fputc(D[i],f);
		}
		printf("Palindromo generado...");
		j=1;
		aux=0;
		
		fputs("\n\n|||||||||||||||||||||||||||||||||||||||||||||||\n\n",f);
		printf("\n\nGenerar otra cadena?\n1--->Si\n2--->No\n");
		scanf("%d",&op);
		system("cls");
	}
	while(op!=2);
	printf("\n\nAbra el archivo 'palindromo.txt' para observar la salida\n");
	fclose(f);
	return 0;
	system("Pause");
}
