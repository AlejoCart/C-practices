#include<stdio.h>

void main(){
	
	int codigo=1000;
	int contrasenha=1234;
	int codigo2,contrasenha2;
	
	do{
		printf("Ingrese su numero de usuario y contrase�a \n");
		printf("Usuario: \n");
		scanf("%i",&codigo2);
		printf("Contrase�a: \n");
		scanf("%i",&contrasenha2);
	}while(!(codigo==codigo2 && contrasenha==contrasenha2));
	
	printf("Bienvenido Agente Smith");
}
