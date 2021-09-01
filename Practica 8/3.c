#include<stdio.h>
#include<string.h>
void main(void){
	
	char frase1[20];
	char frase2 [20];
	
	printf("Ingrese la primera frase(Max:20 caracteres)\n");
	gets(frase1);
	printf("Ingrese la Segunda frase(Max:20 caracteres)\n");
	gets(frase2);
	
	if(strcmp(frase1,frase2)==0) printf("Las frases son iguales");
	else if(strcmp(frase1,frase2)<0) printf("La frase %s es menor alfabeticamente a %s",frase1,frase2);
	else printf("La frase %s es menor alfabeticamente a %s",frase2,frase1);
	
}
