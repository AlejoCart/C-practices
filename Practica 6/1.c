#include<stdio.h>

void main(){

    int arreglo[10];
    int i, suma=0,num;
    srand(time(NULL));
    
    
    for(i=0;i<10;i++){
    	num=rand()%10+1;
    	arreglo[i]=num;
    	suma=suma+num;
    	printf("En posicion: %i num: %i\n",i+1,arreglo[i]);
    	printf("Suma total:%i \n",suma);
	}
}
