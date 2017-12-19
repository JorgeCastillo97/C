#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void CUATR(char NOMBRE[100], char APaterno [100], char AMaterno [100]);
char CUATRO [5], FECHA[7],COMPLETO[100],a,b,E[3],AP1[5],AP2[5],AP3[5];
int AP4,AP5;
void NAC(char Fecha[100]);
void Enti(int Entidad);
void PA(char APaterno[100],char AMaterno[100],char NOMBRE[100]);
int main(){
	char NOMBRE[100],APaterno[100], AMaterno [100], Fecha [100], Sexo[2];
	int Entidad;
	int x;
	printf("Escribe tu(s) nombre(s):");
	gets(NOMBRE);
	printf("\nEscribe tu apellido paterno:");
	gets(APaterno);
	printf("\nEscribe tu apellido materno:");
	gets(AMaterno);
	printf("\nEscribe tu fecha de nacimiento (aaaa-mm-dd):");
	gets(Fecha);
	printf("\nSexo {H o M} :");
	gets(Sexo);
	printf("\nSelecciona tu entidad federativa:\n");
	printf("\tAGUASCALIENTES---->[1]\t\t\t\n");
	printf("\tBAJA CALIFORNIA SUR---->[2]\t\t\t\n");   
	printf("\tCOAHUILA---->[3]\t\t\t\t\n");
	printf("\tCHIAPAS---->[4]\t\t\t\t\n");
	printf("\tDISTRITO FEDERAL---->[5]\t\t\t\n");
	printf("\tGUANAJUATO---->[6]\t\t\t\t\n");
	printf("\tHIDALGO---->[7]\t\t\t\t\n");  
	printf("\tMEXICO---->[8]\t\t\t\t\n");
	printf("\tMORELOS---->[9]\t\t\t\t\n");  
	printf("\tNUEVO LEON---->[10]\t\t\t\t\n"); 
	printf("\tPUEBLA---->[11]\t\t\t\t\n"); 
	printf("\tQUINTANA ROO---->[12]\t\t\t\n");
	printf("\tSINALOA---->[13]\t\t\t\t\n");	 
	printf("\tTABASCO---->[14]\t\t\t\t\n");
	printf("\tTLAXCALA---->[15]\t\t\t\t\n");	
	printf("\tYUCATAN---->[16]\t\t\t\t\n"); 
	printf("\tNACIDO EN EL EXTRANJERO---->[17]\t\t\n");
	printf("\tBAJA CALIFORNIA---->[18]\t\t\t\n"); 
	printf("\tCAMPECHE---->[19]\t\t\t\t\n");  
	printf("\tCOLIMA---->[20]\t\t\t\t\n"); 
	printf("\tCHIHUAHUA---->[21]\t\t\t\t\n");
	printf("\tDURANGO---->[22]\t\t\t\t\n"); 	  
	printf("\tGUERRERO---->[23]\t\t\t\t\n");   	
	printf("\tJALISCO---->[24]\t\t\t\t\n"); 	  
	printf("\tMICHOACAN---->[25]\t\t\t\t\n");  		
	printf("\tNAYARIT---->[26]\t\t\t\t\n");   	
	printf("\tOAXACA---->[27]\t\t\t\t\n");   	 
	printf("\tQUERETARO---->[28]\t\t\t\t\n");  	
	printf("\tSAN LUIS POTOSI---->[29]\t\t\t\n"); 	   
	printf("\tSONORA---->[30]\t\t\t\t\n");   	   
	printf("\tTAMAULIPAS---->[31]\t\t\t\t\n");  	  
	printf("\tVERACRUZ---->[32]\t\t\t\t\n");  
	printf("\tZACATECAS---->[33]\t\t\t\t\n");
	scanf("%d",&Entidad);
	strupr(NOMBRE);
	strupr(APaterno);
	strupr(AMaterno);
	strupr(Fecha);
	strupr(Sexo);
	CUATR(NOMBRE,APaterno,AMaterno);
	NAC(Fecha);
	printf("%s",Sexo);
	Enti(Entidad);
	PA(APaterno,AMaterno,NOMBRE);
}

