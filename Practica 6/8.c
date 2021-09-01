#include<stdio.h>

int main(){
	
	int size=5,i;
	int arreglo1[size],arreglo2[size];
	
	srand(time(NULL));
	
	while(i<size){
		arreglo1[i]=rand()%11;
		printf("Arreglo en la posicion %i vale: %i\n",i+1,arreglo1[i]);
		i++;		
	}
	
	printf("\n");
	for(i=0;i<size;i++){
		
		arreglo2[i]=arreglo1[i]*2;
		printf("Arreglo en la posicion %i vale: %i\n",i+1,arreglo2[i]);
	}
	
	
	return 0;
}
