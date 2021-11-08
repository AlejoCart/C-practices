#include<stdio.h>
//contador de numeros mayores a 0
void main(){
	
	int numero,contador;
	
	do{
		printf("Ingrese un numero, el que quiera: ");
		scanf("%i", &numero);
		
		if(numero>0) contador++;
		
	}while(!(numero==0));
	
	printf("La cantidad de numeros ingresados mayores a 0 es: %i",contador);
	
}

