#include<stdio.h>
//transponer una matriz: invertir filas por columnas y viceversa

int main(){
	
	int matriz [3][3];
	int matrizTranspuesta[3][3];
	int i,j;
	
	printf("Ingrese los valores:\n");
	
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			
			printf("Columna %i Fila %i:",i,j);
			scanf("%i",&matriz[i][j]);
		}
		printf("\n");
	}
	printf("Matriz ingresada:\n");
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			
			printf("|%i|",matriz[i][j]);
		}
		printf("\n");
	}
	printf("Matriz transversa");
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			
			matrizTranspuesta[i][j]=matriz[j][i];
		}
		printf("\n");
	}
	
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			
			printf("|%i|",matrizTranspuesta[i][j]);
		}
		printf("\n");
	}
	return 0;
}
