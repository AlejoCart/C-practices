#include<stdio.h>
//mejora del 16
void main(){
	
	int codigo=1000;
	int contrasenha=1234;
	int codigo2,contrasenha2;
	
	do{
		printf("Ingrese su numero de usuario y contraseņa \n");
		printf("Usuario: \n");
		scanf("%i",&codigo2);
		
		printf("Contraseņa: \n");
		scanf("%i",&contrasenha2);
		
		if(codigo!=codigo2) printf("Usuario incorrecto \n");
		if (contrasenha!=contrasenha2) printf("Contraseņa incorrecta \n");
		
	}while(!(codigo==codigo2 && contrasenha==contrasenha2));
	
	printf("Bienvenido Agente Smith");
}
