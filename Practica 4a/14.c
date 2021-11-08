#include<stdio.h>

void main (){
	
	int i;
	int total=0;
	
	do{
		printf("Ingrese un numero positivo o un negativo para finalizar \n");
		scanf("%i", &i);
		
		total+=i;
		
		printf("Total hasta el momento: %i \n",total);
	}while(i>0);
	
	printf("Fin del programa, total final: %i",total);
}
