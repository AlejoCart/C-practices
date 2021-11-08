#include<stdio.h>

void main(){

    int arreglo[10];
    int i,num;
    int resta=0;
    srand(time(NULL));
    
    for(i=0;i<10;i++){
    	
    	num=rand()%10+1;
    	arreglo[i]=num;
    	
    	if(i==0) resta=num;
    	else resta-=num;
    	
    	printf("Arreglo en posicion: %i, vale: %i\n",i+1,arreglo[i]);
    	printf("El producto es: %i\n",resta);
    	
	}
}
