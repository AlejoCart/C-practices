#include <stdio.h>

float fraccionaria(float num);

int main(){
	
	float a;
	printf("Ingrese un numero con fraccion ");
	scanf("%f",&a);
	
	printf("La parte fraccionaria es: %f",fraccionaria(a));
	return 0;
}

float fraccionaria(float num){
	
	int a=num;
	float res;
	res=num-a;
	return res;
}
