#include<stdio.h>

int main(){
	
	short size=10;
	int arreglo[size];
	int i,num;
	
	srand(time(NULL));
	
	for(i=0;i<size;i++){
		
		num=rand()%100+1;
		arreglo[i]=num;
		
		printf("Posicion %i, valor: %i\n",i+1,arreglo[i]);
		
	}
	
	printf("\nArreglo a la inversa:\n\n");
	for(i=size-1;i>0;i--) printf("Posicion %i, valor: %i\n",i+1,arreglo[i]);
	
	return 0;
}
