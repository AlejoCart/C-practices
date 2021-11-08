#include<stdio.h>


void main(){
	
	short alto=2,ancho=2,i,j;
	int matriz[alto][ancho];
	int otraMatriz[alto][ancho];
	
	for(i=0;i<alto;i++){
		for(j=0;j<3;j++){
			matriz[i][j]=rand()%101;
		}
	}
	for(i=0;i<alto;i++){
		for(j=0;j<3;j++){
			otraMatriz[i][j]=rand()%101;
		}
	}
	printf("Matriz 1:\n");
	for(i=0;i<alto;i++){
		for(j=0;j<ancho;j++){
			printf("|%i|",matriz[i][j]);
		}
		printf("\n");
	}
	printf("\n");
	printf("Matriz 2:\n");
	for(i=0;i<alto;i++){
		for(j=0;j<ancho;j++){
			printf("|%i|",otraMatriz[i][j]);
		}
		printf("\n");
	}
	printf("\nCopiando matriz 1 sobre 2\n\n");
	
	for(i=0;i<alto;i++){
		for(j=0;j<3;j++){
			otraMatriz[i][j]=matriz[i][j];
		}
	}
	
	printf("Matriz 1:\n");
	for(i=0;i<alto;i++){
		for(j=0;j<ancho;j++){
			printf("|%i|",matriz[i][j]);
		}
		printf("\n");
	}
	printf("\n");
	printf("Matriz 2:\n");
	for(i=0;i<alto;i++){
		for(j=0;j<ancho;j++){
			printf("|%i|",otraMatriz[i][j]);
		}
		printf("\n");
	}
	
}
