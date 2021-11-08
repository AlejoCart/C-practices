#include<stdio.h>
//mejora del 17
void main(){
	
	int codigo=1000;
	int contrasenha=1234;
	int codigo2,contrasenha2;
	int contador=3;
	
	do{
		
		printf("Ingrese su numero de usuario y contraseña \n");
		printf("Usuario: \n");
		scanf("%i",&codigo2);
		
		printf("Contraseña: \n");
		scanf("%i",&contrasenha2);
		
		
		if(codigo!=codigo2||contrasenha!=contrasenha2){
		contador--;	
		if(codigo!=codigo2) printf("Usuario incorrecto \n");
		if (contrasenha!=contrasenha2) printf("Contraseña incorrecta \n");
		
		}
	//	printf("Contador %i", contador); para testeo
		
	}while(!(codigo==codigo2 && contrasenha==contrasenha2)&& contador>0);
	
	if(contador>0)
	printf("Bienvenido Agente Smith");
	else printf("Buen suerte la proxima");
}