void CUATR (char NOMBRE[100], char APaterno [100], char AMaterno [100])
{
	int i;
	while(APaterno[i]!='\0')
	{
		if (i==1)
		{
			if (APaterno[i]=='A'||APaterno[i]=='E'||APaterno[i]=='I'||APaterno[i]=='O'||APaterno[i]=='U')
			{
				CUATRO[i]=APaterno[i];
				break;
			}
		}
		CUATRO[i]=APaterno[i];
		i++;
	}
	i=0;
	while(AMaterno[i]!='\0')
	{
		CUATRO[2]=AMaterno[i];
		break;
	}
	
	while(NOMBRE[i]!='\0')
	{
		CUATRO[3]=NOMBRE[i];
		break;
	}
	CUATRO[4]='\0';
	
	if(strncmp(CUATRO,"BUEI",5)==0)
	{
	CUATRO[1]='X';
	}
	else if(strncmp(CUATRO,"BUEY",5)==0)
	{
	CUATRO[1]='X';
	}
	else if(strncmp(CUATRO,"CACA",5)==0)
	{
	CUATRO[1]='X';
	}
	else if(strncmp(CUATRO,"CACO",5)==0)
	{
	CUATRO[1]='X';
	}
	else if(strncmp(CUATRO,"CAGA",5)==0)
	{
	CUATRO[1]='X';
	}
	else if(strncmp(CUATRO,"CAGO",5)==0)
	{
	CUATRO[1]='X';
	}
	else if(strncmp(CUATRO,"CAKA",5)==0)
	{
	CUATRO[1]='X';
	}
	else if(strncmp(CUATRO,"COGE",5)==0)
	{
	CUATRO[1]='X';
	}
	else if(strncmp(CUATRO,"COJA",5)==0)
	{
	CUATRO[1]='X';
	}
	else if(strncmp(CUATRO,"COJE",5)==0)
	{
	CUATRO[1]='X';
	}
	else if(strncmp(CUATRO,"COJI",5)==0)
	{
	CUATRO[1]='X';
	}
	else if(strncmp(CUATRO,"COJO",5)==0)
	{
	CUATRO[1]='X';
	}
	else if(strncmp(CUATRO,"CULO",5)==0)
	{
	CUATRO[1]='X';
	}
	else if(strncmp(CUATRO,"FETO",5)==0)
	{
	CUATRO[1]='X';
	}
	else if(strncmp(CUATRO,"GUEY",5)==0)
	{
	CUATRO[1]='X';
	}
	else if(strncmp(CUATRO,"JOTO",5)==0)
	{
	CUATRO[1]='X';
	}
	else if(strncmp(CUATRO,"KACA",5)==0)
	{
	CUATRO[1]='X';
	}
	else if(strncmp(CUATRO,"KACO",5)==0)
	{
	CUATRO[1]='X';
	}
	else if(strncmp(CUATRO,"KAGA",5)==0)
	{
	CUATRO[1]='X';
	}
	else if(strncmp(CUATRO,"KAGO",5)==0)
	{
	CUATRO[1]='X';
	}
	else if(strncmp(CUATRO,"KOGE",5)==0)
	{
	CUATRO[1]='X';
	}
	else if(strncmp(CUATRO,"KOJO",5)==0)
	{
	CUATRO[1]='X';
	}
	else if(strncmp(CUATRO,"KAKA",5)==0)
	{
	CUATRO[1]='X';
	}
	else if(strncmp(CUATRO,"KULO",5)==0)
	{
	CUATRO[1]='X';
	}
	else if(strncmp(CUATRO,"MAME",5)==0)
	{
	CUATRO[1]='X';
	}
	else if(strncmp(CUATRO,"MAMO",5)==0)
	{
	CUATRO[1]='X';
	}
	else if(strncmp(CUATRO,"MEAR",5)==0)
	{
	CUATRO[1]='X';
	}
	else if(strncmp(CUATRO,"MEON",5)==0)
	{
	CUATRO[1]='X';
	}
	else if(strncmp(CUATRO,"MION",5)==0)
	{
	CUATRO[1]='X';
	}
	else if(strncmp(CUATRO,"MOCO",5)==0)
	{
	CUATRO[1]='X';
	}
	else if(strncmp(CUATRO,"MULA",5)==0)
	{
	CUATRO[1]='X';
	}
	else if(strncmp(CUATRO,"PEDA",5)==0)
	{
	CUATRO[1]='X';
	}
	else if(strncmp(CUATRO,"PEDO",5)==0)
	{
	CUATRO[1]='X';
	}
	else if(strncmp(CUATRO,"PENE",5)==0)
	{
	CUATRO[1]='X';
	}
	else if(strncmp(CUATRO,"PUTA",5)==0)
	{
	CUATRO[1]='X';
	}
	else if(strncmp(CUATRO,"PUTO",5)==0)
	{
	CUATRO[1]='X';
	}
	else if(strncmp(CUATRO,"PITO",5)==0)
	{
	CUATRO[1]='X';
	}
	else if(strncmp(CUATRO,"QULO",5)==0)
	{
	CUATRO[1]='X';
	}
	else if(strncmp(CUATRO,"RATA",5)==0)
	{
	CUATRO[1]='X';
	}
	else if(strncmp(CUATRO,"RUIN",5)==0)
	{
	CUATRO[1]='X';
	}
	printf("\t\t Tu CURP es:\t%s",CUATRO);
}

void NAC(char Fecha[100])
{
	int i=0;
	for(i;i<strlen(Fecha);i++){
		if(i==2)
		{
			FECHA[0]=Fecha[i];
		}
		else if(i==3)
		{
			FECHA[1]=Fecha[i];
		}
		else if(i==5)
		{
			FECHA[2]=Fecha[i];
		}
		else if(i==6)
		{
			FECHA[3]=Fecha[i];
		}
		else if(i==8)
		{
			FECHA[4]=Fecha[i];
		}
		else if(i==9)
		{
			FECHA[5]=Fecha[i];
		}
	}
	FECHA[6]='\0';
	printf("%s",FECHA);
	}
	
