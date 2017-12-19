#include <stdio.h>
#include "FUNCIONES.h"

void factorialI(int N){
	
	int i; 
	int fac=1;
	for(i=1;i<=N;i++)
	{
		fac=fac*i;
	}
	printf("%d\n",fac);
	
}

void factorialR(int N){
	
	int fac=1;
	fac=fact(N);
	printf("%d\n",fac);
	
}


long fact(int N)
{
	if(N==0 || N==1)
	return 1;
return fact(N-1)*N;
}

void serieIterativa(int N)
{
	int n1=1,n2=0,n=0,p=N,i;
	for(i=0;i<(p-1);i++)
	{
		n=n1+n2;
		n2=n1;
		n1=n;
	}
	
}


long fib(int N)
{
	printf("f(%d)",N);
	if(N==0 || N==1)
		return N;
	return fib(N-1)+fib(N-2);
}

int fib_i(int N)
{
	int A[N+1],i;
	A[0]=0;A[1]=1;
	
	for(i=2;i<=N;i++)
		A[i]=-1;
	return fibArr(A,N);
}

int fibArr(int *A,int N)
{
	printf("fib(%d)",N);
	if(N==0 || N==1)												//Caso Base
		return N;
	if(A[N]>-1)
		return A[N];
		
	A[N-2]=fibArr(A,N-2);
	
	return A[N-2]+fibArr(A,N-1);
	
}

void TorresHanoi(int NoDis,char O,char A,char D)
{
	if(NoDis==1)													//Caso Base
	{
		printf("Mover disco %d de %c a %c\n",NoDis,O,D);
	}
	else
	{
		TorresHanoi(NoDis-1,O,D,A);
		printf("Mover disco %d de %c a %c\n",NoDis,O,D);
		TorresHanoi(NoDis-1,A,O,D);
	}
}

int e(char *c,int I,int F)
{
	int p;
	if(t(c,I,F))
		return 1;
		
	p=buscasigno(c,I,F,'+');
	
	if(p>0 && t(c,I,p-1) && t(c,p+1,F))
		return 1;
	return 0;
}

int t(char *c,int I,int F)
{
	
	int p;
	if(f(c,I,F))
		return 1;
		
	p=buscasigno(c,I,F,'*');
	if(p>0 && f(c,I,p-1) && f(c,p+1,F))
		return 1;
	return 0;
}

int f(char *c,int I,int F)
{
	if(I==F && c[F]>='A' && c[I]<='Z' || c[F]>='a' && c[I]<='z')
		return 1;
	
    if(c[I]=='(' && c[F]==')' && e(c,I+1,F-1))
	
		return 1;
	
	return 0;
}

int buscasigno(char *c,int I,int F,char signo)
{
	int p,flag=0;
	if(c[I]=='(' && c[F]==')')
	{
		return 0;
	}
	
		for(p=I;p<F;p++)
		{
			if(c[p]=='(')
			{
				flag++;
			}
			if(c[p]==')')
			{
				flag--;
			}
			if(c[p]==signo && flag==0)
			{
				return p;
			}
		}
	
	return 0;
}
