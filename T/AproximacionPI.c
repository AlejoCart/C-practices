#include<stdio.h> //stdio=standar input/output

void main(){
	

    int iteracion;
    float PI=4.0;
    double i=3;
    printf("Ingrese el numero de veces: ");
    scanf("%i",&iteracion);
    
    while(i<iteracion){
    	
    	PI=PI-(4/i)+(4/(i+2));
    	i+=4;
    	//	printf("\npi: %i",PI);
	}
	printf("Aproximacion a pi: %f",PI);



}
