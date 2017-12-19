#include <stdlib.h>
#include <stdio.h>

int main(){
	int a;
	float b;
	double c;
	char d;
	//size of: Tamaño en bits
	
	printf("Size of int: %d bytes \n",sizeof(a));
	printf("Size of float: %d bytes \n",sizeof(b));
	printf("Size of double: %d bytes \n",sizeof(c));
	printf("Size of char: %d byte \n",sizeof(d));
	printf("Size of short int: %d bytes \n",sizeof(short int));
	printf("Size of long int: %d bytes \n",sizeof(long int));
	printf("Size of long: %d bytes \n",sizeof(long));
	printf("Size of long long: %d bytes \n",sizeof(long long));
	system("pause");
	return 0;
}
