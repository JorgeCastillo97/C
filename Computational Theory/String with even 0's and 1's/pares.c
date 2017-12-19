#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
	srand(time(NULL));
	system("color 07");
	int i,ch,d,e;
	char n,m,o,p;
	long int len=rand()%1000000;
	int C[len];
	FILE *f=fopen("cadena.txt","w");
	
	if(!f)
	{
		printf("¡ERROR!");
		system("pause");
		exit(1);
	}
	
	fputs("CADENA GENERADA\n\n",f);
	
	printf("Longitud de la cadena: %ld\n",len);
	
	for(i=0;i<len;i++)
	{
		ch=rand()%2;
		C[i]=ch;
		n=C[i]+48;
		fputc(n,f);
	}
	fputs("\n\n",f);
	e=0;
	fputs("ESTADO INCIAL...\n",f);
	fputs("D(",f);
	fputc(' ',f);
	fputs(",q",f);
	n=e+48;
	fputc(n,f);
	fputc(')',f);
	fputc('\n',f);
	for(i=0;i<len;i++)
	{
		d=C[i];
		
		switch (d)
			{
				case 0:
					{
						if(i==0)
						{
							e=1;
							o=e+48;
							p=d+48;
							fputc(p,f);
							fputs("-->q",f);
							fputc(o,f);
							fputc('\n',f);
							fputs("D(",f);
							m=d+48;
							fputc(m,f);
							fputs(",q",f);
							n=e+48;
							fputc(n,f);
							fputc(')',f);
							fputc('\n',f);
							break;
						}
						if(e==0)
						{
							e=1;
							o=e+48;
							p=d+48;
							fputc(p,f);
							fputs("-->q",f);
							fputc(o,f);
							fputc('\n',f);
							fputs("D(",f);
							m=d+48;
							fputc(m,f);
							fputs(",q",f);
							n=e+48;
							fputc(n,f);
							fputc(')',f);
							fputc('\n',f);
						}
						else if(e==1)
						{
							e=0;
							o=e+48;
							p=d+48;
							fputc(p,f);
							fputs("-->q",f);
							fputc(o,f);
							fputc('\n',f);
							fputs("D(",f);
							m=d+48;
							fputc(m,f);
							fputs(",q",f);
							n=e+48;
							fputc(n,f);
							fputc(')',f);
							fputc('\n',f);
						}
						else if(e==2)
						{
							e=3;
							o=e+48;
							p=d+48;
							fputc(p,f);
							fputs("-->q",f);
							fputc(o,f);
							fputc('\n',f);
							fputs("D(",f);
							m=d+48;
							fputc(m,f);
							fputs(",q",f);
							n=e+48;
							fputc(n,f);
							fputc(')',f);
							fputc('\n',f);
						}
						else if(e==3)
						{
							e=2;
							o=e+48;
							p=d+48;
							fputc(p,f);
							fputs("-->q",f);
							fputc(o,f);
							fputc('\n',f);
							fputs("D(",f);
							m=d+48;
							fputc(m,f);
							fputs(",q",f);
							n=e+48;
							fputc(n,f);
							fputc(')',f);
							fputc('\n',f);
						}
						break;
					}
				case 1:
					{
						if(i==0)
						{
							e=2;
							o=e+48;
							p=d+48;
							fputc(p,f);
							fputs("-->q",f);
							fputc(o,f);
							fputc('\n',f);
							fputs("D(",f);
							m=d+48;
							fputc(m,f);
							fputs(",q",f);
							n=e+48;
							fputc(n,f);
							fputc(')',f);
							fputc('\n',f);
							break;
						}
						if(e==0)
						{
							e=2;
							o=e+48;
							p=d+48;
							fputc(p,f);
							fputs("-->q",f);
							fputc(o,f);
							fputc('\n',f);
							fputs("D(",f);
							m=d+48;
							fputc(m,f);
							fputs(",q",f);
							n=e+48;
							fputc(n,f);
							fputc(')',f);
							fputc('\n',f);
						}
						else if(e==1)
						{
							e=3;
							o=e+48;
							p=d+48;
							fputc(p,f);
							fputs("-->q",f);
							fputc(o,f);
							fputc('\n',f);
							fputs("D(",f);
							m=d+48;
							fputc(m,f);
							fputs(",q",f);
							n=e+48;
							fputc(n,f);
							fputc(')',f);
							fputc('\n',f);
						}
						else if(e==2)
						{
							e=0;
							o=e+48;
							p=d+48;
							fputc(p,f);
							fputs("-->q",f);
							fputc(o,f);
							fputc('\n',f);
							fputs("D(",f);
							m=d+48;
							fputc(m,f);
							fputs(",q",f);
							n=e+48;
							fputc(n,f);
							fputc(')',f);
							fputc('\n',f);
						}
						else if(e==3)
						{
							e=1;
							o=e+48;
							p=d+48;
							fputc(p,f);
							fputs("-->q",f);
							fputc(o,f);
							fputc('\n',f);
							fputs("D(",f);
							m=d+48;
							fputc(m,f);
							fputs(",q",f);
							n=e+48;
							fputc(n,f);
							fputc(')',f);
							fputc('\n',f);
						}
						break;
					}
			}
	}
	
	printf("Estado del automata: %d\n",e);
	
	if(e==0)
	{
		fputs("\n¡¡¡¡CADENA ACEPTADA!!!!\n",f);
		printf("\n¡¡¡¡CADENA ACEPTADA!!!!\n");
	}
	
	system("pause");
	return 0;
}
