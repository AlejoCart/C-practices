/*  Sala 5
	-Alexander Cabrera
	-Luis Ruiz
	-Alejo Cartolano
	-Cosentino Luca	*/

#include<stdio.h>
#include<math.h>

// Triangulos

int main(){
    
    float num1, num2, num3;
    
    printf("Ingrese el valor de a:  \n");
    scanf("%f", &num1);
    printf("Ingrese el valor de b: \n");
    scanf("%f", &num2);
    printf("ingrese el valor de c: \n");
    scanf("%f", &num3);
==
    if(num1< num2+num3 && num2 < num3+num1 && num3<num1+num2){
    
	if(num1==num2 || num2==num3|| num1=num3){
        printf("El triangulo es isoceles");
	}
    else if(num1!= num2 && num2!= num3){
        printf("El triangulo es escaleno");   
	}
	
}else printf("No es un triangulo valido");
	return 0;        
}
        
        
        
        
