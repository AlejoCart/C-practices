#include<stdio.h>

int mayor(int a,int b,int c){
	
	if(a>b &&a>c) return a;
	else if(b>a && b>c) return b;
	else return c;
}

int main(){
	
	int a,b,c;
	
	printf("Ingrese un numero ");
	scanf("%i",&a);
	printf("Ingrese un numero ");
	scanf("%i",&b);
	printf("Ingrese un numero ");
	scanf("%i",&c);
	
	printf("El mayor numero es: %i",mayor(a,b,c));
	
	
	return 0;
}
