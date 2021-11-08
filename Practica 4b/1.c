#include<stdio.h>
//magia potagia
int main(){
	
	int i, multiplo;
	
	printf("Ingrese un numero.\n");
	scanf("%i",&multiplo);
	printf("Tabla del: %i \n",multiplo);
	
	for (i=1;i<=10;i++){
		
		printf("%i*%i: ",i,multiplo);
		printf("%i \n",i*multiplo);
		
	}
	
	printf("\nFin de la tabla.");
	return 0;
}
