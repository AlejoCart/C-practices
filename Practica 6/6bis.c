#include<stdio.h>

void main(){
	
	int i,suma,size=3,rep=1;
    int array[size];
    int intentos;
    
    srand(time(NULL));
    do{
    	printf("Intento:%i \n",intentos);
    for(i=0;i<size;i++){
    	
    	array[i]=rand()%10+1;
    	suma+=array[i];
    	printf("Posicion: %i - valor: %i\n",i+1,array[i]);
	}
	
	i=0;
	do{
		if( array[i]>suma){ printf("\nValor encontrado, posicion: %i\n",array[i]);
		rep=0;
		printf("Numero de intentos: %.1f",intentos);
		break;}
		i++;
	}while(i<size);
	
	printf("\nFin del progama\n\nNuevo intento: \n");
	printf("\n");
	intentos++;
	
    }while(rep==1);
}
