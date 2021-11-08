#include <stdio.h>
//Suma repetitiva
void main(){
	
	int i,total;
	
	while(i!=0){
		printf("Ingrese un numero o 0 para salir \n");
		scanf("%i",&i);
		total+=i;
		printf("Valor actual: %i \n", total);
		
	}
	printf("Fin del programa.");
}
