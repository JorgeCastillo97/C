										//RFC	1966 07 20		
										
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void nRFC(char nombre[], char paterno[], char materno[]);
void quitarMpalabras(char *RFC);
void nacimiento(char nac[]);
void juntarNombre(char nombre[], char app[], char apm[]);
void homo(char nomcom[]);
void asignaVal(char ALL[]);
void posiciones(char JUNTAR[]);

char JUNTAR[13];

int main(){
	char nombre[100];
	char app[50];
	char apm[50];
	char nac[11];
	printf("Introduce tu(s) nombre(s):\t");
	gets(nombre);
	printf("\nIntroduce tu apellido paterno:\t");
	gets(app);
	printf("\nIntroduce tu apellido materno:\t");
	gets(apm);
	printf("\nIntroduce tu fecha de nacimiento (AAAA_MM_DD):\t");
	gets(nac);
	printf("\n\n");
	strupr(nombre);
	strupr(app);
	strupr(apm);
	strupr(nac);
	nRFC(nombre,app,apm);
	nacimiento(nac);
	juntarNombre(nombre,app,apm);
	return 0;
}

void nRFC(char nombre[], char paterno[], char materno[])
{
	char NOM[4];
	int i=0;
	while(paterno[i]!='\0')
	{
		if (i==1)  //i==1
		{
			while(1){
				
			if (paterno[i]=='A'||paterno[i]=='E'||paterno[i]=='I'||paterno[i]=='O'||paterno[i]=='U')
			{
				NOM[1]=paterno[i];
				break;
			}
			else
			{
				i++;
			}
					}
		}
		NOM[i]=paterno[i];
		i++;
	}
	i=0;
	while(materno[i]!='\0')
	{
		NOM[2]=materno[i];
		break;
	}
	i=0;
	while (nombre[i]!='\0')
	{
		NOM[3]=nombre[i];
		break;
	}
	NOM[4]='\0';
	quitarMpalabras(NOM);
}

void quitarMpalabras(char NOM[5])
{
	char bad[41][5]={"BUEI","BUEY","CACA","CACO","CAGA","CAGO","CAKA","COGE","COJA","COJE","COJI","COJO","CULO","FETO","GUEY","JOTO","KACA","KAKO","KAGA","KAGO","KOGE","KOJO","KOJE","KAKA","KULO","MAME","MAMO","MEAR","MEON","MION","MOCO","MULA","PEDA","PEDO","PENE","PITO","PUTA","PUTO","QULO","RATA","RUIN"};
	for(int i=0;i<41;i++)
	{
		char* temp=&bad[i][0];
		if((strcmp(NOM,temp))==0)
		{
			NOM[3]='X';
			break;
		}
	}
	printf("\a\a");
	strcpy(JUNTAR,NOM);
}

void nacimiento(char nac[])
{
	int i=0;
	char FECHA[7];
	for(i;i<strlen(nac);i++)
	{
		if(i==2)
		{
			FECHA[0]=nac[i];
		}
		else if(i==3)
		{
			FECHA[1]=nac[i];
		}
		else if(i==5)
		{
			FECHA[2]=nac[i];
		}
		else if(i==6)
		{
			FECHA[3]=nac[i];
		}
		else if(i==8)
		{
			FECHA[4]=nac[i];
		}
		else if(i==9)
		{
			FECHA[5]=nac[i];
		}
	}
	FECHA[6]='\0';
	//printf("%s\n\n\n",FECHA);
	strcat(JUNTAR,FECHA);
}

void juntarNombre(char nombre[], char app[], char apm[])//28
{
	int x=strlen(nombre)+strlen(app)+strlen(apm)+2;		//sumar los 2 espacios: nombre[_]apellido[_]apellido
	//printf("Longuitud de la cadena nombre con espacios: %d\n",x);
	char NOMCOM[x+1];		//Longuitud de la cadena "nombre" mas fin de cadena
	strcpy(NOMCOM,nombre);
	strcat(NOMCOM," ");
	strcat(NOMCOM,app);
	strcat(NOMCOM," ");
	strcat(NOMCOM,apm);
	//printf("%s\n",NOMCOM);
	asignaVal(NOMCOM);
	
}

