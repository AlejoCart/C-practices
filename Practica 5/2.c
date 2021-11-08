#include<stdio.h>

float mult(float a, float b);

void main (){
	
	float a,b,re;
	
	printf("Ingrese el primer valor: ");
	scanf("%f", &a);
	
	printf("\nIngrese el segundo valor: ");
	scanf("%f", &b);
	
	//printf("%f %f",a,b);
	
	re=mult(a,b);
	//printf("%f",re);
	printf("\nLos numeros multilpicados dan: %.2f", re);
	
}

float mult(float a, float b){
	
	float resultado= a*b;
	return resultado;
}
