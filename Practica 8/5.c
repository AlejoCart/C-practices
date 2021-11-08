
#include<stdio.h>
#include<string.h>

void main(void){
	
	char palabra[20]={"axca"};
	char palabra2[20];
	strcpy(palabra2,palabra);
	strrev(palabra2);
	printf("Palabra: %s\n",palabra);
	printf("Reverso: %s\n",palabra2);
	
	if(strcmp(palabra,palabra2)==0) printf("La palabra es un palindromo!");
	else printf("La palabra no es un palindromo");
	
}
