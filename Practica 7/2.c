#include<stdio.h>

int main(){
	
	short alto=3, ancho=3,i,j;
	int matriz [alto][ancho];
	srand(time(NULL));
	
	for(i=0;i<alto;i++){
		for(j=0;j<3;j++){
			
			matriz[i][j]=rand()%101;
			
		}
	}
	printf("Matriz:\n");
	for(i=0;i<alto;i++){
		for(j=0;j<ancho;j++){
			printf("%i|",matriz[i][j]);
		}
		printf("\n");
	}
	
	printf("Valores diagonales:%i - %i - %i",matriz[0][0],matriz[1][1],matriz[2][2]);
	
	
	
	return 0;
}
