#include<stdio.h>
//ez
void main(){
	
	int valor;
	int suma=0;
	
	do{
		printf("Ingrese un valor, valores entre 20-30 y 0 estan prohibidos \n");
		scanf("%i",&valor);
		suma+=valor;
		
	}while(!(valor<=30 && valor>=20)||valor==0);
	
	printf("Suma de los valores mayores a cero ingresados: %i\n", suma);
	printf("Fin del ciclo, siga con su vida");
}