void asignaVal(char ALL[])
{
									//longuitud cadena nombre=22
	int z=0,NUMEROS[strlen(ALL)]; 	//Longuitud de la cadena numeros=22
	for(z;z<strlen(ALL);z++)
	{
		if (ALL[z]=='A')
			{
			NUMEROS[z]=11;
			}
		else if (ALL[z]=='B')
		{
			NUMEROS[z]=12;
		}
		else if (ALL[z]=='C')
		{
			NUMEROS[z]=13;
		}
		else if (ALL[z]=='D')
		{
			NUMEROS[z]=14;
		}
		else if (ALL[z]=='E')
		{
			NUMEROS[z]=15;
		}
		else if (ALL[z]=='F')
		{
			NUMEROS[z]=16;
		}
		else if (ALL[z]=='G')
		{
			NUMEROS[z]=17;
		}
		else if (ALL[z]=='H')
		{
			NUMEROS[z]=18;
		}
		else if (ALL[z]=='I')
		{
			NUMEROS[z]=19;
		}
		else if (ALL[z]=='J')
		{
			NUMEROS[z]=21;
		}
		else if (ALL[z]=='K')
		{
			NUMEROS[z]=22;
		}
		else if (ALL[z]=='L')
		{
			NUMEROS[z]=23;
		}else if (ALL[z]=='M')
		{
			NUMEROS[z]=24;
		}
		else if (ALL[z]=='N')
		{
			NUMEROS[z]=25;
		}
		else if ((ALL[z]=='¥')||(ALL[z]=='¤'))		//Ñ=40
		{
			NUMEROS[z]=40;
		}
		else if (ALL[z]=='O')
		{
			NUMEROS[z]=26;
		}
		else if (ALL[z]=='P')
		{
			NUMEROS[z]=27;
		}
		else if (ALL[z]=='Q')
		{
			NUMEROS[z]=28;
		}
		else if (ALL[z]=='R')
		{
			NUMEROS[z]=29;
		}
		else if (ALL[z]=='S')
		{
			NUMEROS[z]=32;
		}
		else if (ALL[z]=='T')
		{
			NUMEROS[z]=33;
		}
		else if (ALL[z]=='U')
		{
			NUMEROS[z]=34;
		}
		else if (ALL[z]=='V')
		{
			NUMEROS[z]=35;
		}
		else if (ALL[z]=='W')
		{
			NUMEROS[z]=36;
		}
		else if (ALL[z]=='X')
		{
			NUMEROS[z]=37;
		}
		else if (ALL[z]=='Y')
		{
			NUMEROS[z]=38;
		}
		else if (ALL[z]=='Z')
		{
			NUMEROS[z]=39;
		}
		else if (ALL[z]==' ')
		{
			NUMEROS[z]=00;
		}
		else if (ALL[z]=='0')
		{
			NUMEROS[z]=0;
		}
		else if (ALL[z]=='1')
		{
			NUMEROS[z]=1;
		}
		else if (ALL[z]=='2')
		{
			NUMEROS[z]=2;
		}
		else if (ALL[z]=='3')
		{
			NUMEROS[z]=3;
		}
		else if (ALL[z]=='4')
		{
			NUMEROS[z]=4;
		}
		else if (ALL[z]=='5')
		{
			NUMEROS[z]=5;
		}
		else if (ALL[z]=='6')
		{
			NUMEROS[z]=6;
		}
		else if (ALL[z]=='7')
		{
			NUMEROS[z]=7;
		}
		else if (ALL[z]=='8')
		{
			NUMEROS[z]=8;
		}
		else if (ALL[z]=='9')
		{
			NUMEROS[z]=9;
		}
		else if (ALL[z]=='&')
		{
			NUMEROS[z]=10;
		}
	}
	NUMEROS[z]='\0';
	
	/*int y=0;
	
	for (y;y<strlen(ALL);y++)
	{
		printf("NUMEROS[%d]=%d\n",y,NUMEROS[y]);
	}
	*/
	
	
	//CADENA DE ENTEROS CON VALOR DE 0 EN LA PRIMERA POSICION
	int aux=(strlen(ALL))+1,k=0,cont=0;
	char NUMC[aux];
	//Longuitud de la cadena NUMC=23
	
	NUMC[cont]=0;
	cont++;
	for (cont/*1*/;cont<=aux;cont++,k++/*K=0*/)
	{
		NUMC[cont]=NUMEROS[k];
	}
	NUMC[cont]='\0';
	
				//MUESTRA CADENA DE NUMEROS RESPECTO AL NOMBRE
	/*cont=0;
	for (cont;cont<aux;cont++)
	{
		printf("%d",NUMC[cont]);
	}*/
	
	int c=0,r=0,l=1,CONTADOR=0,RES,COCIENTE,RESIDUO;
	
	for(c;c<aux;c++)
	{
		NUMC[r]=NUMC[r]%10;
		NUMC[r]=(NUMC[r]*10)+(NUMC[l]/10);
		CONTADOR=CONTADOR+((NUMC[r])*(NUMC[l]/10));
		CONTADOR=CONTADOR+((NUMC[r+1])*(NUMC[l]%10));
		r++;
		l++;
	}
	printf("SUMA=%d\n\n",CONTADOR);
	RES=CONTADOR%1000;
	//printf("DIVISOR=%d\n\n",RES);
	COCIENTE=RES/34;
	//printf("COCIENTE=%d\n\n",COCIENTE);
	RESIDUO=RES%34;
	//printf("RESIDUO=%d\n\n",RESIDUO);*/
	
	//COCIENTE-RESIDUO
	char HOMONIMIA[2];
			//COCIENTE
	if (COCIENTE==0)
	{
		HOMONIMIA[0]='1';
	}
	else if (COCIENTE==1)
	{
		HOMONIMIA[0]='2';
	}
	else if (COCIENTE==2)
	{
		HOMONIMIA[0]='3';
	}
	else if (COCIENTE==3)
	{
		HOMONIMIA[0]='4';
	}
	else if (COCIENTE==4)
	{
		HOMONIMIA[0]='5';
	}
	else if (COCIENTE==5)
	{
		HOMONIMIA[0]='6';
	}
	else if (COCIENTE==6)
	{
		HOMONIMIA[0]='7';
	}
	else if (COCIENTE==7)
	{
		HOMONIMIA[0]='8';
	}
	else if (COCIENTE==8)
	{
		HOMONIMIA[0]='9';
	}
	else if (COCIENTE==9)
	{
		HOMONIMIA[0]='A';
	}
	else if (COCIENTE==10)
	{
		HOMONIMIA[0]='B';
	}
	else if (COCIENTE==11)
	{
		HOMONIMIA[0]='C';
	}
	else if (COCIENTE==12)
	{
		HOMONIMIA[0]='D';
	}
	else if (COCIENTE==13)
	{
		HOMONIMIA[0]='E';
	}
	else if (COCIENTE==14)
	{
		HOMONIMIA[0]='F';
	}
	else if (COCIENTE==15)
	{
		HOMONIMIA[0]='G';
	}
	else if (COCIENTE==16)
	{
		HOMONIMIA[0]='H';
	}
	else if (COCIENTE==17)
	{
		HOMONIMIA[0]='I';
	}
	else if (COCIENTE==18)
	{
		HOMONIMIA[0]='J';
	}
	else if (COCIENTE==19)
	{
		HOMONIMIA[0]='K';
	}
	else if (COCIENTE==20)
	{
		HOMONIMIA[0]='L';
	}
	else if (COCIENTE==21)
	{
		HOMONIMIA[0]='M';
	}
	else if (COCIENTE==22)
	{
		HOMONIMIA[0]='N';
	}
	else if (COCIENTE==23)
	{
		HOMONIMIA[0]='P';
	}
	else if (COCIENTE==24)
	{
		HOMONIMIA[0]='Q';
	}
	else if (COCIENTE==25)
	{
		HOMONIMIA[0]='R';
	}
	else if (COCIENTE==26)
	{
		HOMONIMIA[0]='S';
	}
	else if (COCIENTE==27)
	{
		HOMONIMIA[0]='T';
	}
	else if (COCIENTE==28)
	{
		HOMONIMIA[0]='U';
	}
	else if (COCIENTE==29)
	{
		HOMONIMIA[0]='V';
	}
	else if (COCIENTE==30)
	{
		HOMONIMIA[0]='W';
	}
	else if (COCIENTE==31)
	{
		HOMONIMIA[0]='X';
	}
	else if (COCIENTE==32)
	{
		HOMONIMIA[0]='Y';
	}
	else if (COCIENTE==33)
	{
		HOMONIMIA[0]='Z';
	}
	
				//RESIDUO
	if (RESIDUO==0)
	{
		HOMONIMIA[1]='1';
	}
	else if (RESIDUO==1)
	{
		HOMONIMIA[1]='2';
	}
	else if (RESIDUO==2)
	{
		HOMONIMIA[1]='3';
	}
	else if (RESIDUO==3)
	{
		HOMONIMIA[1]='4';
	}
	else if (RESIDUO==4)
	{
		HOMONIMIA[1]='5';
	}
	else if (RESIDUO==5)
	{
		HOMONIMIA[1]='6';
	}
	else if (RESIDUO==6)
	{
		HOMONIMIA[1]='7';
	}
	else if (RESIDUO==7)
	{
		HOMONIMIA[1]='8';
	}
	else if (RESIDUO==8)
	{
		HOMONIMIA[1]='9';
	}
	else if (RESIDUO==9)
	{
		HOMONIMIA[1]='A';
	}
	else if (RESIDUO==10)
	{
		HOMONIMIA[1]='B';
	}
	else if (RESIDUO==11)
	{
		HOMONIMIA[1]='C';
	}
	else if (RESIDUO==12)
	{
		HOMONIMIA[1]='D';
	}
	else if (RESIDUO==13)
	{
		HOMONIMIA[1]='E';
	}
	else if (RESIDUO==14)
	{
		HOMONIMIA[1]='F';
	}
	else if (RESIDUO==15)
	{
		HOMONIMIA[1]='G';
	}
	else if (RESIDUO==16)
	{
		HOMONIMIA[1]='H';
	}
	else if (RESIDUO==17)
	{
		HOMONIMIA[1]='I';
	}
	else if (RESIDUO==18)
	{
		HOMONIMIA[1]='J';
	}
	else if (RESIDUO==19)
	{
		HOMONIMIA[1]='K';
	}
	else if (RESIDUO==20)
	{
		HOMONIMIA[1]='L';
	}
	else if (RESIDUO==21)
	{
		HOMONIMIA[1]='M';
	}
	else if (RESIDUO==22)
	{
		HOMONIMIA[1]='N';
	}
	else if (RESIDUO==23)
	{
		HOMONIMIA[1]='P';
	}
	else if (RESIDUO==24)
	{
		HOMONIMIA[1]='Q';
	}
	else if (RESIDUO==25)
	{
		HOMONIMIA[1]='R';
	}
	else if (RESIDUO==26)
	{
		HOMONIMIA[1]='S';
	}
	else if (RESIDUO==27)
	{
		HOMONIMIA[1]='T';
	}
	else if (RESIDUO==28)
	{
		HOMONIMIA[1]='U';
	}
	else if (RESIDUO==29)
	{
		HOMONIMIA[1]='V';
	}
	else if (RESIDUO==30)
	{
		HOMONIMIA[1]='W';
	}
	else if (RESIDUO==31)
	{
		HOMONIMIA[1]='X';
	}
	else if (RESIDUO==32)
	{
		HOMONIMIA[1]='Y';
	}
	else if (RESIDUO==33)
	{
		HOMONIMIA[1]='Z';
	}
	HOMONIMIA[2]='\0';
	
	//printf("Homonimia: %s\n\n\n",HOMONIMIA);
	strcat(JUNTAR,HOMONIMIA);
	
	//printf("CADENA SIN ASIGNAR VALORES:%s\n",JUNTAR);
	posiciones (JUNTAR);
}


								//ULTIMO DIGITO DEL RFC


