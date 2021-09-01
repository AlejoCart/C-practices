
#include<stdio.h>
#include<string.h>

int main(void){
	
	char hola[]={"Hola que tal"};
	char input[20];
	
	printf("Ingrese su nombre :");
	gets(input);
	printf("%s %s",hola,input);
	
	
	return 0;
}
