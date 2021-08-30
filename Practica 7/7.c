#include<stdio.h>

void main(){
	
	int matriz [3][3];
	int matrizTranspuesta[3][3];
	int i,j,contadorIgual=0;
	
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
	
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			
			if(matriz[i][j]==matrizTranspuesta[i][j])contadorIgual++;
			printf("contador:%i ma1:%i maT:%i\n",contadorIgual,matriz[i][j],matrizTranspuesta[i][j]);
		}
		printf("\n");
	}
	if(contadorIgual==9)printf("la matriz es simetrica");
	else printf("Las matrices no es simetrica");
	
	
}
