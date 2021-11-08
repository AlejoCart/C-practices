#include<stdio.h>

float cuadrado(int e);

void main(){
	
	int num;
	
	printf("Ingrese numero: ");
	scanf("%i",&num);
	
	printf("El resultado es: %.2f",cuadrado(num));
}

float cuadrado(int e){
	float resultado= e*e;
	
return resultado;	
}