void Enti(int Entidad)
{
	switch(Entidad){
             
        case 1:
            a='A';
            b='S';
            break;
      
        case 2:
            a='B';
            b='S';
            
            break;
            
        case 3:
            a='C';
            b='L';
            break;
            
        case 4:
            a='C';
            b='S';
            break;
            
        case 5:
            a='D';
            b='F';
            break;
            
		case 6:
            a='G';
            b='T';
            break;
			
		case 7:
            a='H';
            b='G';
            break;
		
		case 8:
            a='M';
            b='C';
            break;
			
		case 9:
            a='M';
            b='S';
            break;
		
		case 10:
            a='N';
            b='L';
            break;
		
		case 11:
            a='P';
            b='L';
            break;
		
		case 12:
            a='Q';
            b='R';
            break;
			
		case 13:
            a='S';
            b='L';
            break;								    
		
		case 14:
            a='T';
            b='C';
            break;
		
		case 15:
            a='T';
            b='L';
            break;
            
        case 16:
            a='Y';
            b='N';
            break; 
		
		case 17:
            a='B';
            b='C';
            break;	   
		
        case 18:
            a='C';
            b='C';
            break;      
            
        case 19:
            a='C';
            b='M';
            break;

        case 20:
            a='C';
            b='H';
            break;

        case 21:
            a='D';
            b='G';
            break;

        case 22:
            a='G';
            b='R';
            break;
     
        case 23:
            a='J';
            b='C';
            break;
  
        case 24:
            a='M';
            b='N';
            break;

        case 25:
            a='N';
            b='T';
            break;

        case 26:
            a='O';
            b='C';
            break;
            
        case 27:
            a='Q';
            b='T';
            break;

        case 28:
            a='S';
            b='P';
            break;

        case 29:
            a='S';
            b='R';
            break;

        case 30:
            a='T';
            b='S';
            break;
 
        case 31:
            a='V';
            b='Z';
            break;
                  
        case 32:    
            a='Z';
            b='S';
            break;         
         }    
		 E[0]=a;
		 E[1]=b;     
         printf("%s",E);
}

void PA(char APaterno[100], char AMaterno[100], char NOMBRE[100])
{
	int i=1;
	while (APaterno[i]!='\0')
	{
		if((APaterno[i]=='B')||(APaterno[i]=='C')||(APaterno[i]=='D')||(APaterno[i]=='F')||(APaterno[i]=='G')||(APaterno[i]=='H')||(APaterno[i]=='J')||(APaterno[i]=='K')||(APaterno[i]=='L')||(APaterno[i]=='M')||(APaterno[i]=='N')||(APaterno[i]=='P')||(APaterno[i]=='Q')||(APaterno[i]=='R')||(APaterno[i]=='S')||(APaterno[i]=='T')||(APaterno[i]=='V')||(APaterno[i]=='W')||(APaterno[i]=='X')||(APaterno[i]=='Y')||(APaterno[i]=='Z')){
		AP1[0]=APaterno[i];
		break;
	}
	else{
		i++;
	}
	
}
	printf("%s",AP1);
	i=1;
	while (AMaterno[i]!='\0')
	{
        if((AMaterno[i]=='B')||(AMaterno[i]=='C')||(AMaterno[i]=='D')||(AMaterno[i]=='F')||(AMaterno[i]=='G')||(AMaterno[i]=='H')||(AMaterno[i]=='J')||(AMaterno[i]=='K')||(AMaterno[i]=='L')||(AMaterno[i]=='M')||(AMaterno[i]=='N')||(AMaterno[i]=='P')||(AMaterno[i]=='Q')||(AMaterno[i]=='R')||(AMaterno[i]=='S')||(AMaterno[i]=='T')||(AMaterno[i]=='V')||(AMaterno[i]=='W')||(AMaterno[i]=='X')||(AMaterno[i]=='Y')||(AMaterno[i]=='Z')){		
		AP2[0]=AMaterno[i];
		break;
		}
		else{
			i++;
		}
	}
	
	printf("%s",AP2);
	
	i=1;
	while (NOMBRE[i]!='\0')
	{
		if((NOMBRE[i]=='B')||(NOMBRE[i]=='C')||(NOMBRE[i]=='D')||(NOMBRE[i]=='F')||(NOMBRE[i]=='G')||(NOMBRE[i]=='H')||(NOMBRE[i]=='J')||(NOMBRE[i]=='K')||(NOMBRE[i]=='L')||(NOMBRE[i]=='M')||(NOMBRE[i]=='N')||(NOMBRE[i]=='P')||(NOMBRE[i]=='Q')||(NOMBRE[i]=='R')||(NOMBRE[i]=='S')||(NOMBRE[i]=='T')||(NOMBRE[i]=='V')||(NOMBRE[i]=='W')||(NOMBRE[i]=='X')||(NOMBRE[i]=='Y')||(NOMBRE[i]=='Z')){		
	    AP3[0]=NOMBRE[i];
	    break;
	}
	else{
		i++;
	}
}
printf("%s",AP3);

AP4 = rand() % 11;
AP5 = rand() % 11;

printf("%d",AP4); 
printf("%d",AP5);
}
