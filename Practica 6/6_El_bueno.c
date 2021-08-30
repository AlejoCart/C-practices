#include<stdio.h>

void main(){
	
	int i,j,size=3,suma,intentos;
	short rep=1;
	int array[size];
	
	srand(time(NULL));
	
	do{
	suma=0;
	printf("Intento nro: %i\n",intentos+1);	
	
	for(i=0;i<size;i++){
		
		array[i]=rand()%10;
		printf("Posicion: %i - Valor: %i\n",i,array[i]);
		
	}
	
	for(i=0;i<size;i++){
		
		for(j=0;j<size;j++){
			
			if(j!=i)
			suma=suma+array[j];
			
		}
		printf("Suma: %i\n",suma);
		if(array[i]>suma) {
		printf("\n**Valor encontrado**\nNumero mayor: %i . Posicion: %i\n",array[i],i);
		rep=0;
		break;}
	}
	intentos++;
	printf("Fin del intento\n\n");
	
	}while(rep==1);
	
}
