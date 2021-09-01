#include<stdio.h>
#include<string.h>
#include<conio.h>

void main(){
	
	char entero[20];
	char real[20];
	int num;
	float numR;
	
	printf("Ingrese una cadena de caracteres numericos enteros: ");
	gets(entero);
	printf("Ingrese una cadena de caracteres numericos Reales: ");
	gets(real);
	
	num= atoi(entero);
	numR= atof(real);
	
	printf("Entero: %i\n",entero);
	printf("Real: %f",real);
	
	getch();
	
}
