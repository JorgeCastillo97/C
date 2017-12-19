#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/*Diseña un algoritmo que al recibnir como datos los 3 lados de un triangulo, calcule e imprima su area. Estom se puede calcular aplicando la siguiente formula:

AREA= sqrt(((AUX)*(AUX-l1)*(AUX-l2)*(AUX-l3)))
AUX=(L1+L2+L3)/2*/

int main(){
	float area;
	int l1,l2,l3;
	float aux;
	
	printf("Introduce el valor del lado 1:\n");
	scanf("%d",&l1);
	printf("Introduce el valor del lado 2:\n");
	scanf("%d",&l2);
	printf("Introduce el valor del lado 3:\n");
	scanf("%d",&l3);
	aux=((l1+l2+l3)/2);
	
	area=sqrt((aux)*(aux-l1)*(aux-l2)+(aux-l3));
	
	printf("El valor del area es: %f\n",area);
	system("pause");
}
