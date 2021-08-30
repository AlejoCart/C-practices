#include<stdio.h>

float farenheit(float temperatura){
	float temp=temperatura*9/5+32;
	return temp;
}

float kelvin(float a){
	float temp=a+273.15;
	return temp;}

void main(){
	
	int temperatura;
	int opcion;
	
	printf("Ingrese la temperatura en Celsius");
	scanf("%i",&temperatura);
	
	printf("Escoja: \n1: Convertir a Farenheit\n2: Convertir a Kelvin");
	scanf("%i",&opcion);
	
	switch (opcion){
		
		case 1:{
			printf("resultado %.2f ",farenheit(temperatura));
			break;
		}
		case 2:{
			printf("resultado %.2f ",kelvin(temperatura));		
			break;
		}
		default:{
			printf("Opcion incorrecta");

			break;
		}
		
		
	}	
}
