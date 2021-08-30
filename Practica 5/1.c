#include<stdio.h>
#include<stdbool.h>

bool esPar1(int a){
	
	if(a%2==0) return true;
	else return false;
}

void esPar2(int a){
	
	if(a%2==0) printf("Es par\n");
	else printf("Es impar\n");
}

int esPar3(int a);

int main (){
	int numero;
	
	printf("Ingrese un numero\n");
	scanf("%i",&numero);
	
	if(esPar1(numero)) printf("Es par\n"); //para booleana
	else printf("Es impar\n");
	
	esPar2(numero);
	
	if(esPar3(numero)>0) printf("Es par \n");
	else printf("Es impar\n");	
	
	
	return 0;
}

int esPar3(int a){
	
	if(a%2==0) return 1;
	else return -1;
	
}
