#include<stdio.h>

void main(){
	
	int i,j,k,producto=0,alto=3,ancho=3;
	int matriz1[alto][ancho];
	int matriz2[alto][ancho];
	int matrizProduct[alto][ancho];
	srand(time(NULL));
	
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){	
			matriz1[i][j]=rand()%10;
		}
	}
	for(i=0;i<alto;i++){
		for(j=0;j<ancho;j++){
			
			printf("|%i|",matriz1[i][j]);
			
		}
		printf("\n");
	}
	printf("\n");
	for(i=0;i<alto;i++){
		for(j=0;j<ancho;j++){	
			matriz2[i][j]=rand()%10;
		}
	}
	for(i=0;i<alto;i++){
		for(j=0;j<ancho;j++){
			
			printf("|%i|",matriz2[i][j]);
			
		}
		printf("\n");
	}
	printf("\n");
	
	for(i=0;i<alto;i++){
		for(j=0;j<ancho;j++){
			for(k=0;k<ancho;k++){
				
				printf("(%i + (%i*%i)) +",producto,matriz1[i][k],matriz2[k][j]);
				producto=producto+(matriz1[i][k]*matriz2[k][j]);
			}
			printf("\n");
			matrizProduct[i][j]=producto;
			producto=0;
		}
	}
		printf("\n");
	for(i=0;i<alto;i++){
		for(j=0;j<ancho;j++){
			
			printf("|%i|",matrizProduct[i][j]);
			
		}
		printf("\n");
	}
}
