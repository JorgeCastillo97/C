#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void evaluacion(int A[],FILE *f,int len);

int main()
{
	system("color 07");
	srand(time(NULL));
	int i,j,protocol,ch;
	double x,y;
	int c[32];
	char t;
	FILE *a, *b;
	
	a=fopen("tramas.txt","w");
	b=fopen("aceptadas.txt","w");
	if(!a || !b)
	{
		printf("¡ERROR!");
		system("pause");
		exit(1);
	}
	
	fputs("TRAMAS ENVIADAS\n\n\n",a);
	fputs("TRAMAS ACEPTADAS\n\n\n",b);
	do
	{
		printf("****************DISPOSITIVO ENCENDIDO***********************\n\n\n");
		for(j=0;j<50;j++)
		{
			for(i=0;i<24;i++)
			{
				ch=rand()%2;
				c[i]=ch;
				t=ch+48;
				fputc(t,a);
			}
			printf("TIMEOUT...\n");
			for(x=0;x<=1500;x++){
				for(y=0;y<=1500;y++){
				}
			}
		printf("TRAMAS ENVIADAS...\n\n");
			evaluacion(c,b,24);
			fputc('\n',a);
		}
		
		protocol=rand()%2;
	}while(protocol==1);
	printf("******************DISPOSITIVO APAGADO**********************\n\n");
	system("pause");
	return 0;
}

void evaluacion(int A[],FILE *f,int len)
{
	
	int e,x,S;
	char m,n,o,p,t;
	
	e=0;
	fputs("D(",f);
	fputc(' ',f);
	fputs(",q",f);
	n=e+48;
	fputc(n,f);
	fputc(')',f);
	fputc('\n',f);
	for(x=0;x<len;x++)
	{
		S=A[x];
		
		switch (S)
			{
				case 0:
					{
						if(x==0)
						{
							e=1;
							o=e+48;
							p=S+48;
							fputc(p,f);
							fputs("-->q",f);
							fputc(o,f);
							fputc('\n',f);
							fputs("D(",f);
							m=S+48;
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
							p=S+48;
							fputc(p,f);
							fputs("-->q",f);
							fputc(o,f);
							fputc('\n',f);
							fputs("D(",f);
							m=S+48;
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
							p=S+48;
							fputc(p,f);
							fputs("-->q",f);
							fputc(o,f);
							fputc('\n',f);
							fputs("D(",f);
							m=S+48;
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
							p=S+48;
							fputc(p,f);
							fputs("-->q",f);
							fputc(o,f);
							fputc('\n',f);
							fputs("D(",f);
							m=S+48;
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
							p=S+48;
							fputc(p,f);
							fputs("-->q",f);
							fputc(o,f);
							fputc('\n',f);
							fputs("D(",f);
							m=S+48;
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
						if(x==0)
						{
							e=2;
							o=e+48;
							p=S+48;
							fputc(p,f);
							fputs("-->q",f);
							fputc(o,f);
							fputc('\n',f);
							fputs("D(",f);
							m=S+48;
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
							p=S+48;
							fputc(p,f);
							fputs("-->q",f);
							fputc(o,f);
							fputc('\n',f);
							fputs("D(",f);
							m=S+48;
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
							p=S+48;
							fputc(p,f);
							fputs("-->q",f);
							fputc(o,f);
							fputc('\n',f);
							fputs("D(",f);
							m=S+48;
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
							p=S+48;
							fputc(p,f);
							fputs("-->q",f);
							fputc(o,f);
							fputc('\n',f);
							fputs("D(",f);
							m=S+48;
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
							p=S+48;
							fputc(p,f);
							fputs("-->q",f);
							fputc(o,f);
							fputc('\n',f);
							fputs("D(",f);
							m=S+48;
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
	if(e==0)
	{
		printf("\nTRAMA ACEPTADA\n\n");
		for(x=0;x<len;x++)
		{
			t=A[x]+48;
			putc(t,f);
		}
		fputc('\n',f);
	}
	else
	{
		printf("\nTRAMA NO ACEPTADA\n\n");
	}
}
