#include<stdio.h>

int main(){
	
	int i,num,may,size=5;
	int arreglo[size];
	srand(time(NULL));
	
	while(i<size){
		
		arreglo[i]=rand()%101;
		if(arreglo[i]>may) may=arreglo[i];
		
		printf("posicion: %i - valor: %i\n",i,arreglo[i]);
		i++;
	}
	printf("El numero mas grande del arreglo es: %i",may);
	
	return 0;
}
