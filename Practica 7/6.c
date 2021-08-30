#include<stdio.h>

void main(){
	
	int matriz1[3][3];
	int matriz2[3][3];
	int matrizResultado[3][3];
	
	int i,j;
	
	srand(time(NULL));
	
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){	
			matriz1[i][j]=rand()%101;
		}
	}
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			
			printf("|%i|",matriz1[i][j]);
			
		}
		printf("\n");
	}
	printf("\n");
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){	
			matriz2[i][j]=rand()%101;
		}
	}
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			
			printf("|%i|",matriz2[i][j]);
			
		}
		printf("\n");
	}
	
	printf("\nSumando matrices...\n");
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			matrizResultado[i][j]=(matriz1[i][j] + matriz2[i][j]);
			printf("%i + %i = %i ",matriz1[i][j],matriz2[i][j],matrizResultado[i][j]);
		}
		printf("\n");
	}
	printf("\n");
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			printf("|%i|",matrizResultado[i][j]);		
		}
		printf("\n");
	}
	
}
