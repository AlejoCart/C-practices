#include<stdio.h>
#include<conio.h>
void main(){
	
	int matriz [100][100];
	int matriz2[100][100];
	int i,j,paso=0;
	int alto;
	int ancho;
	srand(time(NULL));

	printf("Ingrese el alto(Max:100):");
	do{
	scanf("%i",&alto);
	if(alto<=0)printf("La matriz necesita un valor positivo!\n");
	else if(alto>100)printf("El valor excede el maximo\n");
	else if(alto>0 && alto<=100){paso=1;}
    }while(paso==0);    
    
    printf("Ingrese el ancho(Max:100):");
	do{
	scanf("%i",&ancho);
	if(ancho<=0)printf("La matriz necesita un valor positivo!\n");
	else if(ancho>100)printf("El valor excede el maximo\n");
    }while(ancho>100 && ancho<=0);
    
    printf("Alto: %i - Ancho: %i\n",alto,ancho);
    
    printf("\nMatriz 1\n");
    for(i=0;i<alto;i++){
    	for(j=0;j<ancho;j++){
    		matriz[i][j]=(rand()%100)+1;
		}
	}
	for(i=0;i<alto;i++){
    	for(j=0;j<ancho;j++){
    		printf("%i | ",matriz[i][j]);
		}
		printf("\n");
	}
	printf("\nMatriz 2\n");
	
	for(i=0;i<alto;i++){
    	for(j=0;j<ancho;j++){
    		matriz2[i][j]=(rand()%100)+1;
		}
	}
	for(i=0;i<alto;i++){
    	for(j=0;j<ancho;j++){
    		printf("%i | ",matriz2[i][j]);
		}
		printf("\n");
	}
    
}
