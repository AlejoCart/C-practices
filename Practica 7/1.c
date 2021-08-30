#include<stdio.h>

void main(){
	
	short alto=3, ancho=3,i,j;
	int matriz [alto][ancho];
	
	for(i=0;i<alto;i++){
		for(j=0;j<ancho;j++){
			printf("Ingrese un valor\nColumna %i - Fila %i ",i,j);
			scanf("%i",&matriz[i][j]);
			printf("\n");
		}
	}
	printf("Matriz:\n");
	for(i=0;i<alto;i++){
		for(j=0;j<ancho;j++){
			printf("%i|",matriz[i][j]);
		}
		printf("\n");
	}
	
}