void posiciones(char JUNTAR[])
{
	//printf("Longuitud de la cadena JUNTAR: %d\n",strlen(JUNTAR));
	int help,NOS[strlen(JUNTAR)];
	for(help=0;help<strlen(JUNTAR);help++)
	{
		if (JUNTAR[help]=='A')
			{
			NOS[help]=10;
			}
		else if (JUNTAR[help]=='B')
		{
			NOS[help]=11;
		}
		else if (JUNTAR[help]=='C')
		{
			NOS[help]=12;
		}
		else if (JUNTAR[help]=='D')
		{
			NOS[help]=13;
		}
		else if (JUNTAR[help]=='E')
		{
			NOS[help]=14;
		}
		else if (JUNTAR[help]=='F')
		{
			NOS[help]=15;
		}
		else if (JUNTAR[help]=='G')
		{
			NOS[help]=16;
		}
		else if (JUNTAR[help]=='H')
		{
			NOS[help]=17;
		}
		else if (JUNTAR[help]=='I')
		{
			NOS[help]=18;
		}
		else if (JUNTAR[help]=='J')
		{
			NOS[help]=19;
		}
		else if (JUNTAR[help]=='K')
		{
			NOS[help]=20;
		}
		else if (JUNTAR[help]=='L')
		{
			NOS[help]=21;
		}else if (JUNTAR[help]=='M')
		{
			NOS[help]=22;
		}
		else if (JUNTAR[help]=='N')
		{
			NOS[help]=23;
		}
		else if (JUNTAR[help]=='Ñ')		//Ñ=38
		{
			NOS[help]=38;
		}
		else if (JUNTAR[help]=='O')
		{
			NOS[help]=25;
		}
		else if (JUNTAR[help]=='P')
		{
			NOS[help]=26;
		}
		else if (JUNTAR[help]=='Q')
		{
			NOS[help]=27;
		}
		else if (JUNTAR[help]=='R')
		{
			NOS[help]=28;
		}
		else if (JUNTAR[help]=='S')
		{
			NOS[help]=29;
		}
		else if (JUNTAR[help]=='T')
		{
			NOS[help]=30;
		}
		else if (JUNTAR[help]=='U')
		{
			NOS[help]=31;
		}
		else if (JUNTAR[help]=='V')
		{
			NOS[help]=32;
		}
		else if (JUNTAR[help]=='W')
		{
			NOS[help]=33;
		}
		else if (JUNTAR[help]=='X')
		{
			NOS[help]=34;
		}
		else if (JUNTAR[help]=='Y')
		{
			NOS[help]=35;
		}
		else if (JUNTAR[help]=='Z')
		{
			NOS[help]=36;
		}
		else if (JUNTAR[help]==' ')
		{
			NOS[help]=37;
		}
		else if (JUNTAR[help]=='0')
		{
			NOS[help]=0;
		}
		else if (JUNTAR[help]=='1')
		{
			NOS[help]=1;
		}
		else if (JUNTAR[help]=='2')
		{
			NOS[help]=2;
		}
		else if (JUNTAR[help]=='3')
		{
			NOS[help]=3;
		}
		else if (JUNTAR[help]=='4')
		{
			NOS[help]=4;
		}
		else if (JUNTAR[help]=='5')
		{
			NOS[help]=5;
		}
		else if (JUNTAR[help]=='6')
		{
			NOS[help]=6;
		}
		else if (JUNTAR[help]=='7')
		{
			NOS[help]=7;
		}
		else if (JUNTAR[help]=='8')
		{
			NOS[help]=8;
		}
		else if (JUNTAR[help]=='9')
		{
			NOS[help]=9;
		}
		else if (JUNTAR[help]=='&')
		{
			NOS[help]=24;
		}
	}
	NOS[help]='\0';
	/*printf("NOS[0]=%d\n",NOS[0]);
	printf("NOS[1]=%d\n",NOS[1]);
	printf("NOS[2]=%d\n",NOS[2]);
	printf("NOS[3]=%d\n",NOS[3]);
	printf("NOS[4]=%d\n",NOS[4]);
	printf("NOS[5]=%d\n",NOS[5]);
	printf("NOS[6]=%d\n",NOS[6]);
	printf("NOS[7]=%d\n",NOS[7]);
	printf("NOS[8]=%d\n",NOS[8]);
	printf("NOS[9]=%d\n",NOS[9]);
	printf("NOS[10]=%d\n",NOS[10]);
	printf("NOS[11]=%d\n",NOS[11]);*/
	//printf("CADENA CON VALORES:%d\n",NOS);
	
	int ACUMULAR=0,decre=13,contar,resi;
	for(contar=0;contar<strlen(JUNTAR);contar++)
	{
		ACUMULAR=ACUMULAR+(NOS[contar]*decre);
		decre--;
	}
	//printf("TOTAL:%d\n",ACUMULAR);
	resi=ACUMULAR%11;
	//printf("%d\n",resi);
	char UNUM[1];
	
	if (resi==10)
	{
		strcat(JUNTAR,"A");
	}
	else if (resi==0)
	{
		UNUM[0]='0';
		strcat(JUNTAR,UNUM);
	}
	else if (resi>0)
	{
		if ((11-resi)==1)
		{
			UNUM[0]='1';
			strcat(JUNTAR,UNUM);
		}
		else if ((11-resi)==2)
		{
			UNUM[0]='2';
			strcat(JUNTAR,UNUM);
		}
		else if ((11-resi)==3)
		{
			UNUM[0]='3';
			strcat(JUNTAR,UNUM);
		}
		else if ((11-resi)==4)
		{
			UNUM[0]='4';
			strcat(JUNTAR,UNUM);
		}
		else if ((11-resi)==5)
		{
			UNUM[0]='5';
			strcat(JUNTAR,UNUM);
		}
		else if ((11-resi)==6)
		{
			UNUM[0]='6';
			strcat(JUNTAR,UNUM);
		}
		else if ((11-resi)==7)
		{
			UNUM[0]='7';
			strcat(JUNTAR,UNUM);
		}
		else if ((11-resi)==8)
		{
			UNUM[0]='8';
			strcat(JUNTAR,UNUM);
		}
		else if ((11-resi)==9)
		{
			UNUM[0]='9';
			strcat(JUNTAR,UNUM);
		}
	}
	
	printf("\t\tTU RFC ES: %s\n",JUNTAR);
}
