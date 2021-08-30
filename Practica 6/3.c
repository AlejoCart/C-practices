#include<stdio.h>

void main(){
	
	int arreglo[3];
	int i,inter;
	
	for(i=0;i<3;i++){
		
		printf("Ingrese el valor para la posicion %i: ",i+1);
		scanf("%i",&arreglo[i]);
		//arreglo[i]=inter;
		//printf("\n");
	}
	for(i=0;i<3;i++) printf("Posicion: %i, Valor: %i\n",i+1,arreglo[i]);
	
}
