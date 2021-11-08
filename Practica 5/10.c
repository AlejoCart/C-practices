#include<stdio.h>

void pro();

void main(){
	
	int a,b;
	
	printf("Ingrese un valor ");
	scanf("%i",&a);
	printf("Ingrese un valor ");
	scanf("%i",&b);
	
	pro(a,b);
	}

void pro(int a, int b){
	
	int suma,mult;
	
	suma=a+b;
	mult=a*b;
	
	printf("La suma de ambos valores es %i\n",suma);
	printf("La mult de ambos valores es %i",mult);
	
}


