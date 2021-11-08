#include<stdio.h>

void main(){
	
	int i,suma,size=10,rep;
    int array[size];
    
    srand(time(NULL));
    do{
    for(i=0;i<size;i++){
    	
    	array[i]=rand()%100+1;
    	suma+=array[i];
    	printf("Posicion: %i - valor: %i\n",i+1,array[i]);
	}
	
	i=0;
	do{
		if(array[i]==suma) printf("\nValor encontrado, posicion: %i\n",array[i]);
		i++;
	}while(i<size);
	
	printf("\nFin del progama\n\nIntertarlo de nuevo? 0:no 1:si ");
	scanf("%i",&rep);
	printf("\n");
    }while(rep=1);
}
