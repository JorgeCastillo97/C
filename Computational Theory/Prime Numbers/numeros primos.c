#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int conv(char S[]);
void primo(int n);

int main(){
	char c[100];
	char d[100];
	int op,n;
	
	while(1)
	{
		printf("Selecciona una opcion:\n\t\t1.Ingresar nombre\n\t\t2.Salir\n\t\t");
		fflush(stdin);
		scanf("%d",&op);
		if(op==1)
		{
			printf("Introduce tu nombre:  ");
			fflush(stdin);
			scanf("%[^\n]",&c);
			printf("Nombre registrado: %s\n",c);
			strupr(c);
			n=conv(c);
			itoa(n,d,2);
			printf("Conversion a binario: %s\n",d);
			primo(n);
			system("pause");
		}
		else
		{
			break;
		}
		system("cls");
	}
	return 0;
}

int conv(char S[])
{
	int i,sum=0;
	for(i=0;i<strlen(S);i++)
	{
		switch(S[i])
		{
			case 'A':
				{
					sum+=65;
					break;
				}
			case 'B':
				{
					sum+=66;
					break;
				}
			case 'C':
				{
					sum+=67;
					break;
				}
			case 'D':
				{
					sum+=68;
					break;
				}
			case 'E':
				{
					sum+=69;
					break;
				}
			case 'F':
				{
					sum+=70;
					break;
				}
			case 'G':
				{
					sum+=71;
					break;
				}
			case 'H':
				{
					sum+=72;
					break;
				}
			case 'I':
				{
					sum+=73;
					break;
				}
			case 'J':
				{
					sum+=74;
					break;
				}
			case 'K':
				{
					sum+=75;
					break;
				}
			case 'L':
				{
					sum+=76;
					break;
				}
			case 'M':
				{
					sum+=77;
					break;
				}
			case 'N':
				{
					sum+=78;
					break;
				}
			case 'Ñ':
				{
					sum+=165;
					break;
				}
			case 'O':
				{
					sum+=79;
					break;
				}
			case 'P':
				{
					sum+=80;
					break;
				}
			case 'Q':
				{
					sum+=81;
					break;
				}
			case 'R':
				{
					sum+=82;
					break;
				}
			case 'S':
				{
					sum+=83;
					break;
				}
			case 'T':
				{
					sum+=84;
					break;
				}
			case 'U':
				{
					sum+=85;
					break;
				}
			case 'V':
				{
					sum+=86;
					break;
				}
			case 'W':
				{
					sum+=87;
					break;
				}
			case 'X':
				{
					sum+=88;
					break;
				}
			case 'Y':
				{
					sum+=89;
					break;
				}
			case 'Z':
				{
					sum+=90;
					break;
				}
		}
	}
	printf("Sumatoria: %d\n",sum);
	return sum;
}

void primo(int n)
{
	int j=2,a;
	while(j<n)
	{
		if(n%j==0)
		{
			a=1;
			break;
		}
		else
		{
			a=0;
		}
		j++;
	}
	
	if(a==0)
	{
		printf("Es numero primo!!\n\n");
	}
	else
	{
		printf("No es numero primo.\n\n");
	}
}


