#include<stdio.h>
//elevar numero con exponente, Made in Argentina
int main (){
	
	int a,b,i;
	float resultado=1;
	
	printf("Ingrese valor numerico: \n");
	scanf("%i",&a);
	printf("Ingrese exponente: \n");
	scanf("%i",&b);
	
	for(i=1;i<=b;i++){
		resultado=resultado*a;
	}
	
	printf("Resultado: %f",resultado);
	
	return 0;
}
